#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	
	int newLow = 1e5;
	int newTop = -1;
	int amz = 0;
	
	for(int i = 0; i < N; i++) {
		int x;
		scanf("%d",&x);
		
		if(x > newTop) {
			newTop = x;
			if(i > 0) amz++;
		}
		if(newLow > x) {
			newLow = x;
			if(i > 0) amz++;
		}
		
	}
	
	printf("%d\n",amz);
	
	return 0;
}
