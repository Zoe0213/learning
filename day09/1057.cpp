//
// Created by 困呐～ on 2019/12/25.
//

#include <stdio.h>

int main() {
    char str[1001];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    //printf("%s\n",str);
    puts(str);
    return 0;
}