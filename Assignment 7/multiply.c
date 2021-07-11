#include <stdio.h>
int main() {
  int arr[10][10], r, c,r1,c1;
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

  printf("\nEnter rows and columns: ");
  scanf("%d %d", &r1, &c1);

  printf("\nFor Matrix 2:\n");
  for (int i = 0; i < r1; ++i){
    for (int j = 0; j < c1; ++j) {
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
  for (int i = 0; i < r1; ++i){
    for (int j = 0; j < c1; ++j) 
        printf("%d  ", t[i][j]);
    printf("\n");
  }

  int res[r][c1];
  printf("\nMultiplication of Matrices : \n");
  for (int i = 0; i < r; ++i){  //2
    for (int j = 0; j < c1; ++j){ //2
        res[i][j]=0;
        for(int k=0;k<c;k++)       
            res[i][j]+=(arr[i][k]*t[k][j]);    
        printf("%d ",res[i][j]);
    }
    printf("\n");
  }
  return 0;
}