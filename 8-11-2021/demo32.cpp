#include<stdio.h>
int TongCacChuSo(int a){
	int decimal=0;
	for(;a>0;){
		decimal+=a%10;
		a/=10;
	}
	return decimal;
}
int main(){
	int n;
	printf("So nguyen can nhap=");
	scanf("%d",&n);
	
	printf("Tong cac chu so=%d",TongCacChuSo(n));
}
