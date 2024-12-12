#include <stdio.h>

int main() {
    int doi_don_vi;
    float so_tien_can_chuyen, so_tien_da_chuyen;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8) ? ");
    scanf("%d", &doi_don_vi);
    printf("Nhap so tien can chuyen doi: ");
    scanf("%f", &so_tien_can_chuyen);
    
    switch(doi_don_vi) {
        case 1:
            so_tien_da_chuyen = so_tien_can_chuyen * 23500; 
            printf("%.2f USD = %.2f VND\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        case 2:
            so_tien_da_chuyen = so_tien_can_chuyen * 25000;
            printf("%.2f EUR = %.2f VND\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        case 3:
            so_tien_da_chuyen = so_tien_can_chuyen * 28000;
            printf("%.2f GBP = %.2f VND\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        case 4:
            so_tien_da_chuyen = so_tien_can_chuyen * 180;
            printf("%.2f JPY = %.2f VND\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        case 5:
            so_tien_da_chuyen = so_tien_can_chuyen / 23500;
            printf("%.2f VND = %.2f USD\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        case 6:
            so_tien_da_chuyen = so_tien_can_chuyen  / 25000;
            printf("%.2f VND = %.2f EUR\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        case 7:
            so_tien_da_chuyen = so_tien_can_chuyen  / 28000;
            printf("%.2f VND = %.2f GBP\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        case 8:
            so_tien_da_chuyen = so_tien_can_chuyen  / 180;
            printf("%.2f VND = %.2f JPY\n", so_tien_can_chuyen, so_tien_da_chuyen);
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }
    
    return 0;
}
