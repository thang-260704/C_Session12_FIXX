#include<stdio.h>

int total(int a, int b){
	return a+b;
}
int main(){
	int tong, x, y;
	printf("Moi ban nhap gia tri thu nhat : ");
	scanf("%d", &x);
	printf("Moi ban nhap gia tri thu hai : ");
	scanf("%d", &y);
	tong = total(x,y);
	printf("Tong cua hai gia tri la : %d",tong);
	return 0;
}
