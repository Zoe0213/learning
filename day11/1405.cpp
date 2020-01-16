//
// Created by 困呐～ on 2019/12/29.
//

#include <stdio.h>
#include<string.h>

int main() {
    int n;
    char str[20][51];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (j != k && j != i && k != i) {
                    //printf("%s %s %s\n",str[i],str[j],str[k]);
                    char temp[101];
                    strcpy(temp,str[j]);
                    if (strcmp(strcat(temp, str[k]), str[i]) == 0) {
                        printf("%s\n", str[i]);
                    }
                }
            }
        }

    }


    // 1 1  =》 0
    // 1 0  =》 1
    // 0 0  =》 0
    // 0 ^ 0
    // a1^a2^...^an<>0 N-position  -》  = 0
//    1 1 0 1
//    1 1 1 0
//    0 0 0 1
//
//
//    0 0 1 1 = k
//    1 1 1 0 = ai
//    1 1 0 1 < ai
//
//
//    1 1 0 0 0 ^ 1 0 == 1 1 0 1 0
//    1 0
//
//    1 0 1 0
//    0 0 0 0

    return 0;
}