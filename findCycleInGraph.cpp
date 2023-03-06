// depth first search code implementattion in cpp

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<vector<int>> cc;
vector<int> current_cc;


vector<int> g[N];
bool vist[N];

bool dfs(int vertex,int parent){
 // take action on vertex after entering the vertex
	// cout<<vertex<<endl;
    vist[vertex]=true;
    bool isLoopExists= false;
    // current_cc.push_back(vertex);

	for (int child:g[vertex]){
// take action before entering the child
		if(vist[child] && child==parent) continue; 
		if(vist[child]) return true;
		 isLoopExists|= dfs(child,vertex);
 
// take action after entering the child

	}

return isLoopExists;
// take action before exting the vertex
}



 

int main() {
	int n,e;
	cin>>n>>e;
	for(int i=0;i<e;++i){
    int v1,v2;
    cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
	}

// count of connected components
	 bool isLoopExists= false;
	 for(int i=1;i<=n;++i){
	 	if(vist[i]) continue;
	 	if(dfs(i,0)){
	 	  	isLoopExists= true;
	 		break;
	 	}
	 }

cout<<isLoopExists<<endl;
}



