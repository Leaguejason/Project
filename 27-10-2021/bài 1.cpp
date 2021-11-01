#include<stdio.h>
int main(){
	int n, i;
	double sum;
	//Nhap so n
	printf("Moi nhap so n: \n");
	scanf("%d", &n); 
	
	sum = 0; 
	i = 1; 
	if( n <= 0){ 
		printf("Nhap so n khong hop le! \n"); 
		printf("Moi nhap so n: \n");
		scanf("%d", &n);
	}else{          
		while(i <= n){       
			sum += 1/(double)i;        
			i++;        
		}
		printf("%lf", sum); 
	}
}
