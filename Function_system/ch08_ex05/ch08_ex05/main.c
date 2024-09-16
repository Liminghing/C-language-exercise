//
//  main.c
//  ch08_ex05
//
//  Created by 임준형 on 9/16/24.
//

#include <stdio.h>


typedef struct{
    char name[20];
    char color[20];
    int year;
}Car;

void printCar(Car *);
int main(int argc, const char * argv[]) {
    Car mycar = {
        "SM5",
        "white",
        2024,
    };
    printCar(&mycar);
    
    return 0;
}
void printCar(Car *pCar){
    printf("%d년 생산된 %s색상 %s",(*pCar).year,(*pCar).color,(*pCar).name);
}
