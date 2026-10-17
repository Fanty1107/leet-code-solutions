#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int end = strlen(s) - 1;
    while(end >= 0 && s[end] == ' ') end--;

    int len = 0;
    while(end >= 0 && s[end] != ' '){
        len++;
        end--;
    }
    return len;
}

int main()
{
    char *string = "   hello world   ";
    int len = lengthOfLastWord(string);
    printf("%d\n", len);
    return 0;
}
