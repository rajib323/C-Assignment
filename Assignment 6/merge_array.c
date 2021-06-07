#include<stdio.h>
int main(){
    int arr[10];
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
    printf("\n\nAfter Merging : ");
    for(int i=0;i<5;i++){
        arr[i]=a1[i];
    }
    for(int i=0;i<5;i++){
        arr[i+5]=a2[i];
    }
    
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
}