//
// Created by 困呐～ on 2019/12/22.
//
#include <stdio.h>

int main() {
    int a[100];
    // 起始地a a+10
    // a[i] a[0] ~ a[99]
    char b[100]; // ASCII
    // l01010001   8bit = byte
    b[0] = 'H';
    b[1] = 'e';
    b[2] = 'l';
    b[3] = 'l';
    b[4] = 'o';
    for (int i = 0; i <= 4; i++) {
        printf("%c", b[i]);
    }
    printf("\n");
    return 0;
}
