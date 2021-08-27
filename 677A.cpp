#include<stdio.h>

int main() {
	int N, k;
	scanf("%d %d",&N,&k);
	
	int lol = N;
	for(int i = 0; i < N; i++) {
		int x;
		scanf("%d",&x);
		if(x > k) lol++;
	}
	
	printf("%d\n",lol);
	
	return 0;
}
