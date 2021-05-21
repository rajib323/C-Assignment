#include <stdio.h>
int main(){
	int n;
	printf("Enter a limit : ");
    scanf("%d",&n);

    int res=0;
    int i=2;
    while(i<=n){
        res=0;
        int j=1;
        while(j<=i){
            if(i%j==0)
                res++;
            j++;
        }
        res==2?printf("\nPrime : %d",i):printf("");
        i++;
    }
}