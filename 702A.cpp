#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	
	int cons = 1;
	int best = 1;
	int prev = 0;
	for(int i = 0; i < N; i++) {
		int t;
		scanf("%d",&t);
		
		if(i > 0 && t > prev)
			cons++;

		if(i > 0 && t <= prev) {
			if(cons > best) {
				best = cons;
			}
			cons = 1;
		}
		
		prev = t;
		
		if(cons > best) {
			best = cons;
		}
	}
	
	printf("%d\n",best);
	
	return 0;
}
