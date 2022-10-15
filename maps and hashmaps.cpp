#include<bits/stdc++.h>
#include<iostream>
using namespace std;


//function to print map
void printMap(map<int,string> &m){
cout<<m.size()<<endl;
//map<int,string>::iterator it;
//for(it=m.begin();it!=m.end();++it){
 for(auto &it:m){
    cout<<it.first<<" "<<it.second<<"\n";
}


}


int main(){
map<int,string> m;
m[1]="afs";
m[5]="sfef";
m[3]="dsfsf";
m[7]="krokqto";
//ALL OPERATION Ologn
// USES RED BLACK TREES


m.insert({4,"err"});
printMap(m);
auto it = m.find(3);//returns the iterator to the element
cout<<"find  "<<it->first<<" "<<it->second<<"\n";
m.erase(3);//deleting using key
auto it1 = m.find(7);//
if(it1 != m.end()){
m.erase(it1);}//deleting using pointer
cout<<"-------------------------------------"<<endl;
printMap(m);

m.clear();//empties the whole map
printMap(m);



return 0;}
