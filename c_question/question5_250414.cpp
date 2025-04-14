#include <stdio.h>
#include <math.h>

//문제 5 : 1이 될 때가지
int main(void) {
    int n,k;

    printf("숫자 n 입력 \n");
    scanf("%d",&n);

    printf("숫자 k 입력 \n");
    scanf("%d",&k);

    int count = 0;

    while (1) {
        if (n != 1) {
            if (n % k == 0) {
                n = n / k;
                count++;
            } else {
                n -= 1;
                count++;
            }
        } else {
            break;
        }
    }
    printf("1이 되기위한 count 횟수 : %d",count);
}