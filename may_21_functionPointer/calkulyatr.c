#include <stdio.h>
int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int calc(int a, int b, int (*p) (int, int)){
    return(p(a, b));
}

int main(){
    int res = 0;
    int a = 0, b = 0;
    char f = '\0';
    printf("Enter your problem: ");
    scanf("%d%c%d", &a, &f, &b);
    if(f == '+') res = calc(a, b, &sum);
    else if(f == '-') res = calc(a, b, &sub);
    else if(f == '*') res = calc(a, b, &mul);
    else{
        printf("Invalid\n");
        return 0;
    }

    printf("Result is %d\n", res);

    return 0;
}
