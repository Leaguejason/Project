#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so=");
		scanf("%d",&n);
	}while(n<=0);
	
	int ar[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	int x;
		printf("Nhap so x=");
		scanf("%d",&x);
	
	for(i=0;i<n;i++){
  		if(x==ar[i])
  		break;
  	}
   	printf("%d thuoc mang da cho");
}

