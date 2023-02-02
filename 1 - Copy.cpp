#include <bits/stdc++.h>
using namespace std;
//const int N=0;
#define int long long
bool prime[100005];


void prime_seive(int n) {
	// for (int i = 0; i < 100005; i++)
	// {
	// 	prime[i]=1;
	// }
	//memset(prime, true, sizeof(p));


	for (int i = 3; i * i <= n; i = i + 2)
	{
		if (prime[i] == 1)
		{
			for (int j = i * i; j <= n; j = j + i)
			{
				prime[i] = 0;
			}
		}
		for (int i = 3; i <= n ; i = i + 2) {
			if (prime[i] == 1)
			{
				cout << i << " ";
			}
		}
		cout << endl << endl;
	}

	int32_t main () {
		prime_seive(100005);
		int t;
		cin >> t;
		while (t--) {
			int n;
			cin >> n;
			print_prime();
		}
		//precomputation




	}