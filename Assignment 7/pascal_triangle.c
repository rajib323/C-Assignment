#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int arr[n][(2*n)-1];
    for(i=0;i<n;i++){
        for(j=0;j<2*n-1;j++)
            arr[i][j]=0;
    }
    arr[0][n-1]=1;
    for(i=1;i<n;i++){
        for(j=0;j<2*n-1;j++){
            int p1=0,p2=0;
            if((j-1)>=0)
                p1=arr[i-1][j-1];
            if((j+1)<(2*n-1))
                p2=arr[i-1][j+1];
            arr[i][j]=p1+p2;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<2*n-1;j++)
            arr[i][j]==0?printf("  "):printf("%d ",arr[i][j]);
        printf("\n");
    }
}