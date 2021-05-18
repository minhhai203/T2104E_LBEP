#include<stdio.h>
#include<math.h>

int main(){
	float von,laiXuat,soKyGui,tongTien;
	printf("Nhap so tien can gui: ");scanf("%f",&von);
	printf("Nhap so %% lai xuat/nam: ");scanf("%f",&laiXuat);
	printf("Nhap so ky gui tien: ");scanf("%f",&soKyGui);
	if(von>0 && laiXuat>0 && soKyGui>0){
			tongTien = von * pow((1+ (laiXuat/100)),soKyGui);
			printf("\n\nTong so tien ban nhan duoc la: %f",tongTien);
	}else{
		printf("\nDu lieu khong thoa man !");
	}

}
