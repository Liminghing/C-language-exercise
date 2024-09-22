//
//  main.c
//  ch09_ex05
//
//  Created by 임준형 on 9/22/24.
//
/*
 세자리 정수 a, b를 입력받고 각 자리수를 거꾸로 뒤집었을 때 어떤 수가 더 큰지 반환해 주는 함수를 구현하라. (ex – a : 123, b: 321의 경우 뒤집으면 각각 a’ : 321, b’:123 이므 로 “각 자릿수를 뒤집으면 123가 321보다 더 큽니다.”고 출력해야 함.)
 */
#include <stdio.h>
int reverseNum(int a){
    int number;
    number = (a%1000)+((a%100)*10)+((a%10)*100);
    return number;
}
int main(int argc, const char * argv[]) {
    int num1,num2;
    int renum1,renum2;
    scanf("%d %d",&num1,&num2);
    renum1 = reverseNum(num1);
    renum2 = reverseNum(num2);
    printf("각 자릿수를 뒤집으면 %d가 %d보다 더 큽니다.",(renum1>renum2)?num1:num2,(renum1>renum2)?num2:num1);
    return 0;
}
