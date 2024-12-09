#include<stdio.h>

int tinhTong(int n1, int n2){
	return n1 + n2;
}

int main(){
	int a = 5, b = 4, sum = 0;
	sum = tinhTong(a, b);
	printf("tong cua 2 so: %d", sum);
	
	return 0;
}
