#include <stdio.h>
int main(){
    char ch[100],ch2[100];
    int i=0,j=0,l=0;
    printf("Enter String : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)   //COUNTING LENGTH
        switch(ch[i]){
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':j++;
            break;
            case ' ':l++;
            break;
        }

    printf("No of vowels : %d",j);
    printf("\nNo of consonants : %d",i-l-j);
    return 0;
}