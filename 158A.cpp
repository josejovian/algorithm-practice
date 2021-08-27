#include<stdio.h>

int main() {
	int N, k;
	scanf("%d %d",&N,&k);

	int arr[N];
	int limit = 0;
	for(int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
		if(i == k-1) limit = arr[i];
	}
	
	int sum = 0;
	for(int i = 0; i < N; i++) {
		if(arr[i] >= limit && arr[i] > 0) sum++;
		else break;
	}
	
	printf("%d\n",sum);
	
	return 0;
}
