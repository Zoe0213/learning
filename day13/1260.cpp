//
// Created by 困呐～ on 2020/1/6.
//
#include <stdio.h>
#include <string.h>

int transfer(char str[]) {
    if (!strcmp(str, "zero")) {
        return 0;
    } else if (!strcmp(str, "one")) {
        return 1;
    } else if (!strcmp(str, "two")) {
        return 2;
    } else if (!strcmp(str, "three")) {
        return 3;
    } else if (!strcmp(str, "four")) {
        return 4;
    } else if (!strcmp(str, "five")) {
        return 5;
    } else if (!strcmp(str, "six")) {
        return 6;
    } else if (!strcmp(str, "seven")) {
        return 7;
    } else if (!strcmp(str, "eight")) {
        return 8;
    } else if (!strcmp(str, "nine")) {
        return 9;
    }
}

int main() {
    char str[100];
    while (true) {
        int leftNumber = 0;
        int rightNumber = 0;
        bool flag = true;
        while (scanf("%s", str) && strcmp(str, "=") != 0) {
            if (!strcmp(str, "+")) {
                flag = false;
                continue;
            }
            if (flag) {
                int num = transfer(str);
                leftNumber = leftNumber * 10 + num;
            } else {
                int num = transfer(str);
                rightNumber = rightNumber * 10 + num;
            }
        }
        if (leftNumber == 0 && rightNumber == 0) {
            break;
        } else {
            printf("%d\n", leftNumber + rightNumber);
        }
    }
    return 0;
}
