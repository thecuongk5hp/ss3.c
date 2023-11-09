#include <stdio.h>
int main(){
	int number , thousandDigit , hundredDigit , dozenDigit , unitDigit , sum;
	printf(" nhap mot so nguyen co 4 chu so: ");
	scanf("%d", &number);
	// tach cac chu so
	unitDigit = number % 10;
	number /=10;
	dozenDigit = number % 10;
	number /=10;
	hundredDigit = number % 10;
	number /=10;
	thousandDigit = number % 10;
	number /=10;
	
	// tinh tong cac chu so
	sum = thousandDigit + hundredDigit + dozenDigit + unitDigit; 
	printf("Tong cac chu so la: %d\n", sum);

    // In ra so nghich dao
    printf("So nghich dao la: %d%d%d%d", unitDigit, dozenDigit, hundredDigit, thousandDigit);

    return 0;
} 
