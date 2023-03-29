#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int arr[100];

    printf("enetr the size o fth e array...");
    scanf("%d",&n);

    printf("enter the elments in the array..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("reverse of the array i s.....\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%2d\n",arr[i]);
    }
    return 0;

}
