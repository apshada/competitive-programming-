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
	    int t;
	    cin>>t;
	    while(t--){
	    ll n,count=0;
	    cin>>n;

	    for (int i = 2; i*i < n; ++i)
	    {
	    	if(n % i == 0){
	    		count++;
	    		break;
	    	}
	    }

	    if(count == 0){
	    	cout<<"prime"<<endl;
	    }
	    else{
	    	cout<<"not prime"<<endl;
	    }
	}
	    return 0;
	  }
