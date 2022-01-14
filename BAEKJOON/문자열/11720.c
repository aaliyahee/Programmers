#include <stdio.h>

int main(void) {
	int n, sum=0;
	char c[100];
	
	scanf("%d", &n);
	scanf("%s", &c); //숫자 한번에 입력 (문자열)
	
	for(int i=0; i<n; i++){
		sum=sum+c[i]-'0';
	}
	
	printf("%d", sum);
	return 0;
}
