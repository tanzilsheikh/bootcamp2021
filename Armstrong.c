#include<stdio.h>
#include<math.h>
void main()
{
    int x,i,temp=0,rem,sum=0;
    scanf("%d",&x);
    temp = x;
    while(temp>0)
    {
        rem = temp%10;
        sum += pow(rem , 3);
        temp = temp / 10;
        
    }
    // printf("%d",sum);
    if(x == sum){
        printf("%d it is an amstong number ",x);
    }
        
    else
    {
        printf("%d it is NOT an amstong number ",x);
    }
    
}
