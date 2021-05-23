#include<stdio.h>

int main(){
	int a,tien=0;
	printf("\t*** MOI BAN CHON ***");
	menu:printf("\t\nMENU :\n");
	printf("\t1.Chon mon an\n");
	printf("\t2.Goi do uong\n");
	printf("\t3.Thanh toan\n");
	printf("\t4.Thoat chuong trinh\n");
	printf("\n\tBan chon : ");
	scanf("%d",&a);
	switch(a){
		case 1:
			{
				int monAn;
				food:printf("\n\t*** DANH SACH MON AN ***\n");
				printf("\t1.Com ga\n");
				printf("\t2.Pho\n");	
				printf("\t3.Bun\n");	
				printf("\t4.Thoat\n");
				printf("\tBan chon : ");scanf("%d",&monAn);
				if(monAn==1){
					printf("\tBan da chon : Com ga\n \tChuc ban ngon ngon mieng !\n");
					printf("\t----------------------------------");
					tien+=50000;
					goto menu;
				}
				 else if(monAn==2){
					printf("\tBan da chon : Pho\n \tChuc ban ngon ngon mieng !\n");
					printf("\t----------------------------------");
					tien+=35000;
					goto menu;
				}
				else if(monAn==3){
					printf("\tBan da chon : Bun\n\t Chuc ban ngon ngon mieng !\n");
					printf("\t----------------------------------");
					tien+=25000;
					goto menu;
				}
				
				else if(monAn==4)
				{
					goto menu;
				}
				else
				{
					printf("\tMon ban chon khong hop le ! Moi ban nhap lai !");
					goto food;
				}
				break;	
			}
		
		case 2:
			{
				int doUong;
				drink:printf("\n\t*** DANH SACH DO UONG ***\n");
				printf("\t1.Cocacola\n");
				printf("\t2.Fanta\n");	
				printf("\t3.Monster\n");	
				printf("\t4.Thoat\n");
				printf("\tBan chon : ");scanf("%d",&doUong);
			
				if(doUong==1){
					printf("\tBan da chon : Cocacola\n\t Chuc ban ngon ngon mieng !\n");
					printf("\t----------------------------------");
					tien+=15000;
					goto menu;
				}
				 else if(doUong==2){
					printf("\tBan da chon : Fanta\n\t Chuc ban ngon ngon mieng !\n");
					printf("\t----------------------------------");
					tien+=25000;
					goto menu;
				}
				else if(doUong==3){
					printf("\tBan da chon : Monster\n \tChuc ban ngon ngon mieng !\n");
					printf("\t----------------------------------");
					tien+=25000;
					goto menu;
				}
				
				else{
					printf("\n\tDo uong ban chon khong hop le ! Moi ban nhap lai !\n");
					goto drink;
				}
				break;	
			}
			
			case 3:
				{
					printf("\n\t\tSo tien ban can tra la: %d VND\n", tien);
					goto menu;
					break;
					
				}
			
			case 4:
			{
				int n;
				printf("\tBan chac chan muon thoat ?\n");
				thoat:printf("\n\tThoat    -> nhan phim 1\n");
				printf("\n\tQuay lai -> nhan phim 2\n");
				printf("\n\tBan chon : ");scanf("%d",&n);
				if(n==1){
					printf("\n\n\tCam on ban da su dung !\n\n");
					printf("\t***********************");
				}else if(n==2){
					goto menu;
				}else{
					printf("\tMoi ban chon lai !\n");
					goto thoat;
				}
				break;
			}
			
			default:
				{
					printf("\tMoi ban chon lai !");
					goto menu;
				}
			
	}
}
