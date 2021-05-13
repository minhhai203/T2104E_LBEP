#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap so a: "); scanf("%d",&a);
	printf("Nhap so b: "); scanf("%d",&b);
	printf("Nhap so c: "); scanf("%d",&c);
	
	//Cach 1
	if(a>b && a>c){
		printf("So lon nhat la so : %d",a);
	}else{
		if(b>a && b>c){
			printf("So lon nhat la so : %d",b);
		}else{
			printf("So lon nhat la so : %d",c);
		}
		
	}
	
	//Cach 2:
//	int max;
//	max =a ;
//	if( max <b){
//		max =b;
//	}
//	if(max <c){
//		max =c ;
//	}
//	printf ("So lon nhat la : %d", max);
	
}
