#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter input:");
	scanf("%s",str);
	char mid;
	for(int i=0;i<strlen(str)-1;i++){
		if(str[i]>=97&&str[i]<=122){
			for(int h=i+1;h<strlen(str);h++)
			if(str[i]>str[h]){
				mid=str[i];
				str[i]=str[h];
				str[h]=mid;
			}
		}
	}
	printf("chuoi da sap xep=%s",str);
	return 0;
}
