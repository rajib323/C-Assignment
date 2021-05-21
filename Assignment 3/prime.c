#include <stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
    scanf("%d",&n);
    int res=0;
    int i=1;
    while(i<=n){
        if(n%i==0)
            res++;
        i++;
    }
    res==2?printf("Prime : %d",n):printf("Not Prime : %d",n);

}