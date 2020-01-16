//
// Created by 困呐～ on 2020/1/14.
//

#include <stdio.h>
#include <string.h>

int main() {
    int m;
    scanf("%d", &m);

    bool status[101];
    for (int i = 0; i < 101; i++) {
        status[i] = true;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (j % i == 0) {
                status[j] = !status[j];
            }
        }
    }

    int total = 0;
    for (int i = 1; i <= m; i++) {
        if (status[i] == false) {
            total++;
        }
    }
    printf("%d\n", total);

    for (int i = 1; i <= m; i++) {
        if (status[i] == false) {
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}