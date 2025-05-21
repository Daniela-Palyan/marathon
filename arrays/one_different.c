#include <stdio.h>

int find_different(int *arr, const int size){
    int not_dif = 0;
    if(arr[0] == arr[1] || arr[0] == arr[2]) not_dif = arr[0];
    else not_dif = arr[1];
    for(int i = 0; i < size; i++){
        if(arr[i] != not_dif) return arr[i];
    }
    return 0;
}

int main(){
    const int size = 7;
    int arr[size];
    printf("Enter your array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Different number is: %d\n", find_different(arr, size));

    return 0;
}

