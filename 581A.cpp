#include<stdio.h>

int max(int a, int b) {
	return ( a < b ) ? b : a;
}

int min(int a, int b) {
	return ( a > b ) ? b : a;
}

int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	
	int l = min(a, b);
	int h = max(a, b);
	
	printf("%d %d\n", l, (h-l)/2);
	return 0;
}
