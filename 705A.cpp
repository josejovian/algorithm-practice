#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	
	for(int i = 1; i <= N; i++) {
		if(i % 2 == 0) printf("I love");
		else printf("I hate");
		if(i < N) printf(" that ");
		else printf(" it");
	}
	
	printf("\n");
	
	return 0;
}
