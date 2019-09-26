#include "findsubstr.h"

int find_sub_string(const char *str, const char *sub) 
{
    int n = strlen(str);
    int m = strlen(sub);
    if (n < m) return -1;
    for (int i = 0; i < n - m + 1; i++) {
        int j = 0;
        for (j; j < m; j++) {
            int  s = i + j;
            if (str[s] != sub[j]) break;
        }
        if (j == m) return i;
    }
    return -1;
}