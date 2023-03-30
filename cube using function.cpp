#include<stdio.h>

int cube(int x);     
int main()
{
    int a;
    printf("enter the number....");

    scanf("%d",&a);
    printf("the cube of %d is %d",a,cube(a));   
    return 0;

}
int cube(int x)
{
    int f;
    {
                              

            f=x*x*x;

            return f;

    }
}
