#include <stdio.h>
#include <math.h>
#include <time.h>


int main(void) {
    int random[] = {2,4,5,4,6};
    int m = 0;
    int result = 0;

    printf("숫자 M을 입력하시오! \n");
    scanf("%d",&m);

    //랜덤 숫자 함수 실행시 계속 변경
    srand(time(NULL));

    //랜덤 숫자 생성
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         random[i] = rand()%9 + 1;
    //     }
    // }



    //배열 sort
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4-i; j++) {
            if (random[j] > random[j + 1]) {
                int max = random[j];
                random[j] = random[j + 1];
                random[j + 1] = max;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if ((i+1) % 4 == 0) {
            result += random[3];
        } else {
            result += random[4];
        }
    }

    printf("%d\n", result);

}