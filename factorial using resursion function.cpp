#include<stdio.h>

int rec(int x);
int main()
{
    int a;
    printf("enter the number....");

    scanf("%d",&a);
    printf("the factorial of %d is %d",a,rec(a));
    return 0;

}
int rec(int x)
{
    int f;
    {
        if(x==1)
        {
            return 1;
        }
        else
        {
            f=x*rec(x-1);

            return f;
        }
    }
}
