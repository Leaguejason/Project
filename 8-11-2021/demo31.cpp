#include<stdio.h>
int UCLN(int a, int b){
	if(a==0||b==0){
		return a+b;
	}
	do{
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}while(a==b);
	return a;
}
int main(){
	int a,b;
	printf("Nhap so=");
	scanf("%d",&a);
	
	printf("Nhap so=");
	scanf("%d",&b);
	
	printf("BCNN=%d",(a*b)/UCLN(a,b));
}
