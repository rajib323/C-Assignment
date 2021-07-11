#include <stdio.h>
int main(){
    char ch[100];
    int i=0,j=0;
    printf("Enter String : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++);   //COUNTING LENGTH

    int m=i-1;
    for(j=0;j<(i+1)/2;j++){
        char tmp=ch[j];
        ch[j]=ch[m];
        ch[m--]=tmp;
    }
    
    ch[i]='\0';
    printf("\nReversed String : %s",ch);

    return 0;
}