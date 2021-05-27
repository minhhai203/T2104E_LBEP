#include<stdio.h>

int main(){
	int a[50],n,min=0;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d :",i+1);scanf("%d",&a[i]);
	}
	if(a[0]>0){
		min=a[0];
	}else{
		min=a[1];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			if (min > a[i])
            	min = a[i];
		}			
	}
	printf("So nguyen nho nhat trong mang la: %d",min);
	
}
