#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter input:");
	scanf("%s",str);
	int count=0,left=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='u'||str[i]=='o'||str[i]=='i'){
			count++;
		}else if(str[i]!='a'&&str[i]!='e'&&str[i]!='u'&&str[i]!='o'&&str[i]!='i'){
			left++;
		}
	}
	printf("Ki tu nguyen am=%d",count);
	printf("\nKi tu con lai=%d",left);
}
