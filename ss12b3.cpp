#include<stdio.h>

int giaiThua(int number){
	for(int i = number - 1; i > 0; i--){
		number*= i;
	}
	return printf("%d", number);
}

int main(){
	int n = 6;
	giaiThua(n);
	
	return 0;
}
