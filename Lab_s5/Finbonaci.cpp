#include <stdio.h>

int main()
{
    int n,a;
    printf("nhap n: ");
    scanf("%d", &n);
    int a1 = 1, a2 = 1;
    for(int i=3;i<=n;i++){
    	a = a1 + a2;
        a1 = a2;
        a2 = a;
	}
    printf("So Fibonacci thu %d la: %d", n, a);
    
}
