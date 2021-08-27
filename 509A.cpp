#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n][n];
	
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < n; i++) {
			if(j == 0||i==0) arr[j][i]=1; 
			else arr[j][i] = arr[j-1][i] + arr[j][i-1];
		}
	}
	
	printf("%d\n",arr[n-1][n-1]);
	
	return 0;
}
