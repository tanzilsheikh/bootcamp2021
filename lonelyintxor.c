#include<stdio.h>
int main()
{
    short int lonely=0,i,n,a[99];
    
    scanf("%hu",&n);
    for(i=0;i<n;i++)
    scanf("%hu",&a[i]);
    
    for(i=0;i<n;i++)
    lonely=lonely^a[i];
    
    printf("%hu",lonely);
    
    return 0;
}
