#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int arr[N];

	int avg = 0;
	for(int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
		avg += arr[i];
	}
	if(N > 2) {
		avg *= 2;
		avg /= N;
	}
//	printf("~%d~\n",avg);
	int rem = N/2;
	while(rem--) {
		int i, j;
		int a = -2, b = -2;
		int solved = 0;
		for(i = 0; i < N-1 && !solved; i++) {
			if(arr[i]==-1) continue;
			for(j = i+1; j < N && !solved; j++) {
				if(arr[j]==-1) continue;
				
				if(arr[i]+arr[j]==avg) {
//					printf("> %d %d <\n",arr[i],arr[j]);
					arr[i] = arr[j] = -1;
					a = i+1;
					b = j+1;
					solved = 1;
				}
			}
		}
		printf("%d %d\n",a,b);
	}
	
	return 0;
}
