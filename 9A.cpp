#include<stdio.h>

int max(int a, int b) {
	return(a > b) ? a : b;
}

int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	int c = max(a,b);
	
	int top = 7-c, bot = 6;
	
	if(top % 2 == bot % 2) {
		top /= 2;
		bot /= 2;
	}
	
	if(top % 3 == bot % 3) {
		top /= 3;
		bot /= 3;
	}
	
	printf("%d/%d\n",top,bot);
}
