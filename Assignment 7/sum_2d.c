#include <stdio.h>
int main() {
  int arr[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  int t[10][10];
  
  printf("\nFor Matrix 1:\n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) {
        printf("Enter element(%d %d) : ", i, j);
        scanf("%d", &arr[i][j]);
    }
  }

  printf("\nFor Matrix 2:\n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) {
        printf("Enter element(%d %d) : ", i, j);
        scanf("%d", &t[i][j]);
    }
  }

  printf("\nMatrix 1 : \n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) 
        printf("%d  ", arr[i][j]);
    printf("\n");
  }

  printf("\nMatrix 2 : \n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) 
        printf("%d  ", t[i][j]);
    printf("\n");
  }

printf("\nSum of Matrices : \n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j)
        printf("%d ",t[j][i]+arr[i][j]);
    printf("\n");
  }

  return 0;
}