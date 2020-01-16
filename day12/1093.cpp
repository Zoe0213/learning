//
// Created by 困呐～ on 2020/1/1.
//

#include <stdio.h>

int main() {
    int n, sum = 0, s=0;
    n < 100;
    scanf("%d",&n);
    // 1 + (1+2) +(1+2+3)+...
    for (int i = 1; i <= n; i++) {
//        int sum1 = 0;
//        for(int j=1;j<=i;j++) {
//            sum1 += j;
//        }
       sum=sum+i;
       s=s+sum;
    }
    printf("%d\n",s);
    return 0;
}