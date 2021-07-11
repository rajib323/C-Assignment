#include<stdio.h>
int main()
{
    int arr[10][10],i,j,max,m,n;
    max=arr[0][0];
    printf("Enter m and n : ");
    scanf("%d %d",&m,&n);


    // read the elements in to the array.
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the elements in to the matrix(%d %d) : ",i,j);
            scanf("%d",&arr[i][j]);
                    
        }
    }
          
    // logic for finding maximum element
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]>max)
                max=arr[i][j];
        }
    }
    printf("\n\nOriginal Matrix : \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
      
    printf("\nMaximum no. : %d",max);
}