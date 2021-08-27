#include<stdio.h>
#include<math.h>

int prime(int a) {
	int f = 0;
	for(int i = 1; i <= sqrt(a); i++) {
		if(a % i == 0) f += 2;
		if(i * i == a) f--;
	}
	if(f <= 2) return 1;
	return 0;
}

int main() {
	int n, m;
	scanf("%d %d",&n,&m);
	
	int i = 0;
	int yes = 0;
	while(n <= m) {
		if(i == 1 && prime(n) && n==m)
			yes = 1;
		if(n <= 2) n+=1;
		else n+=2;
		if(prime(n)) i++;
	}

	if(yes) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}

