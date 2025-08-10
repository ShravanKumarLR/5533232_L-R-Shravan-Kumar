#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[101], t[101];
    scanf("%s", s);
    scanf("%s", t);
    int n = strlen(s);
    char res[101];
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i])
            res[i] = '0';
        else
            res[i] = '1';
    }
    res[n] = '\0';
    printf("%s", res);
    return 0;
}