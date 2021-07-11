#include <stdio.h>
int main(){
    char ch[100],ch2[100];
    int i=0;
    printf("Enter String 1 : ");
    gets(ch);
    printf("Enter String 2 : ");
    gets(ch2);
    for(i=0;ch[i]!='\0'&&ch2[i]!='\0';i++){
        //printf("\n%c %c",i);
        if(ch[i]!=ch2[i]){
            i=-1;
            break;
        }
    }
    if(i==-1)
        printf("Strings not equal");
    else if(ch[++i]!='\0'||ch2[++i]!='\0')
        printf("Strings not equal");
    else
        printf("Strings are equal");
    return 0;
}