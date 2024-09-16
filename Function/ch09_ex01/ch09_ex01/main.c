//
//  main.c
//  ch09_ex01
//
//  Created by 임준형 on 9/21/24.
//
/*용자로부터 하이픈(-)을 포함한 14자리의 주민등록번호를 입력 받고, 나이/성별을 계산
해주는 프로그램을 구현*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[50];
    char str1[5];
    char str2[5];
    char *ptr;
    int year,gen;
    printf("주민등록번호 : ");
    fgets(str,sizeof(str),stdin);
    strncpy(str1,str,2);
    year = atoi(str1);
    ptr = strchr(str,'-');
    strncpy(str2,ptr+1,1);
    gen = atoi(str2) % 2; //1 : 남자 0 : 여자
    
    if(year > 0 && year <=24){
        year+=2000;
    }else{
        year+=1900;
    }
    printf("%d년생 %s",year,(gen)?"남자":"여자");
}


