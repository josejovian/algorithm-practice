#include<stdio.h>

int main() {
	int T;
	int A = 0, B = 0;
	scanf("%d",&T);
	
	while(T--) {
		int x, y;
		scanf("%d %d",&x,&y);
		if(x > y) A++;
		else if(x < y) B++;
	}
	
	if(A > B) printf("Mishka\n");
	else if(A < B) printf("Chris\n");
	else printf("Friendship is magic!^^\n");
	
	return 0;
}
