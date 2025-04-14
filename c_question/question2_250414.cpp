#include <stdio.h>
#include <math.h>

int isSosu(int a) {
    int num = sqrt(a);
    printf("%d\n", num);
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
        return 1;
    }
}


int main(void) {
    // for (int i = 1000; i <= 9999; i++) {
    //     int b = isSosu(i);
    //     // printf("%d\n", b);
    // }
}