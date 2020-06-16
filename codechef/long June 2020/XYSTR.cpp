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
      ll j=0,c=0,k=1;
      string s;
      cin>>s;
      if(s.length()%2==0){
        k = k=2;
      }
      // cout<<s.at(0)<<s.at(1);
      if(s.length() == 1){
        cout<<"0"<<"\n";
      }
      else if(s.length()==2){
        if(s.at(0) == s.at(1)){
          cout<<"0"<<"\n";
        }
        else{
          cout<<"1"<<"\n";
        }
      }

      else if(s.length() >2)
      {
        while(j<s.length()-1){
          if((s.at(j) == 'x' && s.at(j+1) == 'y') || (s.at(j) == 'y' && s.at(j+1) == 'x')){
            c++;
            j = j+2;
          }
          else{
            j = j+1;
          }
        }

        // if(k == 2){
        //   if(s.at(s.length()-1))
        // }
        // else if(k==1){}
        cout<<c<<"\n";
      }

      
  }
	return 0;
		}	