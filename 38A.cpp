#include<stdio.h>

int main() {
	int n, d, a, b;
	scanf("%d",&n);
	
	int cost[n];
	for(int i = 1; i < n; i++)
		scanf("%d",&cost[i]);
	
	scanf("%d %d",&a,&b);
	
	int year = 0;
	for(int i = a; i < b; i++) {
		year += cost[i];
	}
	
	printf("%d\n",year);
	
	return 0;
}
