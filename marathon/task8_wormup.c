#include <stdio.h>

int main(){
    const int size1 = 5, size2 = 3;
    int arr1[size1], arr2[size2];
    printf("Enter first array: ");
    for(int i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter second array: ");
    for(int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Result is: ");
    for(int i = 0; i < size1 + size2; i++){
        if(i < size1) printf("%d ", arr1[size1 - 1 - i]);
        else printf("%d ", arr2[size2 - (i - size1 + 1)]);
    }
    printf("\n");
    return 0;
}
