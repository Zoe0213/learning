//
// Created by 困呐～ on 2019/12/25.
//

#include <stdio.h>;

int main() {
    char str[1001];
    gets(str);
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}