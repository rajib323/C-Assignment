#include <stdio.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.

  int m_and=0,m_or=0,m_xor=0,i=0,j=0;

  for(i =1;i<=n;i++){
      for(j=i+1;j<=n;j++){
          printf("\n%d %d",i,j);
          if((i&j)>m_and && (i&j)<k)
            m_and=i&j;
           if((i|j)>m_or && (i|j)<k)
            m_or=i|j;
           if((i^j)>m_xor && (i^j)<k)
            m_xor=i^j;
      }
  }
  printf("\n%d\n%d\n%d",m_and,m_or,m_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n,k);
 
    return 0;
}
