#include<stdio.h>

int main(){
	int x;
	printf("Nhap so : ");scanf("%d",&x);
	if(x>0 && x>8){
		printf("So nhap khong hop le !");
	}else{
		if(x==8){
			printf("Day la chu nhat !");
		}else{
			printf("Day la thu: %d",x);
		}
	}
}
