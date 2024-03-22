/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num, a, b, c;
    
    a = num / 100;
    b = (num % 100) / 10;
    c = (num % 100) % 10;

    printf("%d%d%d\n", c, b, a);


    return 0;
}