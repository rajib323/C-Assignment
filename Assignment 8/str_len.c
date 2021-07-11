#include <stdio.h>
int main(){
    char ch[100];
    int i=0;
    printf("Enter a String : ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++);
    printf("Length of String : %d",i);
    return 0;
}