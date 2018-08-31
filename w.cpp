#include<stdio.h>
    struct student 
    { 
        int age;
        double score; 
    }stu[5];
    int i=0;
int input(student x)
{
    
    
        printf("请输入学生年龄\n");
        scanf("%d",&x.age);
        printf("请输入学生成绩\n");
        scanf("%d",&x.score);
    

}
int main()
{
	int x,y;
	for(i=0;i<5;i++)
	{
		scanf("%d",&x);

		input(stu[i]);
	}
    return 0;
}
