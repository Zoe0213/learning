//
// Created by 困呐～ on 2020/1/8.
//
#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    gets(str);
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && str[0] >= '0' && str[0] <= '9') {
            cnt++;
        } else if(i>=1){
            if ((str[i - 1] <'0'||str[i-1]> '9') &&
            (str[i] >= '0' && str[i] <= '9')) {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}