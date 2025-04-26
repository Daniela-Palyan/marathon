#include <stdio.h>
int mijin(int * arr, const int size){
    int mij = 0;
    for(int i = 0; i < size; i++){
        mij += arr[i];
    }
    return (mij / size);
}
int main(){
    const int size = 10;
    int arr[size];
    printf("Enter your array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Result is: %d\n", mijin(arr, size));
    return 0;
}
