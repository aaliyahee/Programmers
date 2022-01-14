#include <stdio.h>

int main(void) {
	int n, cnt=0;
	scanf("%d",&n); //거스름돈 입력
	
	while(n>=50000){
		n=n-50000;
		cnt++;
	}
	while(n>=10000){
		n=n-10000;
		cnt++;
	}
	while(n>=5000){
		n=n-5000;
		cnt++;
	}
	while(n>=1000){
		n=n-1000;
		cnt++;
	}
	while(n>=500){
		n=n-500;
		cnt++;
	}
	while(n>=100){
		n=n-100;
		cnt++;
	}
	while(n>=50){
		n=n-50;
		cnt++;
	}
	while(n>=10){
		n=n-10;
		cnt++;
	}
	
	printf("%d",cnt);
	
	return 0;
}
