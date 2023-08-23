 #include<stdio.h>
 int main()
 {
     int number, i, fact=1;

     printf("Enter number:");
     scanf("%d",&number);

     for(i=number; i>=1; i--)
     {
         fact *= i; 
     }

     printf("%d! = %d", number, fact);

     return 0;
 }
