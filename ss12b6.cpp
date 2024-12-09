#include<stdio.h>

int soHoanHao(int n){
	int sum = 0;
	for(int j = 1; j < n;j++){
		if(n % j ==0){
			sum += j;
		}
	}
	if(n == sum){
		printf("%d la so hoan hao\n", n);
	}else{
		printf("%d khong phai la so hoan hao\n", n);
	}
}

int main(){
	int a, b;
	printf("nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("nhap vao so thu hai: ");
	scanf("%d", &b);
	soHoanHao(a);
	soHoanHao(b);
	
	return 0;
}
