#include <stdio.h>
int main(){
    char ch[100],ch2[100];
    int i=0;
    printf("Enter a String : ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
        ch2[i]=ch[i];
    }
    ch2[i]='\0';
    printf("\nCopied String : %s",ch2);
    return 0;
}