#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("ENTER THE VLAUE OF N\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    printf("%d",sum);
}