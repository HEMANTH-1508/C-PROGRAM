#include<stdio.h>
main() 
{
    int Max, Min, a, x; 
    printf("Input #1: "); 
    scanf("%d",&a); 
    Max = a; 
    Min = a;

    for(x=2;x<=5;++x) 
    {  
        printf("Input #%d: ",x); 
        scanf("%d",&a);
        if(a>Max) 
        {
            Max = a;
        } 
        if(a<Min) 
        {
            Min = a; 
        }  
    }  
    printf(" The Maximum # is %d\n",Max);
    printf(" The Minimum # is %d\n",Min);
}
