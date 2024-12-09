#include<stdio.h>

int inRaHam(int arr[], int size){
	int max = arr[0];
	for(int i = 1; i < size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return printf("so lon nhat: %d", max);
}

int main(){
	int a[] = {8 ,6 ,3 , 9, 7, 4, 5};
	int n = sizeof(a)/ sizeof(int);
	inRaHam(a, n);
	
	return 0;
}
