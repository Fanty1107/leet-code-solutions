#include <stdio.h>
int climbStairs(int n) {
    int a = 1, b = 1;
    for (int i = 2; i <= n; i++) {
        int c = a + b;
        b = c;
    }
    return b;
}
int main(void){
    int result = climbStairs(3);
    printf("%d\n", result);
    return 0;
}
