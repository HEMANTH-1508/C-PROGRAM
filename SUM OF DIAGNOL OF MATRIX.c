#include <stdio.h>

int main()
{
  int a[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  printf("Enter matrix elements:-\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    printf(" a%d%d: ", i + 1, j + 1);
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
  int sum=a[0][0]+a[1][1]+a[2][2]+a[3][3]+a[4][4]+a[5][5]+a[6][6]+a[7][7]+a[8][8]+a[9][9]+a[10][10];
  printf("SUM OF THE DIAGNOL ELEMENT  IS %d",sum);
  return 0;
}
