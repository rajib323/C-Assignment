#include<stdio.h>
#define max 5
int main(){
    int arr[max];
    for(int i=0;i<max;i++){
        printf("Enter a element : ");
        scanf("%d ",&arr[i]);
        arr[i]*=arr[i];
    }
    
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);
}