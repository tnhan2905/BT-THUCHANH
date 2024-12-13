#include <stdio.h> 
 int main(){
    int n, i;
    // Nhap so nguyen duong 
    printf("Nhap 1 so nguyen duong bat ki: ");
    scanf("%d", &n);
    // Kiem tra so nguyen to  
    if (n < 2) {
        printf("%d khong phai la so nguyen to.\n", n);
    } else {
        int so_nguyen_to = 1;
        for (i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                so_nguyen_to = 0;
                break;
            }
        }
        if (so_nguyen_to) {
            printf("%d la so nguyen to.\n", n);
        } else {
            printf("%d khong phai so nguyen to.\n", n);
        }
    }
    return 0; 
 } 
