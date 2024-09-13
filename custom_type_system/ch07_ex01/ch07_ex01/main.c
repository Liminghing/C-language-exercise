//
//  main.c
//  ch07_ex01
//
//  Created by 임준형 on 9/13/24.
//

#include <stdio.h>
typedef struct info{
    int num;
    int kor;
    int eng;
    int mat;
}Info;
int main(int argc, const char * argv[]) {
    Info student[5] = {
        {001,90,80,70},
        {002,99,88,77},
        {003,91,81,71},
        {004,96,86,76},
        {005,99,89,79},
    };
    for(int i = 0 ; i < 5 ; i++){
        printf("%d학생의 평균 : %.2lf\n",student[i].num,
               (student[i].eng+student[i].kor+student[i].mat)/3.0
               );
    }
    return 0;
}
