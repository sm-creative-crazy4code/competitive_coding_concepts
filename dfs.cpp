// depth first search code implementattion in cpp

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vist[N];

void dfs(int vertex){
 // take action on vertex after entering the vertex
	cout<<vertex<<endl;
    vist[vertex]=true;
	for (int child:g[vertex]){
// take action before entering the child
		if(vist[child]) continue;
		dfs(child);

// take action after entering the child

	}

// take action before exting the vertex
}



 

int main() {
	int n,m;
	for(int i=0;i<9;++i){
    int v1,v2;
    cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
	}

dfs(1);


}



