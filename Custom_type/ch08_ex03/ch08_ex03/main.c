//
//  main.c
//  ch08_ex03
//
//  Created by 임준형 on 9/16/24.
//
//피보나치 수는 0과 1로 시작하고, 세 번째 피보나치 수 부터는 바로 앞의 두 항의 합으로 정의된다.
//피보나치 수를 반환하는 재귀함수를 구현

#include <stdio.h>
int Fibonacci(int,int);
int main(int argc, const char * argv[]) {
    // insert code here...
    Fibonacci(0,1);
    return 0;
}
int Fibonacci(int num1,int num2){
    printf("%d ",num1);
    if (num1>100){
        return 1;
    }
    Fibonacci(num2,num1+num2);
    return 1;
}
