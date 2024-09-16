//
//  main.c
//  ch09_ex12
//
//  Created by 임준형 on 9/22/24.
//
/*
 strcmp 함수를 <stdio.h> 헤더 내의 함수만 이용하여 구현
 */

#include <stdio.h>
void myStrcmp(char *dest,char * src,int num){
    int count = 1;
    while((*dest != '\0') || (count == num)){
        *dest= *src;
        dest++;
        src++;
    }
}
int main(int argc, const char * argv[]) {
    char str1[100] = "abc";
    char str2[100] = "defgh";
    myStrcmp(str1,str2,3);
    printf("%s",str1);
    return 0;
}
