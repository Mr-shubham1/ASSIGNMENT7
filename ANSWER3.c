#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=(n*n);i++)
    {
c=a+b;
a=b;
b=c;
if(n==c)
break;
    }
    if(i==(n*n)+1)
    printf("%d is not belong to fibonacy series",n);
    else
    printf("%d belong to fibonacy series");
    return 0;
}