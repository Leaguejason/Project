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
	int S=0;
	int count=0;
	for(i=0;i<n;i++){
	if(ar[i]%2!=0&&ar[i>0])
		S=S+ar[i];
		count++;
	}
	printf("TBC:%f",(float)S/count);	
}
