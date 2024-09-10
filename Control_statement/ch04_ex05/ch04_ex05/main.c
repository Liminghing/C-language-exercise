//
//  main.c
//  ch04_ex05
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hour,minute;
    scanf("%d%d",&hour,&minute);
    int temp = hour *60 +minute;
    temp -=40;
    if(temp<0){
        temp=24*60+temp;
    }
    printf("%d:%d",temp/60,temp%60);
    return 0;
}
