	#include <bits/stdc++.h>
	  #define endl "\n"
	  #define ll long long int
	  #define mod 1000000007
	  #define inf 1000000000000000001;
	  using namespace std;
	  int fib(int n){
	  	if(n == 0 || n == 1){
	  		return n;
	  	}
	  	else{
	  		return fib(n-1)+fib(n-2);
	  	}
	  }
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

	    int n;
	    cin>>n;
	    for (int i = 0; i < n; ++i)
	    {
	    	/* code */
	    	cout<< fib(n);
	    }
	   
	    return 0;
	  }
