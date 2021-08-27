#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	
	int arr[N+1];
	int cop[N+1];
	for(int i = 1; i <= N; i++) {
		scanf("%d",&arr[i]);
		cop[arr[i]] = i;
	}
	
	for(int i = 1; i <= N; i++) {
		if(i > 1) printf(" ");
		printf("%d",cop[i]);
	}
	printf("\n");	

	return 0;
}
