#include<stdio.h>
int main()
{
    int a,b,k,l;
    scanf("%d %d",&a,&b);
    k=(10*a)/100;
    l=a-k;
    if(l<b)
    {
        printf("ONLINE");
    }
    else if(l>b)
    {
        printf("DINING");
    }
    else{
        printf("EITHER");
    }
}