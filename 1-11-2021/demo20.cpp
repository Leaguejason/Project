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
	int count=0,countmax,c[n];
	for(i=0;i<n;i++)
	{
		if(ar[i]<=0)
		{count=0;
			continue;
		}else{
			count++;
			c[i]=count;
		}
		countmax=1;
		if(c[i]>countmax)
		countmax=c[i];
	}
	printf("So luong cac so duong lon nhat lien tiep=%d",countmax);
}
