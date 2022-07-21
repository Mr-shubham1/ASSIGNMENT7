#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%dth term of fibonaccy series is %d",n,c);
    return 0;

}