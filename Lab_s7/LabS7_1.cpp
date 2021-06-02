#include<stdio.h>

int main(){
	int a[50],n,count=0,s=0;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d :",i+1);scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			s=s+a[i];
			count++;
		}
	}
	float tbc;
	tbc=s/count;
	printf("Trung binh cong cac phan tu le trong mang la: %f",tbc);
	
}
