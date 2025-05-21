#include <stdio.h>

int find_missing_num(int *arr, const int size){
    int nerkaner[10] = {};
    for(int j = 1; j < size + 2; j++){
        for(int i = 0; i < size; i++){
            if(arr[i] == j) nerkaner[j - 1] = 1;
        }
    }
    int i = 0;
    while(nerkaner[i]) i++;

    return i + 1;
}


int main(){
	const int size = 9;
	int arr[size];
	printf("Enter numbers: \n");
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	printf("I found it: %d\n", find_missing_num(arr, size));

	return 0;
}
