#include <stdio.h>
#include <string.h>
void uppercase(char * str, const int size){
    for(int i = 0; i < size; i++){
        if(str[i] <= 'z' && str[i] >= 'a'){
            str[i] -= ('a' - 'A');
        }
    }
}
int main(){
    const int size = 10;
    char str[size];
    printf("Enter your array (string): ");
    for(int i = 0; i < size; i++){
        scanf(" %c", &str[i]);
    }
    uppercase(str, size);
    printf("The result is: %s\n", str);
    return 0;
}

