#include <string.h>
#include <stdio.h>
#include <stdbool.h>
 
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}
int main()
{
    char str[100];
    printf("Enter a word : ");
    scanf("%s",str);
 
    isPalindrome(str);
 
    return 0;
}