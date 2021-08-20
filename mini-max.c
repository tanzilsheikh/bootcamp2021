#include<stdio.h>
int main()
{
    long int a[5],sum=0,i,n,mins=0,maxs=0,max,min;
    for(i=0;i<5;i++)
    {
        scanf("%lu",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i =0;i<5;i++)
        {
            if(a[i]<min)
            min=a[i];
            
            if(a[i]>max)
            max =a[i];
            
            sum+=a[i];
            
        }
        maxs = sum-min;
        mins = sum-max;
    printf("%lu %lu",mins,maxs);
}
