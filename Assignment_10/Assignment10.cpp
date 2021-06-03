#include<stdio.h>
#include<stdlib.h>

int TimMax(int *a, int n){
	int max= *(a);
	for(int i=0;i<n;i++){
		if(max<*(a+i))
		{
			max=*(a+i);
		}
	}
	return max;
}
void SapXep(int *a, int n){
	for(int i=0;i<n;i++){
		int j=i-1;
		int tmp=*(a+i);
		while(j>=0 && tmp < *(a+i)){
			*(a+j+1)=*(a+j);
			j--;
		}
		*(a+j+1)=tmp;
	}
	printf("\nMang sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
}

int main(){
	int n;
	printf("Nhap kich thuoc mang ban dau: ");scanf("%d",&n);
	int *a;
	a = (int *)calloc(n, sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i);
		scanf("%d",a+i);
	}

	printf("\nPhan tu lon nhat trong mang la: %d",TimMax(a,n));
	SapXep(a,n);
	int x;
	do{
		printf("\nNhap so phan tu cua mang muon mo rong them: ");scanf("%d",&x);
		
	}while(x<=n);
	
	a=(int *)realloc(a, x *sizeof(int));
	printf("\nNhap them %d phan tu:",x-n);
	for(int i=n;i<x;i++){
		printf("\nNhap phan tu thu %d : ",i);
		scanf("%d",a+i);
	}
	printf("\nPhan tu lon nhat trong mang la: %d",TimMax(a,x));
	SapXep(a,x);
	
	free(a);
}
