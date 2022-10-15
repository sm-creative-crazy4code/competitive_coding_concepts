#include<bits/stdc++.h>
using namespace std;

int main( ) {

///pairs in cpp stores multiple  pairs of values
//declaration
pair <int ,string >p0;
pair <int ,string >p1;
//initialization
p0=make_pair(1,"ajksj");
p1={2,"def"};
//accessing the paired values
cout<<p0.first<<" "<<p0.second<<endl;

//arrays of pairs
pair <int,int> p[3];
for (int i=0;i<3;i++){
    cin>>p[i].first>>p[i].second;
}

for (int i=0;i<3;i++){
    cout<<p[i].first<<" "<<p[i].second<<endl; }


//changing value by reference
cout<<"before reference"<<endl;
cout<<p1.first<<" "<<p1.second<<endl;
 pair<int ,string> &p2= p1;

 p2.first =3;


cout<<"after reference"<<endl;
cout<<p1.first<<" "<<p1.second<<endl;

//swaping array elements
cout<<"after swaping elements"<<endl;
swap(p[0],p[2]);


for (int i=0;i<3;i++){
    cout<<p[i].first<<" "<<p[i].second<<endl; }



return 0;

}
