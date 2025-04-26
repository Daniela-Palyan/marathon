#include <stdio.h>
int main(){
    const int size = 10;
    int arr1[size], arr2[size];
    printf("Enter numbers from first array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter numbers from second array: ");
    for(int i = 0; i< size; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Result is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr1[i] * arr2[i]);
    }
    printf("\n");
    return 0;
}

