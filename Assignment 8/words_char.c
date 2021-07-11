#include <stdio.h>
int main(){
    char ch[100];
    int i=0,j=0;
    printf("Enter String : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)   //COUNTING LENGTH
        if(ch[i]==' ')
            j++;

    printf("No of words : %d",j+1);
    printf("\nNo of characters : %d",i-j);
    return 0;
}