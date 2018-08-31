#ifndef _BP_H_  
#define _BP_H_  

#include <vector>  

//��������
#define LAYER    3        //����������  
#define NUM      10       //ÿ������ڵ���  

#define A        30.0  
#define B        10.0     //A��B��S�ͺ����Ĳ���  
#define ITERS    1000     //���ѵ������  
#define ETA_W    0.0035   //Ȩֵ������  
#define ETA_B    0.001    //��ֵ������  
#define ERROR    0.002    //����������������  
#define ACCU     0.005    //ÿ�ε�����������  

//����
#define Type double  
#define Vector std::vector  

struct Data
{
    Vector<Type> x;       //��������
    Vector<Type> y;       //�������
};

class BP{

public:

    void GetData(const Vector<Data>);
    void Train();
    Vector<Type> ForeCast(const Vector<Type>);
    void ForCastFromFile(BP * &);
    void ReadFile(const char * InutFileName,int m, int n);

    void ReadTestFile(const char * InputFileName, int m, int n);
    void WriteToFile(const char * OutPutFileName);

private:

    void InitNetWork();         //��ʼ������  
    void GetNums();             //��ȡ���롢�����������ڵ���  
    void ForwardTransfer();     //���򴫲��ӹ���  
    void ReverseTransfer(int);  //���򴫲��ӹ���  
    void CalcDelta(int);        //����w��b�ĵ�����  
    void UpdateNetWork();       //����Ȩֵ�ͷ�ֵ  
    Type GetError(int);         //���㵥�����������  
    Type GetAccu();             //�������������ľ���  
    Type Sigmoid(const Type);   //����Sigmoid��ֵ  
    void split(char *buffer, Vector<Type> &vec);

private:
    int in_num;                 //�����ڵ���  
    int ou_num;                 //�����ڵ���  
    int hd_num;                 //������ڵ���  

    Vector<Data> data;            //��������
    Vector<Vector<Type> > testdata;//��������
    Vector<Vector<Type> > result;  //���Խ��
    int        rowLen;            //��������
    int        restrowLen;        //������������

    Type w[LAYER][NUM][NUM];    //BP�����Ȩֵ  
    Type b[LAYER][NUM];         //BP����ڵ�ķ�ֵ  

    Type x[LAYER][NUM];         //ÿ����Ԫ��ֵ��S�ͺ���ת��������ֵ��������Ϊԭֵ  
    Type d[LAYER][NUM];         //��¼deltaѧϰ������delta��ֵ,ʹ��delta��������������Ȩ�� Wij(t+1)=Wij(t)+��(Yj-Aj(t))Oi(t)
};

#endif  //_BP_H_ 
