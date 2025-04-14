#include <stdio.h>
#include <math.h>
#include <time.h>


int main(void) {
    int n = 0;
    printf("소수 인지 판별할 숫자를 입력하시오! \n");
    int arr[100000] = {0};

    scanf("%d", &n);

    for (int i = 0;i <= n;i++) {
        arr[i] = i;
    }

    //에레토스테네스의 체 알고리즘 활용
    for (int i = 2; i <= n;i++) {
        if (arr[i] != 0) {
            for (int j = 2 * i;j <= n;j += i) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 2;i <= n;i++) {
        if (arr[i] != 0) {
            printf("%d\n", arr[i]);
        }
    }

    getchar();
    return 0;

}