//
//  main.c
//  ch08_ex06
//
//  Created by 임준형 on 9/16/24.
//
//두 정수 a, b를 입력받고 최대공약수를 반환하는 함수
#include <stdio.h>
int gcd(int,int);
int main(int argc, const char * argv[]) {
    
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d와 %d의 최대공약수 : %d\n",a,b,gcd(a,b));
    return 0;
}
int gcd(int a,int b){
    int min = (a < b) ? a : b ;
    int i;
    for(i = min ; i > 1 ; i--){
        if((a % i == 0) && (b % i == 0)) break;
    }
    return i;
}

