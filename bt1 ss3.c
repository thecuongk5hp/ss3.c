#include <stdio.h>

int main(){
  float r, pi = 3.141592;
   // Khai bao bien  r và pi voi kieu du lieu float
  printf("Nhap ban kinh hinh tron: ");
   // yeu cau nguoi dung nhap ban kinh cua hinh tron 
  scanf("%f", &r);
   // luu gia tri nguoi dung nhap vao bien r
  float perimeter = 2 * pi * r;
   // Tính chu vi hinh tron 
  float area = pi * r * r;
   // Tính dien tich hinh tron 
  printf("Chu vi hinh tron la: %.2f\n", perimeter);
   // In ra chu vi cua hinh tron voi hinh dang 2 so thap phan 
  printf("Dien tich hinh tron la: %.2f", area);
   // In ra dien tich cua hinh tron voi dinh dang 2 so thap phan 
  return 0;
}
