#include<stdio.h>

int main() {
	int n, d;
	scanf("%d",&n);
	getchar();
	
	scanf("%d",&d);
	getchar();
	
	int cons = 1;
	int prev = 1;
	int best = 1;
	int twin = 0;
	int j = 0;
	while(d--) {
//		printf("~%d~\n",d);
		int lose = 1;
		int i = 0;
		char c;
		while(i <= n) {
			c = getchar();
			if(c == '\n') break;
			if(c == '0') lose = 0;
			i++;
		}
		twin += !lose;
		if(j > 0 && prev == lose && prev == 0) {
			cons++;
			if(cons > best) best = cons;
		}
		if(j > 0 && prev != lose && lose) cons = 0;
		if(j > 0 && prev != lose && prev) cons = 1;   
		prev = lose;
		j++;
	}
	
	if(!twin) printf("0\n");
	else {
		printf("%d\n",best);
	}
	
//	printf("%d\n",best);
	
	return 0; 
}
