#include<stdio.h>

int inRaHam(int arr[], int size){ 
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int a[] = {8 ,6 ,3 ,1, 7, 4, 5};
	int n = sizeof(a)/ sizeof(int);
	inRaHam(a, n);
	
	return 0;
}
