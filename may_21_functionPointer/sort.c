#include <stdio.h>

void sort_down(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] < arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void sort_up(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void sort(int *array, int size, void (*p)(int *, int)){
    p(array, size);
}

int main(){
    const int size = 8;
    int arr[size];
    char f;
    printf("Enter your array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter how you want to sort your array (- if from the biggest to the smallest and + if from the smallest to the biggest): ");
    scanf(" %c", &f);
    if(f == '-') sort(arr, size, &sort_down);
    else if(f == '+') sort(arr, size, &sort_up);
    else{
        printf("Invalid\n");
        return 0;
    }
    printf("Sorted array is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
