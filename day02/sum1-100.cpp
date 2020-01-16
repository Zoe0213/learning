//
// Created by 困呐～ on 2019/12/16.
//
#include <stdio.h>

// 1 + 2 + 3 + 4 + ... + 100
int main(){
    int sum = 0;
    int cnt = 1;

    while(cnt != 101) {
        sum = sum + cnt;
        cnt = cnt + 1;
    }
    printf("%d",sum);
    return 0;
}

