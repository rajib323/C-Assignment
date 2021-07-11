#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
        arr[i]=i+1;
    printf("\n\nPrint Array : \n");
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
}