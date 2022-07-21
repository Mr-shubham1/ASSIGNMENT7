#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=(i-1);j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d\n",i);
    }
    return 0;
}