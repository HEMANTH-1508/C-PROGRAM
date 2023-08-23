#include<stdio.h>

int main()
{
    int max,min,a,x;
    printf("ENTER NUMBER 1:-");
    scanf("%d",&a);
    
    max=a;
    min=a;
    
    for(x=2; x<=5; ++x)
    {
        printf("ENTER NUMBER %d :-",x);
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
        
    }
    printf("THE MAXIMUM NUMBER IS %d\n",max);
    printf("THE MINIMUN NUMBER IS %d\n",min);
}
