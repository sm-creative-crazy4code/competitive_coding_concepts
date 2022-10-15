#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
    cout<<"size"<<v.size()<<endl;
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}

int main( ) {

//vectors are dynamically sized arrays contiguous memory blocks
int n;
vector<int>v;
cin>>n;
for (int i=0;i<n;i++){
   int x;
   cin>>x;
   printvec(v); //=> inserts elements at the end of vector
   v.push_back(x);



}


return 0;

}

