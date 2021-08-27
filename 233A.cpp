#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	
	if(N % 2 == 1) printf("%d\n",-1);
	else {
		for(int i = 1; i <= N; i++) {
			if(i % 2 == 1) printf("%d",i+1);
			if(i % 2 == 0) printf("%d",i-1);
			if(i < N) printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
