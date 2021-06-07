#include<stdio.h>
int main(){
    int arr[10],n;
    printf("Enter size : ");
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        printf("Enter a element : ");
        scanf("%d ",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    printf("Maximum no : %d ",max);
}