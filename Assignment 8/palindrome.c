#include <stdio.h>
int main(){
    char ch[100],ch2[100];
    int i=0,j=0;
    printf("Enter String : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++);   //COUNTING LENGTH

    for(;i>=0;)
        ch2[j++]=ch[--i];

    ch2[j]='\0';
    for(i=0;ch[i]!='\0'&&ch2[i]!='\0';i++){
        if(ch[i]!=ch2[i]){
            i=-1;
            break;
        }
    }
    if(i==-1)
        printf("Not Palindrome");
    else
        printf("Palindrome");
    return 0;
}