#include<stdio.h>
int main(){
	int n;
	printf("Nhap so bat ki:");
	scanf("%d",&n);
	
	int sum=0;
	
	if(n>0){
	for(int j=1;j<=n;j++){
		if(n%j==0){
		sum+=j;
			}
		}
	}else{
		printf("Vui long nhap lai\n");
		}
	printf("Tong cac uoc so la: %d\n",sum);
}
