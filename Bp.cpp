#include <string.h>  
#include <stdio.h>  
#include <math.h>  
#include <assert.h>  
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

#include "Bp.h"  

//��ȡѵ��������������  
void BP::GetData(const Vector<Data> _data)
{
    data = _data;
}

void BP::split(char *buffer, Vector<Type> &vec)
{
    char *p = strtok(buffer, " ,");      //\t
    while (p != NULL)
    {
        vec.push_back(atof(p));
        p = strtok(NULL, " \n");
    }
}


void BP::ReadFile(const char * InutFileName, int m ,int n)
{
    FILE *pFile;
    //Test
    //pFile = fopen("D:\\testSet.txt", "r");

    pFile = fopen(InutFileName, "r");

    if (!pFile)
    {
        printf("open file %s failed...\n", InutFileName);
        exit(0);
    }

    //init dataSet  
    char *buffer = new char[100];
    Vector<Type> temp;

    while (fgets(buffer, 100, pFile))
    {
        Data t;
        temp.clear();
        split(buffer, temp);
        //data[x].push_back(temp);

        for (int i = 0; i < temp.size(); i++)
        {
            if (i < m)
                t.x.push_back(temp[i]);
            else
                t.y.push_back(temp[i]);
        }
        data.push_back(t);
    }
    //init rowLen   
    rowLen = data.size();
}

void BP::ReadTestFile(const char * InputFileName, int m, int n)
{
    FILE *pFile;

    pFile = fopen(InputFileName, "r");
    if (!pFile)
    {
        printf("open file %s failed...\n", InputFileName);
        exit(0);
    }

    //init dataSet  
    char *buffer = new char[100];
    Vector<Type> temp;

    while (fgets(buffer, 100, pFile))
    {
        Vector<Type> t;
        temp.clear();
        split(buffer, temp);
        for (int i = 0; i < temp.size(); i++)
        {
            t.push_back(temp[i]);
        }
        testdata.push_back(t);
    }

    restrowLen = testdata.size();
}

void BP::WriteToFile(const char * OutPutFileName)
{
    ofstream fout;
    fout.open(OutPutFileName);
    if (!fout)
    {
        cout << "file result.txt  open failed" << endl;
        exit(0);
    }

    Vector<Vector<Type> > ::iterator it = testdata.begin();
    Vector<Vector<Type> > ::iterator itx = result.begin();
    while (it != testdata.end())  
    {    
        Vector<Type> ::iterator itt = (*it).begin();
        Vector<Type> ::iterator ittx = (*itx).begin();
        while (itt != (*it).end())
        {
             fout << (*itt) << ",";
             itt++;
        }
        fout << "\t";
        while (ittx != (*itx).end())
        {
            fout << (*ittx) << ",";
            ittx++;
        }
        it++;
        itx++;
        fout << "\n";
    }
}

//��ʼ����ѵ��  
void BP::Train()
{
    printf("Begin to train BP NetWork!\n");
    GetNums();
    InitNetWork();
    int num = data.size();

    for (int iter = 0; iter <= ITERS; iter++)
    {
        for (int cnt = 0; cnt < num; cnt++)
        {
            //��һ������ڵ㸳ֵ  
            for (int i = 0; i < in_num; i++)
                x[0][i] = data.at(cnt).x[i];

            while (1)
            {
                ForwardTransfer();
                if (GetError(cnt) < ERROR)    //������Ƚ�С������Ե�����������ѭ��  
                    break;
                ReverseTransfer(cnt);
            }
        }
        printf("This is the %d th trainning NetWork !\n", iter);

        Type accu = GetAccu();               //ÿһ��ѧϰ�ľ������E
        printf("All Samples Accuracy is %lf\n", accu);
        if (accu < ACCU) break;
    }
    printf("The BP NetWork train End!\n");
}

//����ѵ���õ�������Ԥ�����ֵ  
Vector<Type> BP::ForeCast(const Vector<Type> data)
{
    int n = data.size();
    assert(n == in_num);
    for (int i = 0; i < in_num; i++)
        x[0][i] = data[i];

    ForwardTransfer();
    Vector<Type> v;
    for (int i = 0; i < ou_num; i++)
        v.push_back(x[2][i]);
    return v;
}

void  BP::ForCastFromFile(BP * &pBp)
{   

    Vector<Vector<Type> > ::iterator it = testdata.begin();
    Vector<Type> ou;
    while (it != testdata.end())
    {
        ou = pBp->ForeCast(*it);
        result.push_back(ou);

        it++;
    }

}

//��ȡ����ڵ���  
void BP::GetNums()
{
    in_num = data[0].x.size();                         //��ȡ�����ڵ���  
    ou_num = data[0].y.size();                         //��ȡ�����ڵ���  
    hd_num = (int)sqrt((in_num + ou_num) * 1.0) + 5;   //��ȡ������ڵ���    
    if (hd_num > NUM) hd_num = NUM;                     //��������Ŀ���ܳ����������  
}

//��ʼ������  
void BP::InitNetWork()
{
    memset(w, 0, sizeof(w));      //��ʼ��Ȩֵ�ͷ�ֵΪ0��Ҳ���Գ�ʼ�����ֵ  
    memset(b, 0, sizeof(b));
}

//�����ź����򴫵��ӹ���  
void BP::ForwardTransfer()
{
    //��������������ڵ�����ֵ  
    for (int j = 0; j < hd_num; j++)
    {
        Type t = 0;
        for (int i = 0; i < in_num; i++)
            t += w[1][i][j] * x[0][i];
        t += b[1][j];
        x[1][j] = Sigmoid(t);
    }

    //�����������ڵ�����ֵ  
    for (int j = 0; j < ou_num; j++)
    {
        Type t = 0;
        for (int i = 0; i < hd_num; i++)
            t += w[2][i][j] * x[1][i];
        t += b[2][j];
        x[2][j] = Sigmoid(t);
    }
}

//���㵥�����������  
Type BP::GetError(int cnt)
{
    Type ans = 0;
    for (int i = 0; i < ou_num; i++)
        ans += 0.5 * (x[2][i] - data.at(cnt).y[i]) * (x[2][i] - data.at(cnt).y[i]);
    return ans;
}

//����źŷ��򴫵��ӹ���  
void BP::ReverseTransfer(int cnt)
{
    CalcDelta(cnt);
    UpdateNetWork();
}

//�������������ľ���  
Type BP::GetAccu()
{
    Type ans = 0;
    int num = data.size();
    for (int i = 0; i < num; i++)
    {
        int m = data.at(i).x.size();
        for (int j = 0; j < m; j++)
            x[0][j] = data.at(i).x[j];
        ForwardTransfer();
        int n = data.at(i).y.size(); //���������ά��
        for (int j = 0; j < n; j++)
            ans += 0.5 * (x[2][j] - data.at(i).y[j]) * (x[2][j] - data.at(i).y[j]);//�Ե�i��������������
    }
    return ans / num;
}

//���������  
void BP::CalcDelta(int cnt)
{
    //����������deltaֵ  
    for (int i = 0; i < ou_num; i++)
        d[2][i] = (x[2][i] - data.at(cnt).y[i]) * x[2][i] * (A - x[2][i]) / (A * B);
    //�����������deltaֵ  
    for (int i = 0; i < hd_num; i++)
    {
        Type t = 0;
        for (int j = 0; j < ou_num; j++)
            t += w[2][i][j] * d[2][j];
        d[1][i] = t * x[1][i] * (A - x[1][i]) / (A * B);
    }
}

//���ݼ�����ĵ�������BP������е���  
void BP::UpdateNetWork()
{
    //������������֮��Ȩֵ�ͷ�ֵ����  
    for (int i = 0; i < hd_num; i++)
    {
        for (int j = 0; j < ou_num; j++)
            w[2][i][j] -= ETA_W * d[2][j] * x[1][i];
    }
    for (int i = 0; i < ou_num; i++)
        b[2][i] -= ETA_B * d[2][i];

    //������������֮��Ȩֵ�ͷ�ֵ����  
    for (int i = 0; i < in_num; i++)
    {
        for (int j = 0; j < hd_num; j++)
            w[1][i][j] -= ETA_W * d[1][j] * x[0][i];
    }
    for (int i = 0; i < hd_num; i++)
        b[1][i] -= ETA_B * d[1][i];
}

//����Sigmoid������ֵ  
Type BP::Sigmoid(const Type x)
{
    return A / (1 + exp(-x / B));
}
