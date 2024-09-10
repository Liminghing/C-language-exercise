//
//  main.c
//  ch04_ex07
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d",&num);
    for(int i = 1 ; i < 10 ; i++){
        printf("%d X %d = %d\n",num,i,i*num);
    }
    return 0;
}
