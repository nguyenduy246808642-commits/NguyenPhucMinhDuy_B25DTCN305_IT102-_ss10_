#include <stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int so_dao=0; // reverse
	int so_du;
	
	while(n!=0){
		so_du=n % 10;
		so_dao=so_dao * 10 + so_du;
		n=n/10;
	}
	printf("dao nguoc n: %d",so_dao);
	
	return 0;
}
