#include<stdio.h>
int add(int a,int b);

int main()
{int a,b,c;

printf("enter the numbers...");

scanf("%d %d",&a,&b);

c=add(a,b);

printf("%d",c);
return 0;

}

int add(int a,int b)
{
	int sum;
	
	sum=a+b;
	
	return sum;
}
