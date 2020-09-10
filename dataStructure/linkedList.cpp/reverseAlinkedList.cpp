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
	    list <int> l;
	    l.push_front(4);
	    l.push_front(3);
	    l.push_front(2);
	    l.push_front(1);
	    
	    l.reverse();

	    list <int> :: iterator it; 
    for(it = l.begin(); it != l.end(); ++it) 
        cout << *it<<" "; 
	    return 0;
	  }
