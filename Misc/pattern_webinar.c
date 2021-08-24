#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
    char *ch;
    ch = malloc(1024 * sizeof(char));
    scanf("%s", ch);
    ch = realloc(ch, strlen(ch) + 1);
    for(int i=0;i<10;i++){
        int count=0;
        for (int j=0;ch[j]!='\0';j++){
            if(i+'0'==(int)ch[j]){
                count++;
            }
        }
        printf("%d ",count);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}