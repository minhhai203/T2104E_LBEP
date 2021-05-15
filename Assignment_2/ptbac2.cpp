#include<stdio.h>
#include<math.h>


int main(){
	float a,b,c;
	printf("Phuong trinh co dang ax^2 + bx + c = 0\n");
	printf("Nhap a : ");scanf("%f", &a);
	printf("Nhap b : ");scanf("%f", &b);
	printf("Nhap c : ");scanf("%f", &c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			float x;
			x = -c/b;
			printf("Phuong trinh co 1 nghiem : %f", x);
		}
	}else{
		float delta;
		delta = b*b-4*a*c;
		if(delta >0){
				float x1,x2;
				x1 =(-b-sqrt(delta)/(2*a));
				x2 =(-b+sqrt(delta)/(2*a));
				printf("Phuong trinh co nghiem x1 : %f\n", x1);
				printf("Phuong trinh co nghiem x2 : %f", x2);
			
		}else if(delta == 0){
			float nghiemkep;
			nghiemkep =-b/(2*a);
				printf("Phuong trinh co nghiem kep : %f",nghiemkep);
			}else{
				printf("Phuong trinh vo nghiem");		
			}
		
	}
}
