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
	    int a[5][5];
	    for (int i = 0; i < 5; ++i)
	    {
	    	for (int j = 0; j < 5; ++j)
	    	{
	    		if(i== 4 || i == 0 || (i+j) == 5-1)
	    		// cout<<i;
	    		cout<<"*";
	    		else{
	    			cout<<" ";
	    		}

	    		// else if(i + j == 5){
	    		// cout<<"*"<<" ";
	    		// }
	    	}
	    	cout<<endl;
	    }
	    return 0;
	  }
