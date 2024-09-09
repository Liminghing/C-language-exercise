//
//  main.c
//  ch03_ex10
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    printf((a > b) ?
           (
            (a>c) ? ((a<b+c)?"가능":"불가능") : ((c<a+b)?"가능":"불가능")
            ):
           (
            (b>c) ? ((b<a+c)?"가능":"불가능") : ((c<a+b)?"가능":"불가능")
            )
           );
    return 0;
}
