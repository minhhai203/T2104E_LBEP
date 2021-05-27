#include<stdio.h>

int main(){
	int a[50],n,max=0;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d :",i+1);scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			if(a[i]>max){
			max=a[i];
			}
		}
	}
	printf("So le lon nhat trong mang la: %d",max);
	
}
