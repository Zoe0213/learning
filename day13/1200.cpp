//
// Created by 困呐～ on 2020/1/2.
//

#include <stdio.h>

int main() {
    int cnt=0;
    double sum=0;
    for (int i = 1; i != 11; i++) {
        double n;
        scanf("%lf", &n);
        if (n > 0) {
            sum = sum + n;
            cnt = cnt + 1;
        }
    }
    double a;
    a = sum / cnt;
    printf("%.2lf\n", a);
    return 0;
}