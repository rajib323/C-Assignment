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
    int m=n-1;
    for(int i=0;i<(n+1)/2;i++){
        int tmp=arr[i];
        arr[i]=arr[m];
        arr[m--]=tmp;
    }
    
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}