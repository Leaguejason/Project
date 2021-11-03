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
	
	int sum=0,c[n],summax;
	for(i=0;i<n;i++)
	{
		if(ar[i]<=0){
			sum=0;
			continue;
		}else{
			sum+=ar[i];
		}
		summax=0;
		if(sum>summax){
			summax=sum;
		}
	}
	printf("Tong chuoi so duong lon nhat=%d",summax);
}
