#include <stdio.h>
int main(){
    const int size = 10;
    char arr[size];
    printf("Enter your array: ");
    for(int i = 0; i < size; i++){
        scanf(" %c", &arr[i]);
    }
    printf("Numbers of your array are: ");
    for(int i = 0; i < size; i++){
        if(arr[i] < '9' && arr[i] > '0'){
            printf("%c ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
