#include<stdio.h>
int main(){
	int n;
	printf("Nhap so bat ki:");
	scanf("%d",&n);
	
	if(n>0)
	for(int i=2;i<=n;){
		if(n%2==0){
		n=n-i;
		printf("So chan tuong ung: %d\n",n);
		}else{
			int S=n-1;
			S=S-i;
			printf("So chan tuong ung: %d\n",S);
		}
	}
}
