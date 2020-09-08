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
      ll t;
      cin>>t
      while(t--){
      ll ts,i=0;
      cin>>ts;
      i=ts;
      if(ts%2==0){
        while(ts%2 == 0){
          ts = ts/2;
        }
        ts = ts-1;
        cout<<ts/2<<"\n";
      }
      else{
        ts = ts-1;
        cout<<ts/2<<"\n";
      }
      }
	return 0;
		}	