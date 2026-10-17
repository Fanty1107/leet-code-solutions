#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strStr(char* haystack, char* needle){
    int n = strlen(haystack);
    int m = strlen(needle);

    if (m == 0) return 0;
    if (m > n) return -1;

    int *lps = calloc(m, sizeof(int));
    if (lps == NULL) return -1;

    for (int i = 1, len = 0; i < m; ) {
        if (needle[i] == needle[len]) {
            lps[i++] = ++len;
        } else if (len > 0) {
            len = lps[len - 1];
        } else {
            lps[i++] = 0;
        }
    }

    for (int i = 0, j = 0; i < n; ) {
        if (haystack[i] == needle[j]) {
            i++;
            j++;
            if (j == m) {
                free(lps);
                return i - j;
            }
        } else if (j > 0) {
            j = lps[j - 1];
        } else {
            i++;
        }
    }

    free(lps);
    return -1;
}

int main(){
    int result = strStr("sadbutsad", "sad");
    printf("%d\n", result);
    return 0;
}
