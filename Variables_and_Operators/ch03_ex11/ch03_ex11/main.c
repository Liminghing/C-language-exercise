//
//  main.c
//  ch03_ex11
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int sec,min,hour;
    int temp;
    scanf("%d",&sec);
    hour =sec/3600;
    sec%=3600;
    min = sec/60;
    sec%=60;
    printf("%d초는 %d시간%d분%d초 입니다.",sec,hour,min,sec);
    
    return 0;
}
