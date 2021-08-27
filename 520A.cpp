#include<stdio.h>

int main() {
	int L;
	scanf("%d",&L);
	getchar();
	
	int x = 0;
	char c;
	int letter[26] = {0};
	int unique = 0;
	while(c = getchar()) {
		if(c == '\n') break;
		if(c >= 'a' && 'z' >= c) c -= 32;
		letter[c-'A']++;
		if(letter[c-'A']==1) unique++;
	}
	
	if(unique==26) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
