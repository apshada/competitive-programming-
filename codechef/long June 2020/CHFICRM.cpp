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
        cin>>t;
        while(t--){
        ll n,fc=0,ftc=0,tc=0,c=0;
        cin>>n;
        vector<ll> v(n,0);
        for (int i = 0; i < n; ++i)
        {
          cin>>v[i];
        }

        for (int i = 0; i < n; ++i)
        {
         if(v[i] == 5){ fc++; }
         else if(v[i] == 10){
          tc++;
          if(fc<=0){ c++;}
          else{ fc--; }
         }
         else if(v[i] == 15){
          ftc++;
          if(tc<=0 && fc<2){ c++; }
          else{
            if(tc>0){ tc--; }
            else{ fc = fc-2; }
          }
          // else if(tc>0){ tc--; }
          // else if(fc>2){ fc--; }
         }


        }
       if(c>0){
        cout<<"NO"<<"\n";
       } 
       else{
        cout<<"YES"<<"\n";
       }
     }
  	return 0;
}
