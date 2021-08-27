#include<stdio.h>

char occX[100];
char occY[100];

int main() {
	int R, C;
	scanf("%d %d",&R,&C);
	getchar();

	for(int i = 0; i < R; i++) {
		for(int j = 0; j < C; j++) {
			char c;
			scanf(" %c",&c);
			if(c == '*') {
				occX[j]++;
				occY[i]++;
			}
		}
	}
	
	for(int i = 0; i < 100; i++) {
		if(occY[i] == 1) {
			printf("%d",i+1);
			break;
		}
	}
	
	printf(" ");
	
	for(int i = 0; i < 100; i++) {
		if(occX[i] == 1) {
			printf("%d",i+1);
			break;
		}
	}
	
	printf("\n");
	
	return 0;
}
