//
// Created by 困呐～ on 2020/1/8.
//
#include <stdio.h>

int main() {
    int n;
    int row;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        if (row == 1 || row == n) {
            for (int i = 0; i < n; i++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int i = 0; i < (n - 2); i++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}