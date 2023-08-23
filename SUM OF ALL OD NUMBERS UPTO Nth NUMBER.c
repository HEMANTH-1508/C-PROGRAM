#include < stdio.h >  
  
int main()  
{  
    int N, count = 1, sum = 0;  
  
    printf("Enter the limit\n");  
    scanf("%d", &N);  
  
    while(count <= N)  
    {  
        sum = sum + (count * count);  
        count++;  
    }  
    printf("Sum of squares of numbers from 1 to %d is %d.\n", N, sum);  
  
    return 0;  
}
