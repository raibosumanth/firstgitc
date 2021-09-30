// cprogram
#include<stdio.h>
int main()
{
    int i,n;
    int a=0,b=1,c;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("\n the fibonacci series is\n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
