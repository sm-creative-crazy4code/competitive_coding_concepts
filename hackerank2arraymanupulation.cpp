/*Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

Example


Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]


*/

#include <bits/stdc++.h>



using namespace std;
const int N = 1e7;
long long int A[N];

void prefixsum(int n){

	for (int i = 1; i <= n; ++i)
	{
		A[i]+=A[i-1];
}
}

findmax(int n){

long long int max=A[1];
	for (int i = 1; i < N; ++i)
	{
		if(max<A[i]){
			max=A[i];
		}
	}
	cout<<max<<endl;
}


int main(){
	int n,t;
	cin>>n>>t;
	while(t--){
		int a,b,k;
		cin>>a>>b>>k;
		A[a]+=k;
		A[b+1]+=-k;

// int x =-2;
// int y= 2;
// cout<<x+y<<endl;




	}

prefixsum(n);

findmax(n);




	return 0;
}