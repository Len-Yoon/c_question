#include <stdio.h>

//소수 구하기
int main(void) {
    int a;
    int count = 0;

    printf("소수인지 알고싶은 숫자를 적으세요: \n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count > 2) {
        printf("소수가 아닙니다.\n");
    } else {
        printf("소수가 맞습니다.\n");
    }
}