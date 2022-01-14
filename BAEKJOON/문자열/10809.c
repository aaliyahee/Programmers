#include <stdio.h>

int main(void) {
	char s[100];

	scanf("%s", s); //문자 한번에 입력
	
	for(int i=97; i<=122; i++){ //아스키코드에서 소문자 범위
		int j=0;
		while(s[j]!=0){
			if(s[j]==(char)i) break;
			j++;
		}

		if(s[j]==(char)i){ //알파벳이 문자열에 포함되어 있다면
			printf("%d ", j); //위치(j) 출력
		}
		else printf("-1 "); //아니면 -1 출력
	}
	
	return 0;
}
