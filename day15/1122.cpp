//
// Created by 困呐～ on 2020/1/14.
//

#include <stdio.h>
#include <string.h>

int main() {
    int m;
    scanf("%d", &m);

    int total = 0;
    for (int i = 1; i <= m; i++) {
        int cnt = 0;
        for (int j = 1; j <= m; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt % 2 == 1) {
            total++;
        }
    }
    printf("%d\n", total);

    for (int i = 1; i <= m; i++) {
        int cnt = 0;
        for (int j = 1; j <= m; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt % 2 == 1) {
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}