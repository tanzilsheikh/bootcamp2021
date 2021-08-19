#include <stdio.h>
#include <limits.h>
int main() {
    int i,n,least=INT_MAX,a[50];
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=least)
        least=a[i];
    }
    printf("%d",least);
    
    return 0;
}