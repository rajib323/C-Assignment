#include<stdio.h>
#define max 5
int main(){
    int arr[max];
    for(int i=0;i<max;i++){
        printf("Enter a element : ");
        scanf("%d",&arr[i]);
        arr[i]*=arr[i];
    }
    printf("\n\nPrint Array : \n");
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);
}