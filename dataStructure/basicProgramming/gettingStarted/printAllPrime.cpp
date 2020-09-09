	#include <bits/stdc++.h>
	  #define endl "\n"
	  #define ll long long int
	  #define mod 1000000007
	  #define inf 1000000000000000001;
	  using namespace std;
	  int main()
	  {
	    //  #ifndef ONLINE_JUDGE
	    //  // for getting input from input.txt
	    //  freopen("input.txt", "r", stdin);
	    //  // for writing output to output.txt
	    //  freopen("output.txt", "w", stdout);
	    // #endif
	    std::ios::sync_with_stdio(false);
	    cin.tie(NULL);
	    ll a,b;
	    cin>>a>>b;
	    // cout<<"He";
	    for (int i = a; i <= b; ++i)
	    {
	    	int count = 0;
	    	for(int j=2; j*j <= b; j++){
	    		if(i%j == 0){
	    			count++;
	    			break;
	    		}
	    	}

	    	if(count == 0){
	    		cout<<i<<endl;
	    	}
	    }
	    return 0;
	  }
