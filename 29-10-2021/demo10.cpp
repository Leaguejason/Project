#include<stdio.h>
int main(){
	int a,b;
	printf("So thu nhat: ");
	scanf("%d",&a);
	printf("So thu hai: ");
	scanf("%d",&b);
	
	while(a*b!=0){
	if(a>b){
		a=a-b;
	}else{
		b=b-a;
		}
	}
	printf("USCLN= %d",a,b);
}
