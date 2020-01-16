//
// Created by 困呐～ on 2020/1/1.
//

#include <stdio.h>

void print1(int y1, int y0);

void print2(int y1, int y0);

int main() {
    int y0, m0, d0, y1, m1, d1;
    scanf("%d%d%d%d%d%d", &y0, &m0, &d0, &y1, &m1, &d1);
//    if (m1 >= m0) {
//        if (d1 >= d0) {
//            int i;
//            i = y1 - y0;
//            printf("%d\n", i);
//        } else {
//            int k;
//            k = y1 - y0 - 1;
//            printf("%d\n", k);
//        }
//    } else {
//        int l;
//        l = y1 - y0 - 1;
//        printf("%d\n", l);
//
//    }
    if (m1 > m0) {
        print1(y1, y0);
    } else if (m1 == m0) {
        if (d1 >= d0) {
            print1(y1, y0);
        } else {
            print2(y1, y0);
        }
    } else {
        print2(y1, y0);
    }
    return 0;
}

void print1(int y1, int y0) {
    printf("%d\n", y1 - y0);
}

void print2(int y1, int y0) {
    printf("%d\n", y1 - y0 - 1);
}
