//
// Created by 困呐～ on 2019/12/17.
//
#include <stdio.h>

void smile();

int main() {
    int row = 3;
    int cnt = 3;
    while (row != 0) {
        // i++ equals i = i + 1
        //for( A ; B ; C)
        // A 当我进入循环时，会执行一遍
        // B 每次进入循环需要满足的条件
        // C 每次循环结束要做的事情
        for (int i = 0; i < cnt; i++) {
            smile();
        }
        cnt = cnt - 1;
        printf("\n");
        row = row - 1;
    }
    return 0;
}

void smile() {
    printf("Smile!");
}
