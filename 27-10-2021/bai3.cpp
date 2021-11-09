#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter input=");
	scanf("%d",&a);
	
	printf("Enter input=");
	scanf("%d",&b);
	
	printf("Enter input=");
	scanf("%d",&c);
	
	int P=a+b+c;
	float p=P/2.0;
	if(a+b>c&&a+c>b&&b+c>a){	
		printf("Chu vi tam giac=%d",P);
		printf("\nDien tich tam giac=%f",sqrt(p*(p-a)*(p-b)*(p-c)));
	}
}
