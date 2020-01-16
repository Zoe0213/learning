//
// Created by 困呐～ on 2020/1/7.
//
#include <stdio.h>
#include <string.h>

int main() {
    // 一段连续的存储空间
    // int a[100]
    // a 就是数组的起始位置 a+1 a+2
    // char a[100] '\0'
    char str[100];
    str[0] = 'I';
    str[1] = 'L';
    str[2] = 'Y';
    str[3] = '\0';
    str[4] = 'H';
    puts(str);

    strcpy(str,"Hello");

    return 0;
}