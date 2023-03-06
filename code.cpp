#include <bits/stdc++.h>
using namespace std;


int main() {
   vector<long long int> A;
   int t;
   cin>>t;
   while (t--){
      int n;
      cin>>n;
      for (int i = 0; i < n; ++i){
         int a;
         cin>>a;
         A.push_back(a);
         }

         int x,y;
         cin>>x>>y;
           int max =*max_element(A.begin(), A.end());
           // cout<<max<<endl;
        int count1=max/x;
       int diff= max%x;

       int count2 = diff/y;


      int result = count2+count1;
      cout<<result<<"\n";

   }


   

   return 0;
}
