#include<stdio.h>

void soNT(int a){
	if((a!=1 && a%2!=0 && a%3 !=0 && a%5!=0 && a%7!=0) || a==2 || a==3 || a==5 || a==7){
		printf("%d la so nguyen to \n",a);
	} else{
		printf("%d khong phai so nguyen to \n",a);
	}
}

int main(){
	int number1, number2;
	printf("Moi ban nhap so thu nhat : ");
	scanf("%d", &number1);
	printf("Moi ban nhap so thu hai : ");
	scanf("%d", &number2);
	soNT(number1);
	soNT(number2);
	return 0;
}
