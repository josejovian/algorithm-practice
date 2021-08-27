#include<bits/stdc++.h>

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--) {
		int l;
		scanf("%d", &l);
		getchar();
		
		int depth = 0;
		
		int swaps = 0;
		
		while(l) {
			char c;
			scanf(" %c", &c);

			if(c == '(') {
				if(depth) {
					swaps++;
				} else {
					depth--;
				}
			}
			
			if(c == ')') {
				if(depth && swaps) {
					swaps--;
				}
				depth++;
			}
			
			l--;
		}
		
		printf("%d\n", swaps);
	}
	
	return 0;
}
