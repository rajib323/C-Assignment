#include<stdio.h>
int main()
{
  int m, n, i, j, a[10][10];

  printf("Enter m and n : ");
  scanf("%d%d", &m, &n);
  

  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
        printf("Enter elements of the matrix (%d %d) : ",i,j);
        scanf("%d", &a[i][j]);
    }
  }

  printf("Original Matrix : \n");
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++)
        printf("%d ",a[i][j]);
    printf("\n");
  }

  int res=0;
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++)
        if(i==j || i==(n-j-1))
            res+=a[i][j];
  }
  
  printf("Trace : %d",res);
  return 0;
}