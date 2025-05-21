#include <stdio.h>

void reverse(char *str, const int size){
    for(int i = 0; i < size/2; i++){
        char tmp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = tmp;
    }
}

int main(){
    const int size = 10;
    char str[size];
    printf("Enter some symbols: ");
    for(int i = 0; i < size; ++i){
        scanf("%c", &str[i]);
    }
    reverse(str, size);
    printf("Result is: ");
    for(int i = 0; i < size; i++){
        printf(" %c", str[i]);
    }
    printf("\n");

    return 0;
}
    
