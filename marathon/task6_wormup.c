
int compair(char * arr1, char * arr2, const int size){

    for(int i = 0; i < size; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}
