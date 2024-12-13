#include <stdio.h>

int main(){
	int n,primeNums=2;	
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	printf("%d la so nguyen to: ",n);
	while(n){
		int count = 0;	
		for(int i=2;i*i<=primeNums;i++){
			if(primeNums % i == 0){
			count++;
			break;
		}
	}
		if(count == 0){
		printf("%d ", primeNums); n--;
	}
		primeNums++;
	}
    	return 0; 
}
