#include<stdio.h>
float average(int ar[],int a){
	int sum=0,count=0;
	for(int i=0;i<a;i++){
		sum=sum+ar[i];
		count++;
	}
	return (float)sum/count;
}
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
	printf("Average: %f",average(ar,n));
	return 0;
}
