#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    tong = toan + van + anh;
    trungBinh = tong / 3;

    printf("Tong diem 3 mon la: %.2f\n", tong);
    printf("Diem trung binh 3 mon la: %.2f", trungBinh);

    return 0;
}

