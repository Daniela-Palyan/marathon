#include <stdio.h>
int find(int * arr, const int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] = target){
            printf("YES\n");
            return 1;
        }
    }
    printf("NO\n");
    return 0;
}
int main(){
    const int size = 10;
    int arr[size];
    int target = 0;
    printf("Enter your array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter your target: ");
    scanf("%d", &target);
    find(arr, size, target);
    return 0;
}

