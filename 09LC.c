#include <stdbool.h>

bool isPalindrome(int x) {
    if(x < 0) return false;    
    long reverse = 0;
    int normal = x;
    while(x > 0){
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }
    return normal == reverse;
}

int main()
{
    return 0;
}
