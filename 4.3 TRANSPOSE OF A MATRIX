#include <stdio.h>

int main()
{
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  printf("Enter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  printf("Entered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  } 
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    transpose[j][i] = a[i][j];
  }
  printf("Transpose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) 
  {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}

