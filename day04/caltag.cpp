//
// Created by 困呐～ on 2019/12/18.
//
#include <stdio.h>

int main() {
    // + - * / %(取余数)
    printf("%d\n", 1 + 2);
    printf("%d\n", 1 - 2);
    printf("%d\n", 11 * 11);
    printf("%lf\n", 12 / 13);
    printf("%lf\n", 12.0 / 13);
    printf("%lf\n", 12 / 13.0);
    printf("%lf\n", (double)12 / 13);
    printf("%lf\n", (double)(12 / 13));
    printf("%d\n", 25 / 3);

    printf("%d\n", 1 % 2);
    printf("%d\n",25 % 3);

    // a  = a / b * b + a % b;
    // a = a+ b;
    // = （赋值）

    // == （左边 == 右边）判断左右是否相等 true false
    printf("%d\n",32 == 32);
    printf("%d\n",31 == 32);

    // >=  <= > < 判断 true false

    // &&  并且  true&&false == false   true && true == true   false && false == false

    // ||  或者  true||false == true   true || true == true   false || false == false

    int year = 18;
    // if 条件里面是一个非0的值 就是真的
    if(10 < year && year < 20) {
        // 干 A
    } else {
        // 干 B
    }

    if(10 < year && year < 20) {
        // 干 A
    } else if(20 <= year && year <= 30){
        // 干 B
    } else{
        // 干 C
    }
    return 0;
}
