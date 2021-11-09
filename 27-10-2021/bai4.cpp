#include<stdio.h>
int main(){
	int n;
	printf("Enter input=");
	scanf("%d",&n);
	
	if(n==1||n==2){
		printf("So dung o vi tri thu %d = 1",n);
	}
	return 0;
	
	int a,a1,a2;
	a=a1=a2=1;
	for(int i=3;i<=n;i++){
		a=a1+a2;
		a1=a2;
		a2=a;
	}
	printf("So dung o vi tri thu %d = %d",n,a);
}
