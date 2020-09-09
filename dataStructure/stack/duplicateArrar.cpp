	#include <bits/stdc++.h>
	  #define endl "\n"
	  #define ll long long int
	  #define mod 1000000007
	  #define inf 1000000000000000001;
	  using namespace std;
	  int main()
	  {
	     #ifndef ONLINE_JUDGE
	     // for getting input from input.txt
	     freopen("input.txt", "r", stdin);
	     // for writing output to output.txt
	     freopen("output.txt", "w", stdout);
	    #endif
	    std::ios::sync_with_stdio(false);
	    cin.tie(NULL);
	    
	    string s;
	    cin>>s;

	    stack <char> st;
	    for (int i = 0; i < s.length(); ++i)
	    {
	    	// cout<<s[i];


	    	if(s[i] != ')'){
	    	st.push(s[i]);	
	    	}
	    	else{
	    		// cout<<st.top();
	    		st.push(s[i]);	
	    		while(st.top() != '('){
	    			// cout<<st.top();
	    			st.pop();
	    		}

	    		// while(st.top() != '('){
	    		// 	st.pop();
	    		// }
	    		// st.push(')');
	    		// cout<<st.top();
	    		st.pop();
	    	}
	    }
	    // cout<<st.top();
	   if(st.empty()){
	   	cout<<"true";
	   }
	   else{
	   	cout<<"false";
	   }

	    // for (int i = 0; i < 1; ++i)
	    // {
	    // 	cout<<v[i];
	    // }
	    return 0;
	  }
