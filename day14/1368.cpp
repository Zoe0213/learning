//
// Created by 困呐～ on 2020/1/13.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int tempArr[1005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tempArr[i]);
    }
    int k;
    scanf("%d", &k);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (tempArr[i] < k) {
            cnt++;
        }
    }
    printf("%d\n",cnt+1);
    return 0;
}