#include<stdio.h>
int main()
{   
    int rm,rv=0,n=0;
    scanf("%d",&n);
    while(n>0)
    {
        rm = n%10;
        rv = rv*10+rm;
        n = n /10;
    }
    printf("%d",rv);
    return 0;
}