#include<stdio.h>
#include<stdbool.h>
int ChuViTamGiac(int a,int b,int c){
	return a+b+c;
}
bool KiemTraDieuKien(int a,int b,int c){
	return a+b>c&&a+c>b&&b+c>a;
}
int main(){
	int a,b,c;
	printf("Nhap so=");
	scanf("%d",&a);
	
	printf("Nhap so=");
	scanf("%d",&b);
	
	printf("Nhap so=");
	scanf("%d",&c);
	
	if(KiemTraDieuKien(a,b,c)){
		printf("Chu vi tam giac can tim=%d",ChuViTamGiac(a,b,c));
	}
}
