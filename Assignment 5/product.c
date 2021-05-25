#include <stdio.h>
float product(float,int);
int main(){
    int n;
    float v;
    printf("Enter int & float nos : ");
    scanf("%d %f",&n,&v);
    printf("Product : %.2f",product(v,n));
}

float product(float v,int n){
    return v*n;
}