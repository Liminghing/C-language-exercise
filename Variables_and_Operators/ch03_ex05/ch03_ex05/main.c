//
//  main.c
//  ch03_ex05
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    scanf(" %d %d",&a,&b);
    //printf("%d",(a > b) ? a : b );
    (a > b) ? printf("%d",a) : printf("%d",b) ;
    return 0;
}
