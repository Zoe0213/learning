//
// Created by 困呐～ on 2019/12/26.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m;
    int visit = 0;
    for (m = 100; m != n; m++) {
        int i1 = m % 10;
        int i2 = (m / 10) % 10;
        int i3 = (m / 100) % 10;
        if (m == i1 * i1 * i1 + i2 * i2 * i2 + i3 * i3 * i3) {
            printf("%d\n", m);
            visit = 1;
        }
    }
    if(visit == 0) {
        printf("No Answer\n");
    }
    return 0;
}