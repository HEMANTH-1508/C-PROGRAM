#include<stdio.h>

int main()
{
    int n,sum=0,z=0;
    printf("Enter your number:\n");
    scanf("%d",&n);
    do
    {
        z=n%10;
        sum=sum+z;
        n=n/10;
    }
    while(n>0);
    printf("The sum of digits is %d",sum);
    
    return 0;
}
