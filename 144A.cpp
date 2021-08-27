#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	
	int arr[N];
	int lowest = 101;
	int lowi = 0;
	int highest = -1;
	int topi =0;
	
	int i;
	int steps = 0;
	for(i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
		if(lowest >= arr[i]) {
			lowest = arr[i];
			lowi = i;
		}
		if(arr[i] > highest) {
			highest = arr[i];
			topi = i;
		}
	}
	
	i = topi;
	if(topi != 0) {
		while(i >= 1) {
			if(i-1 == lowi) {
				lowi = i;
			}
			int d = arr[i];
			arr[i] = arr[i-1];
			arr[i-1] = d;
			steps++;
			i--;
		}
	}
	
	i = lowi;
	if(lowi != N-1) {
		while(i < N-1) {
			if(i+1 == topi) {
				topi = i;
			}
			int d = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = d;
			steps++;
			i++;
		}
	}
	
	printf("%d\n",steps);
	return 0;
}
