#include<stdio.h>
int main(){
	int n;
	do{
	printf("Enter input=");
	scanf("%d",&n);
	}while(n<1);
	
	float S=0;
	for(int i=1;i<=n;i++){
		S=S+1.0/i;
	}
	printf("Tong so can nhap=%f",S);
}
