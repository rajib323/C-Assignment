#include <stdio.h>
int main(){
    char ch[100],ch2[100];
    int i=0,j=0;
    printf("Enter String 1 : ");
    gets(ch);
    printf("Enter String 2 : ");
    gets(ch2);

    for(i=0;ch[i]!='\0';i++);   //COUNTING LENGTH

    for(j=0;ch2[j]!='\0';j++)
        ch[i++]=ch2[j];

    ch[i]='\0';
    printf("\nConcatenated String : %s",ch);

    return 0;
}