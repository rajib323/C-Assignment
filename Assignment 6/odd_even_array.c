#include<stdio.h>
#define max 5
int main(){
    int arr[max];
    for(int i=0;i<max;i++){
        printf("Enter a element : ");
        scanf("%d",&arr[i]);
    }
    int res=0;
    for(int i=0;i<max;i++)
        if(arr[i]%2==0)
            res++;
    printf("\nEven nos : %d",res);
    printf("\nEven nos : %d",max-res);
}