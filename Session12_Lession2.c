#include<stdio.h>

void inMang(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int index;
	printf("Moi ban nhap so luong phan tu trong mang : ");
	scanf("%d", &index);
	int number[index];
	for(int i=0;i<index;i++){
		printf("Moi ban nhap gia tri thu %d : ",i+1);
		scanf("%d", &number[i]);
	}
	inMang(number,index);
	return 0;
}
