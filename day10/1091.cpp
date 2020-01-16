//
// Created by 困呐～ on 2019/12/27.
//

#include <stdio.h>

int main() {
    int n;
    n < 1000;
    scanf("%d", &n);
    int m, k, l;
    m = 0;
    l = 1;
    for (k = 1; k != n+1; k++) {
        m = m + k * l;
        l = -l;
    }
    printf("%d\n", m);
    return 0;
}