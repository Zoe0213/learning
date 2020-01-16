//
// Created by 困呐～ on 2020/1/1.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("1\n");
        return 0;
    }
    if (n == 2) {
        printf("1 1\n");
        return 0;
    }
    printf("1 1");
    long long a = 1;
    long long b = 1;
    long long c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf(" %lld",c);
    }
    printf("\n");
    return 0;
}
