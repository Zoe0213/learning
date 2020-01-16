//
// Created by 困呐～ on 2019/12/17.
//
#include <stdio.h>

int main() {
    // 整数 integer
    // -3w ~ 3w
    short shortGuy;
    int intGuy;
    long longGuy;
    long long longlongGuy;
    // 0 ~ 6w
    unsigned short unsignedIntGuy;

    // 浮点数
    float floatGuy;
    floatGuy = 1.321;
    printf("%f\n",floatGuy);

    double doubleGuy;

    doubleGuy = 1.123;
    printf("%lf\n",doubleGuy);
    printf("%.2lf\n",doubleGuy);

    // 字符 character
    char charGuy;
    charGuy = 'A';
    printf("char = %d\n",charGuy);
    charGuy = '2';
    printf("char = %d\n",charGuy);
    charGuy = 66;
    printf("%c\n",charGuy);

    // 布尔值 boolean true false
    bool boolGuy;
    boolGuy = true;
    boolGuy = false;

    // 复数

    return 0;
}