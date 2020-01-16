//
// Created by 困呐～ on 2020/1/8.
//

#include <stdio.h>

int main() {
    int n;
    int row;
    int m;
    scanf("%d", &n);
    m=n;
    for(row=1;row<=n;row++) {
        for (int i = 0; i < m; i++) {
            printf("*");
        }printf("\n");
        m--;
    }
    return 0;
}