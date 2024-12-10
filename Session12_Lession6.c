#include<stdio.h>

void soHH(int a){
	int sum=0;
	int i=1;
	while(i<a){
		if(a%i==0){
			sum +=i;
		}
		i++;
	}
	if(sum==a){
		printf("%d la so hoan hao \n",a);
	} else{
		printf("%d khong phai so hoan hao \n",a);
	}
}

int main(){
	int number1, number2;
	printf("Moi ban nhap so thu nhat : ");
	scanf("%d", &number1);
	printf("Moi ban nhap so thu hai : ");
	scanf("%d", &number2);
	soHH(number1);
	soHH(number2);
	return 0;
}
