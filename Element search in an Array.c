#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int Q[n];
    int e=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&Q[i]);
    }
    int z;
    scanf("%d",&z);
    for(int i=0;i<n;i++)
    {
        if(z==Q[i])
        {
            e=1;
            break;
        }
    }
    if(e)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}