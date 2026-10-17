#include <stdio.h>
#include <stdbool.h>
#include <string.h>



//Valid input () [] {} ([])
bool isValid(char* s) {
    size_t n = strlen(s);
    char stack[n];
    size_t top = 0;

    while (*s != '\0') {
        char c = *s;

        if (c == '(' || c == '[' || c == '{') {
            *(stack + top) = c;
            top++;
        } else if (c == ')' || c == ']' || c == '}') {
            if (top == 0) return false;

            top--;
            char open = *(stack + top);

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                return false;
            }
        } else {
            return false;
        }

        s++;
    }

    return top == 0;
 
}

int main(){
    //isValid("Hello world");
    printf("%d\n", isValid("()"));
    printf("%d\n", isValid("([])"));
    printf("%d\n", isValid("([)]"));
    return 0;
}
