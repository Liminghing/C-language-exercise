//
//  main.c
//  ch03_ex06
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",(a > b) ? ((b > c) ? c : b) : ((a > c) ? c : a)) ;
    
    return 0;
    
    
    
}
//
//
