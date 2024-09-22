//
//  main.c
//  ch09_ex08
//
//  Created by 임준형 on 9/22/24.
//
/*
 임의의 스트링(문자열)을 입력받아서 문자열 내에 등장하는 정수들을 전부 합한 결과를 출 력하는 프로그램을 포인터를 이용하여 구현
 2023년 12월 17일
 2052가 출력됨. (2023+12+17)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str[50];
    char temp[50];
    char *ptr = str;
    gets(str);
    int sum = 0;
    
    //"오늘은 2023년 12월 17일"
    int count = 0;
    while(*ptr != '\0'){
        if(('0'<= *ptr) && (*ptr <= '9')){
            temp[count] = *ptr;
            temp[count+1] = '\0';
            count++;
             
        }else{
            if(*temp != '\0'){
                sum += atoi(temp);
                count = 0;
            }
            strcpy(temp,"\0");
        }
        ptr++;
    }
    sum += atoi(temp);
    printf("%d",sum);
    return 0;
}
