#include<stdio.h>
 int main(){
 	int gio_lam_viec;
    float  luong_theo_gio, phu_cap = 0, tong_luong,luong_co_ban;
	printf("Nhap so gio lam viec trong thang: ");
	scanf("%d", &gio_lam_viec );
    printf("Nhap muc luong gio: ");
    scanf("%f", &luong_theo_gio);
    luong_co_ban=gio_lam_viec*luong_theo_gio; 
	if (gio_lam_viec > 160) {
        phu_cap = 0.1 * luong_co_ban;// Phu cap 10% cua luong co ban la 
}
      tong_luong= luong_co_ban+phu_cap;  
	printf("luong co ban la:%.2f\n",luong_co_ban);
	if (phu_cap >0) {
		printf("phu cap la: %.2f\n",phu_cap); 
	} 
	printf("tong luong la:%.2f\n",tong_luong);
	return 0; 
 } 
