//
// Created by 困呐～ on 2019/12/30.
//

#include <stdio.h>

int main() {
    char str[101];
    int arr[26];
    // arr['a' - 'a']
    // arr['b' - 'a']
    // arr['c' - 'a']
    for (int i = 0; i < 26; i++) {
        arr[i] = 0;
    }
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        arr[str[i] - 'a']++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (arr[str[i] - 'a'] == 1) {
           printf("%c\n",str[i]);
           return 0;
        }
    }
    printf("NO only character\n");
    return 0;
}