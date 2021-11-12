#include<stdio.h>   
int main(){
	int n;
	do{
		printf("Enter numbers:");
		scanf("%d",&n);
	}while(n<=0);
	
	int ar[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	int flag=0;
	for(int i=n-1;i>=0;i--){
		if(ar[i]%2==0){
			printf("Last even:%d",ar[i]);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("No EVEN number");
	}
}
