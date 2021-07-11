#include<stdio.h>
int main(){
    int arr[5];
    int a1[5],a2[5];

    printf("\n\nFor Array 1 : \n");
    for(int i=0;i<5;i++){
        printf("Enter a element : ");
        scanf("%d",&a1[i]);
    }
    printf("\n\nFor Array 2 : \n");
    for(int i=0;i<5;i++){
        printf("Enter a element : ");
        scanf("%d",&a2[i]);
    }
    printf("\n\nAfter Adding : ");
    for(int i=0;i<5;i++){
        arr[i]=a1[i]+a2[i];
    }
    
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
}