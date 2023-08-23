#include <stdio.h>

int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main() 
{
    int a, b, result;
    
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    
    result = add(a, b);
    
    printf("The sum of %d and %d is %d.\n", a, b, result);
    
    return 0;
}
