#include<stdio.h>
typedef long long ll;

ll abs(ll a, ll b) {
	if(a > b) return a-b;
	else return b-a;
}

int main() {
	int N;
	ll d;
	scanf("%d %lld",&N,&d);
	
	ll arr[N];
	for(int i = 0; i < N; i++) {
		scanf("%lld",&arr[i]);
	}
	
	int pair = 0;
	for(int i = 0; i < N-1; i++) {
		for(int j = i+1; j < N; j++) {
			if(abs(arr[i],arr[j])<=d) pair+=2;
		}
	}
	
	printf("%d\n",pair);
	
	return 0;
}
