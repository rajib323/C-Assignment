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
    
    printf("Enter search element : ");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            printf("\nFound at position : %d",i+1);
            c=1;
            break;
        }
    }
    if(c==0)
        printf("\nElement Not found ");
}