//
//  main.c
//  ch08_ex04
//
//  Created by 임준형 on 9/16/24.
//
//자동차의 이름과 색상, 생산 연도를 가지는 구조체를 만든 후, 이러한 구조체를 매개변수로 가지는 출력 함수
#include <stdio.h>


typedef struct{
    char name[20];
    char color[20];
    int year;
}Car;

void printCar(Car);
int main(int argc, const char * argv[]) {
    Car mycar = {
        "SM5",
        "white",
        2024,
    };
    printCar(mycar);
    
    return 0;
}
void printCar(Car c1){
    printf("%d년 생산된 %s색상 %s",c1.year,c1.color,c1.name);
}
