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
	    ll n,s;
	    cin>>n;
        stack<ll> st;
	    while(n > 0){
	    	s = n%10;
	    	n = n/10;
	    	st.push(s);
	   // 	cout<<s<<endl;
	    }
	    
	    while(!(st.empty())){
	        cout<<st.top()<<endl;
	        st.pop();
	    }
	    return 0;
	  }
