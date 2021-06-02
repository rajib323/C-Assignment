#include<stdio.h>
int main()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<10;i++)
        if(arr[i]<min)
            min=arr[i];

    printf("Smallest no. in Array : %d",min);
}