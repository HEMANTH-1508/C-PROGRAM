#include <stdio.h>

int factorial(int x)
{
   
  printf("Calling factorial(%d)\n", x);
  if (x==1 || x==0){
    return 1;
  }
  else{
    return x * factorial(x-1);
  }
}

int main() {
  int x;
  printf("\nEnter the Number : ");
  scanf("%d",&x);

  printf("\nFactorial of %d is %d\n", x, factorial(x));

  return 0;
}
