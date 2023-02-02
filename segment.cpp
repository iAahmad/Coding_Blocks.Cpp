#include <bits/stdc++.h>
using namespace std;
// const int N;

#define ll long long
vector<11> primes;
ll N = 1000001;

void prime_seive() {
	bool p[N];
	//memset(prime,true,sizeof(p));
	for (int i = 3; i < = N; i = i + 2)
	{
		if (p[i] == 1)
		{
			for (int j = i * i; j <= N; j = j + i)
				p[j] = 0;
		}
	}
}
int main () {


}