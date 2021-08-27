#include<bits/stdc++.h>

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--) {
		int l = 1, r = 1;
		scanf("%d %d", &l, &r);
		
//		int best = 0;
		
		int shortcut = (r % 2 == 1) ? (r + 1) / 2 : (r + 2) / 2;
		
		int start = (shortcut >= l) ? shortcut : l;
		
		printf("%d\n", r % start);
	}
	return 0;
}
