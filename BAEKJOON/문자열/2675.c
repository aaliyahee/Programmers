#include <stdio.h>
#include <string.h>

int main(void) {
	int t, r;
	char p[20];
	
	scanf("%d",&t);
	
	for(int i=0; i<t; i++){
		scanf("%d", &r);
		scanf("%s", p);
		
		for(int j=0; j<strlen(p); j++){
			for(int k=0; k<r; k++){
				printf("%c",p[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
