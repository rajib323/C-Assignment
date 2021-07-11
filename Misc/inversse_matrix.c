#include <stdio.h>
int main() {
  int arr[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  
  printf("\nFor Matrix 1:\n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) {
        printf("Enter element(%d %d) : ", i, j);
        scanf("%d", &arr[i][j]);
    }
  }

  printf("\nMatrix 1 : \n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) 
        printf("%d  ", arr[i][j]);
    printf("\n");
  }

  int k=0;
  int res[r-1][c-1];
  for(int k=0;k<c;k++)
  {
      for(int i=0;i<k;i++)
  }
  return 0;
}