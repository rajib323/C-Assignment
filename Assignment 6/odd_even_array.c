#include<stdio.h>
int main(){
    int arr[10],n;
    printf("Enter size : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter a element : ");
        scanf("%d",&arr[i]);
    }
    int odd=0;
    for(int i=0;i<n;i++)
        if(arr[i]%2==0)
            odd++;
    printf("\nEven nos : %d",odd);
    printf("\nOdd nos : %d",n-odd);
}