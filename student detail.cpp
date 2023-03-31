#include<stdio.h>
struct nikhil
{
	char name[50];
	int roll_no;
	int t1,t2,t3,t4;
	int model_test;
	int avg;
	int total;
}
stu;

int main()
{
	printf("enter the student name=");
	scanf("%s",&stu.name);
	printf("enter the roll_no=");
	scanf("%d",&stu.roll_no);
	printf("enter the test1,test2,test3,test4 marks=");
	scanf("%d%d%d%d",&stu.t1,&stu.t2,&stu.t3,&stu.t4);
	printf("enter the model_test marks=");
	scanf("%d",&stu.model_test);
	stu.total=stu.t1+stu.t2+stu.t3+stu.t4;
	stu.avg=stu.total+stu.model_test/5;
	printf("total:%d\n",stu.total);
	printf("avg of all tests:%d\n",stu.avg);
	printf("%s\n%d",stu.name,stu.roll_no);
}
