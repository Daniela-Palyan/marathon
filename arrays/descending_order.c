#include <stdio.h>

int descenting_order(int * arr, const int size){
    for(int i = 1; i < size; i++){
        if(arr[i] >= arr[i - 1]) return 0;
    }
    return 1;
}

int main(){
    const int size = 7;
    int arr[size];
    printf("Enter your array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    if(descenting_order(arr, size)) printf("Yes, numbers in array are in descenting order\n");
    else printf("No, there is no descenting order\n");

    return 0;
}
