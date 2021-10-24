#include<stdio.h>
int main(){
	int a,b;
	printf("nhap vao so can dao nguoc: ");
	scanf("%d",&a);
	b=0;
	b=b*10+a%10;
	a=a/10;
	if(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
		if(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
		if(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	printf("so dao nguoc la:%d",b);
	
}
