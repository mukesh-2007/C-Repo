#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d",&n,&m);
    k=m*36;
    if(n<=k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}