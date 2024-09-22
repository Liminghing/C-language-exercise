//
//  main.c
//  ch09_ex11
//
//  Created by 임준형 on 9/22/24.
//
/*
 strcpy 함수를 <stdio.h> 헤더 내의 함수만 이용하여 구현
 */
#include <stdio.h>
char *myStrcpy(char *dest,char *src){
    while(*dest!='\0'){
        *dest=*src;
        dest++;
        src++;
    }

    return dest;
    
}


int main(int argc, const char * argv[]) {
    char str1[100] = "abc";
    char str2[100] = "def";
    printf("%d",myStrcpy(str1,str2));
    
    printf("%s",str1);
    return 0;
}
