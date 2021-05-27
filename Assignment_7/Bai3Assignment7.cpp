#include<stdio.h>

int main(){
	int a[50],n,max=0,count=0;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d :",i+1);scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			count++;
			if(count>max)
				max=count;
		}else if(a[i]<0){
			count=0;
		}			
	}
	if(max==0)
		printf("\nDay so la day so am !");
	else
		printf("\nSo luong cac so nguyen duong lon nhat trong mang la: %d",max);
	
}
