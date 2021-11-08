#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so=");
		scanf("%d",&n);
	}while(n<=0);
	
	int data[n],ship;
	for(int i=0;i<n;i++){
		scanf("%d",&data[i]);
		for(int j=0;j<n-1;j++){
			for(int h=j+1;h<n;h++){
				if(data[j]>data[h]){
					ship=data[j];
					data[j]=data[h];
					data[h]=ship;
				}
			}
		}
	}
	printf("Mang da cho=");
	for(int i=0;i<n;i++){
		printf("%d\t",data[i]);
	}
}
