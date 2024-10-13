#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int lky=0;
while(n>0)
{
    if(n%10==7)
    {
        lky=1;
        break;
    }
    n=n/10;
}
if(lky)
{
    printf("YES");
}
else
{
    printf("NO");
}
}