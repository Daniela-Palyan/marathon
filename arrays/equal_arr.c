#include <stdio.h>

int is_equal(int * arr1, int * arr2, const int size){
    int i = 0;
    while(i < size && arr1[i] == arr2[i]){
        i++;
    }
    if(i == size) return 1;
    return 0;
}

int main(){
    const int size = 6;
    int arr1[size], arr2[size];
    printf("Enter arr1: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter arr2: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr2[i]);
    }
    if(is_equal(arr1, arr2, size)) printf("They are equal \n");
    else printf("They are not equal\n");

    return 0;
}
