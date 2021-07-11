#include<stdio.h>
int main()
{
  int m, n, i, j, a[10][10], t[10][10];

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

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
        t[j][i] = a[i][j];

  if (m == n) /* check if order is same */
  {
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < m; j++)
      {
        if (a[i][j] != t[i][j])
            break;
      }
      if (j != m)
        break;
    }
    if (i == m)
      printf("The matrix is symmetric.\n");
    else
      printf("The matrix isn't symmetric.\n");
  }
  else
    printf("The matrix isn't symmetric.\n");

  return 0;
}