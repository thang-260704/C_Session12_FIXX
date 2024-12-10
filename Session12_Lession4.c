#include<stdio.h>

void max(int arr[], int size){
	int max = arr[0];
	for(int i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("Gia tri lon nhat trong mang la : %d",max);
}

int main(){
	int index;
	printf("Moi ban nhap so luong phan tu trong mang : ");
	scanf("%d", &index);
	int number[index];
	for(int i=0;i<index;i++){
		printf("Moi ban nhap gia tri thu %d cua mang : ",i+1);
		scanf("%d", &number[i]);
	}
	max(number,index);
	return 0;
}
