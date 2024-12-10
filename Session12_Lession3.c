#include<stdio.h>

void giaiThua(int a){
	int sum=1;
	for(int i=1;i<=a;i++){
		sum *=i;
	}
	printf("Ket qua giai thua cua so ma ban vua nhap vao la : %d",sum);
}
int main(){
	int number;
	printf("Moi ban nhap vao so muon tinh giai thua : ");
	scanf("%d", &number);
	giaiThua(number);
	return 0;
}
