#include <stdio.h>
#include "RecursiveDescent.hpp"

int main() {
    char str[256] = {0};

    scanf("%s", str);

    int res = GetG(str);

    printf("Input: %s\n", str);
    printf("Output: %d\n", res);
}