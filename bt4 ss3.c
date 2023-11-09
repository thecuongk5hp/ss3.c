#include <stdio.h>

int main() {
  int number1, number2, number3;
  int max, min;

  printf("Nhap 3 so nguyen: ");
  scanf("%d %d %d", &number1, &number2, &number3);

  max = min = number1;

  max = (max < number2) ? number2 : max;
  max = (max < number3) ? number3 : max;

  min = (min > number2) ? number2 : min;
  min = (min > number3) ? number3 : min;

  printf("So nguyen lon nhat: %d\n", max);
  printf("So nguyen nho nhat: %d\n", min);

  return 0;
}
