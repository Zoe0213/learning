//
// Created by 困呐～ on 2019/12/26.
//
#include <stdio.h>
// abs 属于这个头文件
#include <stdlib.h>
#include <math.h>

int main() {
    // 开根号
    printf("%.3lf\n", sqrt(2));
    // x^n
    printf("%.1lf\n",pow(2,4));
    // 绝对值 - int
    printf("%d %d\n",abs(-100), abs(100));
    // 绝对值 - double
    printf("%lf %lf\n",fabs(-100),fabs(100));
    // 向上取整 ceil
    printf("%lf %lf %lf\n", ceil(2.5),ceil(-2.5),ceil(2));
    // 向下取整 floor
    printf("%lf %lf %lf\n", floor(2.5),floor(-2.5),floor(2));

    return 0;
}