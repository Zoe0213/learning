//
// Created by 困呐～ on 2020/1/16.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // 遍历
    int middle = n / 2 + 1;
    // i 是行 j是列
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int k1 = i, k2 = j;
            if (i > middle) {
                k1 = 2 * middle - i;
            }
            if (j > middle) {
                k2 = 2 * middle - j;
            }
            if(k1 > k2) {
                printf("%3d",k1);
            } else {
                printf("%3d",k2);
            }
        }
        printf("\n");
    }
    return 0;
}