#include<stdio.h>
int main()
{
    int n;
    
    printf("enetr n");
    scanf("%d",&n);
    int count=0;
    int n1=n;
    while(n>0)
    {
        int mod=n;
        if(mod>10)
        {
            mod=mod%10;
        }
        if(n1%mod==0)
        {
            count++;
        }
        else
        {

        }
        n=n/10;
    }
    printf("%d",count);
}