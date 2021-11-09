#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool KiemTraDieuKien(int a,int b,int c){
	return a+b>c&&a+c>b&&b+c>a;
}
float DienTichTamGiac(int a,int b,int c){
	float p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
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
		printf("Dien tich tam giac can tim=%f",DienTichTamGiac(a,b,c));
	}
}
