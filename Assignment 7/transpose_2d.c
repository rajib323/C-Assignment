#include <stdio.h>
int main() {
  int arr[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  int t[10][10];
  
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) {
        printf("Enter element(%d %d) : ", i, j);
        scanf("%d", &arr[i][j]);
    }
  }

  
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j) 
        printf("%d  ", arr[i][j]);
    printf("\n");
  }
  
  for (int i = 0; i < r; ++i){
    for (int j = 0; j < c; ++j)
        t[j][i] = arr[i][j];
  }

  
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i){
    for (int j = 0; j < r; ++j)
        printf("%d  ", t[i][j]);
    printf("\n");
  }
  return 0;
}