// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// your code goes here
	
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n,p,k;
	    scanf("%d%d%d",&n,&p,&k);
	    
	    int arr[k];
		memset(arr,0,k*sizeof(int));
	    for(int j=0;j<n;j++){
	        arr[j%k]=arr[j%k]+1;
	    }
	    
	    int m=p%k;
	    int sum=0;
	    for(int j=0;j<m;j++){
	        sum+=arr[j];
	    }
	    sum+=(int)p/k+1;
	    printf("%d\n",sum);
	    
	}
	
	
	return 0;
}