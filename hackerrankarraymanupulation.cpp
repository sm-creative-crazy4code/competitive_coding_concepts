/*Given a number N denoted the elements in an array.
He wants to arrange the elements of an array such that odd 
positions have sorted elements in ascending order and even 
positions have sorted elements in descending order. 
for example, if we have 1 2 3 4 5 then the result will be
 1 5 2 4 3.

Please write the code for this problem

Input Input description.

The first line of the input contains an integer 
T denoting the number of test cases.
The description of T test cases follows.
First line of each test case contains N 
number of elements in an array.
Second line contains N space separated 
 integers A1, A2, ..., AN.
Output

Print array in desired order.
Constraints

1 ≤ T ≤ 10
1 ≤ N ≤ 1000000
1 ≤ Ai ≤ 100000000


*/

#include<bits/stdc++.h>
using namespace std;

const int N =1e7;
long long int a[N];


 void inputArray(int n){
 	for (int i = 0; i<n; i++){
 		cin>>a[i];
 	}
 }

 void printArray(int n){
 	for (int i = 0; i< n;i++)
 	{
 		cout<<a[i]<<" ";
 	}
 }



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		inputArray(n);
 
		//even index = asending
		//odd index desending


vector<long long int> v1;
vector<long long int>v2;
		for (int i = 0; i < n; i++){
			v1.push_back(a[i]);
			v2.push_back(a[i]);
				}
		

		
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		reverse(v2.begin(), v2.end());


// auto x= v1.begin();
// auto y =v2.begin();
// for (std::vector<long long int>::iterator i = v1.begin(); i != v1.end(); ++i)
// {
// 	cout<<*i<<" ";
// }

// cout<<"\n";
// for (std::vector<long long int>::iterator i = v2.begin(); i != v2.end(); ++i)
// {
// 	cout<<*i<<" ";
// }
// cout<<"\n";


		auto p= v1.begin();
		auto q =v2.begin();
		for (int i = 0; i<n; ++i){
	       if(i%2==0){
				a[i]=*p;
				p++;
			     v2.erase(p,p);}
				else{
				a[i]=*q;
				q++;
				v1.erase(q,q);
				}
}

printArray(n);

		cout<<"\n";

	}
	return 0;
}