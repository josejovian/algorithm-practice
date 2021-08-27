#include<stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	getchar();
	
	for(int i = 0; i < N; i++) {
		char s[101];
		
		char c;
		int l = 0;
		while(c = getchar()) {
			if(c == '\n') break;
			s[l] = c;
			s[l+1] = '\0';
			l++;
		}
		
		if(l > 10) printf("%c%d%c\n",s[0],l-2,s[l-1]);
		else printf("%s\n",s);
	}
	
	return 0;
}
