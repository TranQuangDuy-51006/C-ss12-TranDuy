#include<stdio.h>

int soNguyenTo(int n){
	int check = 1; 
	if(n < 2){
		check = 0; 
	}else{
		for(int j =2; j <= n/2;j++){
			if(n % j == 0){
				check =0; 
			} 
		}
	}
	if(check == 1){
		printf("%d la so nguyen to\n", n);
	}else{
		printf("%d khong phai so nguyen to\n", n);
	}
}

int main(){
	int a, b;
	printf("nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("nhap vao so thu hai: ");
	scanf("%d", &b);
	soNguyenTo(a);
	soNguyenTo(b);
	
	return 0;
}
