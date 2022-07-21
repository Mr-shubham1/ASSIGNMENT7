#include<stdio.h>
int main()
{
    int a,i,rem,result=0;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a>=0 && a<=9)
    printf("%d is armstrong number",a);
    if(a>=10 && a<=99)
    {
       
        int k;
        k=a;
          while(k!=0)
          {
          rem=(k%10);
          result=result+(rem*rem);
          k=k/10;
          }
          if(result==a)
          printf("%d is an armstrong number",a);
          else
           printf("%d is not an armstrong number",a);
    }
    if(a>=100 && a<=999)
    {
          int k;
        k=a;
          while(k!=0)
          {
          rem=(k%10);
          result=result+(rem*rem*rem);
          k=k/10;
          }
          if(result==a)
          printf("%d is an armstrong number",a);
          else
           printf("%d is not an armstrong number",a);
    }
    if(a>=1000 && a<=9999)
    {
         int k;
        k=a;
          while(k!=0)
          {
          rem=(k%10);
          result=result+(rem*rem*rem*rem);
          k=k/10;
          }
          if(result==a)
          printf("%d is an armstrong number",a);
          else
           printf("%d is not an armstrong number",a);
    }
    return 0;
}