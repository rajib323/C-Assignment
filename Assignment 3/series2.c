#include <stdio.h>
int main(){
	int n;
	printf("Enter a limit : ");
    scanf("%d",&n);

    float res=0.0;
    int c=0,fac=1;
    int i=1;
    while(n>0){
        c++;
        int j=1;
        while(j<=i){
            fac=fac*j;
            j++;
        }
        if(i%2==0)
            res=res+((float)1/fac);
        else
            res=res-((float)1/fac);
        i=i+2;
        n--;
    }
    printf("Sum of series : %f",res);
}