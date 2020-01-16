//
// Created by 困呐～ on 2019/12/19.
//

// 35679
// 9 -> 35679 % 10 = 9   35679 / 10 = 3567
// 7 -> 3567 % 10 = 7    3567 / 10 = 356
// ...
// 3 -> 3 % 10 = 3       3 / 10 = 0

#include <stdio.h>

int main(){
    int i1;
    scanf("%d",&i1);
//    while(i1 != 0) {
//        int d = i1 % 10;
//        printf("%d",d);
//        i1 /= 10;
//    }
    int result = 0;
    while(i1 != 0) {
        result *= 10;
        result += i1 % 10;
        i1 /= 10;
    }
    printf("%d\n",result);
    return 0;
}
