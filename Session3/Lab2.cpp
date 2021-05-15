#include<stdio.h>

int main(){
	 int x,y,t;
	 printf("Nhap ngay: ");scanf("%d",&x);
	 printf("Nhap thang: ");scanf("%d",&y);	
	
	if(x>0 &&x<32 && y>=1 && y<=12 ){
	
		if(y==1){
			int i = x ;
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
			
		}
		else if(y==2){
			int i = x + (31);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==3){
			int i = x + (31+28);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==4){
			int i = x + (31+28+31);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==5){
			int i = x + (31+28+31+30);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==6){
			int i = x + (31+28+31+30+31);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==7){
			int i = x + (31+28+31+30+31+30);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==8){
			int i = x + (31+28+31+30+31+30+31);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
			
		}
		else if(y==9){
			int i = x + (31+28+31+30+31+30+31+31);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==10){
			int i = x + (31+28+31+30+31+30+31+31+30);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==11){
			int i = x + (31+28+31+30+31+30+31+31+30+31);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		else if(y==12){
			int i = x + (31+28+31+30+31+30+31+31+30+31+30);
			printf("Day la ngay thu %d trong nam\n",i);
			int t=i%7;
			if(t==0){
				printf("Day la chu nhat");
			}else{
				int n = t+1;
			printf("Va la thu %d", n);
			}
		}
		
	}else{
		printf("Ngay thang ban nhap khong hop le");
	}
	

	
}
