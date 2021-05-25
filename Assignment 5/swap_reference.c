#include <stdio.h>
void swap(int*,int*);
int main(){
    int n,s;
    printf("Enter int & float nos : ");
    scanf("%d %d",&n,&s);
    printf("\nBefore Swapping : %d %d",n,s );
    swap(&n,&s);
    printf("\nAfter Swapping : %d %d",n,s );
}

void swap(int *n,int *s){
    int tmp=*s;
    *s=*n;
    *n=tmp;
}