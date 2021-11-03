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
	
	for(i=n-1;i<n;i--)
	{
		if(ar[i]%2!=0)
		break;
	}
	printf("So le gan cuoi:%d",ar[i]);
}

