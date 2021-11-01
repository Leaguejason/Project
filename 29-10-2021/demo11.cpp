#include <stdio.h>
int main(){
	int n,a;
	printf("Nhap so n: ");
	scanf("%d",&n);
		printf("Cac so nguyen to nho hon %d la:\n ",n);
		for(int i=2;i<n;i++){ 
			for(a=2;a<n;a++){	
				if(i%a==0 && i!=a){  
					break;
				}
			}if(i%a!=0){ 
			printf("%d \n ", i);	
		}
	}
}
