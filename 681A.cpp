#include<stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	getchar();
	
	int yes = 0;
	for(int i = 0; i < T; i++) {
		char str[11];
		int a, b;
		scanf("%[^ ]",&str);
		getchar();
		scanf("%d %d",&a,&b);
		getchar();
		
		if(a >= 2400 && b > a) yes = 1;
	}
	
	if(yes) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
