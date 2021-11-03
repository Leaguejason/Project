#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so=");
		scanf("%d",&n);
	}while(n<=0);
		
	int ar[n],i;
	int min=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]>0)
		min=ar[i];
	}	
	if(min!=0)
	{
		for(i=0;i<n;i++)
			if(ar[i]>0&&min>ar[i])
				min=ar[i];
				printf("so duong nho nhat:%d",min);
	}else{
		printf("khong co gia tri thoa man");
	}	
}
