#include <stdio.h>
int main(){
		// nhap a va b
	int a,b;
	printf("Nhap so a ");
	scanf("%d",&a);
	printf("Nhap so b ");
	scanf("%d",&b);
		int m = 0;
		m = m+ b;
		if(b<=31 && b >= 1){
		if(a==1){
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==2 && b <=28 ){
			m = m + 31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}			
		}else if(a==3){
			m = m+31+28;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==4 && b<=30){
			m = m+31+28+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==5){
			m = m+31+28+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}			
		}else if(a==6 && b<=30){
			m = m+31+28+31+30+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==7){
			m = m+31+28+31+30+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==8){
			m = m+31+28+31+30+31+30+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==9 && b<=30){
			m = m+31+28+31+30+31+30+31+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==10){
			m = m+31+28+31+30+31+30+31+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==11 && b<=30){
			m = m+31+28+31+30+31+30+31+31+30+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}
		}else if(a==12){
			m = m+31+28+31+30+31+30+31+31+30+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			switch(m%7){
				case 1: printf("ngay b la thu 2 ");break;
				case 2: printf("ngay b la thu 3 ");break;
				case 3: printf("ngay b la thu 4 ");break;
				case 4: printf("ngay b la thu 5 ");break;
				case 5: printf("ngay b la thu 6 ");break;
				case 6: printf("ngay b la thu 7 ");break;
				case 0: printf("ngay b la Chu Nhat ");break;
			}																				
}else{
	printf("a hoac b chua dung dieu kien de bai");
}
}else{
	printf("a hoac b chua dung dieu kien de bai");
}
}


