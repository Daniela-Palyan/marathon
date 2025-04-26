#include <stdio.h>
int main(){
    const int size = 5;
    int arr1[size], arr2[size];
    printf("Enter your firs array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter your second array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Result is: ");
    for(int i = 0; i < 2 * size; i++){
        if(i < size) printf("%d ", arr1[i]);
        else printf("%d ", arr2[i - size]);
    }
    printf("\n");
    return 0;
}
