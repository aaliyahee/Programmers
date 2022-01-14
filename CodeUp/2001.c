#include <stdio.h>

int main(void) {
	int pasta[3], juice[2];
	
	for(int i=0; i<3; i++){
		scanf("%d", &pasta[i]);
	}
	for(int j=0; j<2; j++){
		scanf("%d", &juice[j]);
	}
	//파스타와 쥬스 가격 입력
	
	int temp1=0, temp2=0;
	for(int i=0; i<2; i++){
		for(int j=0; j<2-i; j++){
			if(pasta[j]>pasta[j+1]){
				temp1=pasta[j+1];
				pasta[j]=pasta[j+1];
				pasta[j+1]=temp1;
			}
		}
	}
	//파스타 가격 오름차순 정렬
  
	if(juice[0]>juice[1]){
		temp1=juice[1];
		juice[0]=juice[1];
		juice[1]=temp1;
	}
	//쥬스 가격 오름차순 정렬
	
	int price=0;
	price=pasta[0]+juice[0];
	printf("%.1f", price*1.1);
	
	return 0;
}
