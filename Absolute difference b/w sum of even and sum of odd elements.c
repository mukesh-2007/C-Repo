#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int Q[n];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&Q[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(Q[i]%2==0)
        {
            sum1=sum1+Q[i];
        }
        else if(Q[i]%2!=0)
        {
            sum2=sum2+Q[i];
        }
    }
    if(sum1>sum2)
    {
        printf("%d",sum1-sum2);
    }
    else{
        printf("%d",sum2-sum1);
    }

}