#include<stdio.h>
#include<math.h>
int isfib(int n);
int isps(int n);

int main()
{   
    int n;
    scanf("%d",&n);
    isfib(n);
    // for(int i=0;i<n;i++)
    // isfib(i);
    return 0;
}
int isfib(int n)
{
    int res1,res2;
    res1= 5*(n*n)+4;
    res2= 5*(n*n)-4;
    if(isps(res1) || isps(res2))
    printf("%d is fib\n",n);
    else
    printf("%d is not fib\n",n);
    
    return 0;
}
int isps(int res)
{
    int whole;
    float sqr;
 
    sqr=sqrt(res);
    whole=sqr;
 
    if(whole==sqr)
        return 1;
    else
        return 0;
}
