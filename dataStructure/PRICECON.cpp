	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int ll;
	int main() {
		// #ifndef ONLINE_JUDGE
		// 	// for getting input from input.txt
		// 	freopen("input.txt", "r", stdin);
		// 	// for writing output to output.txt
		// 	freopen("output.txt", "w", stdout);
		// #endif
      int t;
      cin>>t;
      while(t--){
		ll n,k,sum=0,sum2=0;
    cin>>n>>k;
    vector<ll> v(n,0);
    vector<ll> b(n,0);
    for (int i = 0; i < n; ++i)
    {
      cin>>v[i];
      if(v[i]>k){
        b[i] = k;
      }
      else{
        b[i] = v[i];
      }
      sum += v[i];
      
    }
    for (int i = 0; i < n; ++i)
    {
     sum2 += b[i]; 
    }
    cout<<sum-sum2<<endl;
}
	return 0;
		}	