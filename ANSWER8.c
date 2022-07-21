#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number\n");
    scanf("%d",&a);
    for(i=a;i<=(2*a);i++)
    {
        for(j=2;j<=(i-1);j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        break;
    }
    printf("\n%d",i);
    return 0;
}