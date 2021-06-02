void kiemtrasonguyento(int n){
	int count=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		printf("Day la so nguyen to \n");
	}else{
		printf("Day k phai so nguyen to");
	}
			
}
bool TestSNT(int n)
{
	int count=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
			count++;
		}
		if(count ==0){
			return true;
		}else
			return false;
		return count;
	}
}
void timsonguyentotieptheo(int n)
{
	int i=n +1;
	while(TestSNT(i) == false){
		i++;
	}
	printf("So nguyen to can tim la %d",i);
}
void timsonghichdao(int n){
	
	if(n>0){
    	int nghichdao = 0;
    	while(n > 0){
    		int last;
        	last = n % 10;
        	nghichdao = nghichdao * 10 + last;
        	n = n / 10;
    	}
    	printf("So nghich dao la: %d", nghichdao);
	}else{
		printf("So ban nhap khong hop le !");
	}
}
void TimSoFibo(int n){
	int a,a1 = 1, a2 = 1;
    for(int i=3;i<=n;i++){
    	a = a1 + a2;
        a1 = a2;
        a2 = a;
	}
    printf("So Fibonacci thu %d la: %d", n, a);
}
