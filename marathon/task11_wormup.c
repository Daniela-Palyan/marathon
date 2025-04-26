#include <stdio.h>
void mul_tab(int n){
    int s = 1;
    while(s < 11){
        printf("%d * %d = %d\n", s, n, s*n);
        ++s;
    }
    printf("\n");
}
