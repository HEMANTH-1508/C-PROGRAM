#include<stdio.h>

int main()
{
    float a,b,c,d,x;
    float aggregate;
    printf("ENTER THE MARKS OBTAINED IN  PYTHON : ");
    scanf("%f",&a);
    printf("ENTER THE MARKS OBTAINED IN  C PROGRAMMING : ");
    scanf("%f",&b);
    printf("ENTER THE MARKS OBTAINED IN  MATHMETICS : ");
    scanf("%f",&c);
    printf("ENTER THE MARKS OBTAINED IN  PHYSICS : ");
    scanf("%f",&d);
    
    float sum=a+b+c+d;
    printf("TOTAL MARKS OBTAINED IS %f\n",sum);
    aggregate=sum/4;
    printf("AGGREGATE = %f\n",aggregate);
    
    aggregate= x;
    
    if(a>100 || a<0 || b>100 || b<0 || c>100 || c<0 || d>100 || c<0)
    {
        printf("YOU HAVE GIVEN WRONG DATA OF MARKS\n");
       
    }
     else if(x>75)
    {
        printf("DISTINCTION\n");
    }
    else if(60>=x && x<75)
    {
        printf("FIRST DIVISION\n");
    }
    else if(50 >=x && x<60)
    {
        printf("SECOND DIVIDION\n");
    }
    else if(40>=x && x<50)
    {
        printf("THIRD DIVISION\n");
    }
    else
    {
        printf("FAIL\n");
    }
    
    return 0;
    
}
