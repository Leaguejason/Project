#include<stdio.h>
#include<stdbool.h>
int SoNto(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2)
		return true;
	else
		return false;
}
bool Min(int n){
	int i=n+1;
	while(SoNto(i)==false)
	{
		i++;
	}
	printf("%d",i);
}
int main(){
	int n;
	printf("Enter input=");
	scanf("%d",&n);	
	printf("So nguyen to gan nhat la ");
	Min(n);
	return 0;
}
