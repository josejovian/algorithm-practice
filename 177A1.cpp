#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int arr[N+1][N+1];
	
	int sum = 0;
	for(int j = 1; j <= N; j++) {
		for(int i = 1; i <= N; i++) {
			int x;
			scanf("%d",&x);
			if(j == i) sum += x;
			else if(j + i == N + 1) sum += x;
			else if(j == (N+1)/2) sum += x;
			else if(i == (N+1)/2) sum += x;
		}
	}
	
	printf("%d\n",sum);
	
	return 0;
}
