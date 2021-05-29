#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
			printf("Phan tu thu %d :",i);scanf("%d",&a[i]);
			int tmp=a[i],j=i-1;
		for(j;j>=0 && tmp < a[j];j--){
			a[j+1] = a[j];			
		}
			a[j+1] = tmp;
		}
	
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	
}
