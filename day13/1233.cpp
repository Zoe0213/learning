//
// Created by 困呐～ on 2020/1/6.
//
#include <stdio.h>

int main() {
    int i1, i2, a, b;
    a = 0;
    b = 0;
    while (scanf("%d%d", &i1, &i2) && !(i1 == 0 && i2 == 0)) {
        if (i1 == 1) {
            a = a + i2;
        } else {
            b = b + i2;
        }
    }
    if (a > b) {
        printf( "1 %d\n",  a);
    } else if (a < b) {i1=2;
        printf("2 %d\n",  b);
    } else {
        printf("equal\n");
    }
    return 0;
}
