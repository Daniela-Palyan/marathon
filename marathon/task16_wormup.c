#include <string.h>
void rev(char * str){
    int size = strlen(str);
    char tmp = '\0';
    for(int i = 0; i < size/2; i++){
        tmp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = tmp;
    }

}
