//
//  main.c
//  ch08_ex01
//
//  Created by 임준형 on 9/16/24.
//
//  사용자로부터 월 급여를 입력받으면 연봉을 반환하는 함수

#include <stdio.h>
int patment(int);
int main(int argc, const char * argv[]) {
    int my_pay;
    printf("월급 : ");
    scanf("%d",&my_pay);
    printf("연봉 : %d",patment(my_pay));
    return 0;
}
int patment(int pay){
    return pay*12;
}
