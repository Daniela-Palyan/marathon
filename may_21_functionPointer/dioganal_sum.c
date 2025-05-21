#include <stdio.h>
#define SIZE 6

int down_sum(int arr[SIZE][SIZE]){
    int sum = 0;
    for(int i = 0; i < SIZE; ++i){
        for(int j = 0; j <= i; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int up_sum(int arr[SIZE][SIZE]){
    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        for(int j = i; j < SIZE; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int sum(int arr[SIZE][SIZE], int (*p)(int [SIZE][SIZE])){
    return p(arr);
}

int main(){
    int arr[SIZE][SIZE];
    
    printf("Enter your matrix: ");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter what sum do you want to have (+ up side, - down side): ");
    char f;
    scanf(" %c", &f);
    int res = 0;
    if(f == '+') res = sum(arr, &up_sum);
    else if(f == '-') res = sum(arr, &down_sum);
    else{
        printf("Invalid\n");
        return 0;
    }
    printf("Result is: %d\n", res);
    return 0;
}

