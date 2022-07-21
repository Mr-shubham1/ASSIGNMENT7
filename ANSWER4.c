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
    printf("HCF IS 1");
    else
    printf("hcf is %d",i);
    return 0;
}