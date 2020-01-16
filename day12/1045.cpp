//
// Created by 困呐～ on 2020/1/1.
//

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a * a + b * b;
    if (c == 100) {
        printf("on\n");
    } else if (c > 100) {
        printf("out\n");
    } else {
        printf("in\n");
    }
    return 0;
}