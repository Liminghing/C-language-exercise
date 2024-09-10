//
//  main.c
//  ch04_ex09
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n  ; j++){
            if(i+j>=n+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
