//
// Created by 困呐～ on 2019/12/18.
//

// target: 3 1 2 5 4  -> 1 2 3 4 5
// step 1: 1 3 2 5 4  left 3 2 5 4
// step 2: 1 2 3 5 4  left 3 5 4
// step 3: 1 2 3 5 4  left 5 4
// step 4: 1 2 3 4 5  left 5
// step 5: 1 2 3 4 5  left

// 数组
#include <stdio.h>

int main() {
    // assume i 介于 0～99, myArray[i]
    int myArray[100];
    int n;
    // 假设 n < 100
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]);
    }

    // 找数组myArray里面最小的数
    // n >= 1
    int min = myArray[0];
    for (int i = 1; i < n; i++) {
        if (min > myArray[i]) {
            min = myArray[i];
        }
    }
    printf("min = %d\n", min);

    // 3 4 1 5 2
    // 1 4 3 5 2
    // 1 2 3 5 4

    for (int i = 0; i < n; i++) {
        int min = myArray[i];
        int position = i;
        for (int j = i + 1; j < n; j++) {
            if (min > myArray[j]) {
                min = myArray[j];
                position = j;
            }
        }
        // position 和 i 换一下就好了
        // 交换两个数
        // a = 1 , b= 2
        // c = a = 1, a = b, b = c;
        int temp = myArray[i];
        myArray[i] = myArray[position];
        myArray[position] = temp;
        for(int k=0;k<n;k++) {
            printf("%d ",myArray[k]);
        }
        printf("\n");
    }
    printf("---------------------------\n");
    printf("Finish sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    return 0;
}

