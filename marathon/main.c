#include <stdio.h>
#include <string.h>
int compair(char * arr1, char * arr2, const int size);
int main(){
    const int size = 10;
    char arr1[size], arr2[size];
    printf("Enter first array: ");
    gets(arr1);
    printf("Enter second array: ");
    gets(arr2);
    if(compair(arr1, arr2, size) == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

