#include<stdio.h>
int main(){
    int arr[10];
    int n,c=0,s;
    printf("Enter size: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Enter a element : ");
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                int tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    printf("\nSorted array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}