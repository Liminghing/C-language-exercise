//
//  main.c
//  ch08_ex02
//
//  Created by 임준형 on 9/16/24.
//
//원금(m)과 이율(rate), 연도(year) 총 3개의 인자를 입력받고
//원금 m이 year 연도만큼 지 났을 때 총 금액을 반환하는 함수
#include <stdio.h>

int money(int,double,int);
int main(int argc, const char * argv[]) {
    int m,year;
    double rate;
    printf("원금 : ");
    scanf("%d",&m);
    printf("이율 : ");
    scanf("%lf",&rate);
    printf("연도 : ");
    scanf("%d",&year);
    
    printf("%d년후 금액 : %d",year,money(m,rate,year));
    return 0;
}
int money(int m,double rate,int year){
    return m*(1+rate*year);
}
