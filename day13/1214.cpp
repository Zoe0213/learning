//
// Created by 困呐～ on 2020/1/5.
//
#include <stdio.h>

void print(int k, int dis);

int main() {
    int n;
    scanf("%d", &n);
    //dis表示最长一行中轴线及其左边需要打印的*数量
    int dis = n / 2 + 1;
    //k代表每行要打印多少*  t代表中轴线及其左边需要打印的*
    for (int k = 1; k <= n; k = k + 2) {
        print(k, dis);
    }
    for (int k = n - 2; k >= 1; k = k - 2) {
        print(k, dis);
    }
    return 0;
}

void print(int k, int dis) {
    int t = k / 2 + 1;
    int blankNumber = dis - t;
    for (int i = 0; i < blankNumber; i++) {
        printf(" ");
    }
    for (int i = 0; i < k; i++) {
        printf("*");
    }
    printf("\n");
}