#include <stdio.h>

int find_target(int *arr, const int size, int target){
    for(int i = 0; i < size; ++i){
        if(arr[i] == target) return i;
    }
    return -1;
}

int main(){
    const int size = 8;
    int arr[size], target = 0;
    printf("Enter your array: ");
    for(int i = 0; i < size; ++i){
        scanf("%d", &arr[i]);
    }
    printf("Enter your target: ");
    scanf("%d", &target);

    printf("Index of target is (-1 if there is no target): %d\n", find_target(arr, size, target));

    return 0;
}
