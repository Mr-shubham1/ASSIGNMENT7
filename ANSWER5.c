#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    for(i=b;i>1;i--)
    {
      if((a%i)==0 && (b%i)==0)
      break;
    }
    if(i==1)
    printf("co prime numbers");
    else
    printf("not co prime numbers");
    return 0;
}