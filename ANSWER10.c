#include<stdio.h>
#include<math.h>
int main()
{
    int i,rem,count=0,result=0;
    for(i=1;i<=999;i++)
    {
        int k;
        k=i;
        while(k!=0)
        {
           k=k/10;
           count++;
        }
        int l;
        l=i;
        while(l!=0)
        {
             rem=l%10;
             result=result+pow(rem,count);
             l=l/10;
        }
        if(result==i)
        {
            printf("%d \n",i);
        }
        count=0;
        result=0;
    }
    return 0;
}