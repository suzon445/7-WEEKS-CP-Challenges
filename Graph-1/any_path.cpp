#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
unordered_set<int> visited;

void add_edge(int src,int dest,bool bi_dir = true){
	graph[src].push_back(dest);
	if(bi_dir){
		graph[dest].push_back(src);
	}
}

bool dfs(int curr,int dest){
    // Base case
	if(curr == dest) return true;
	
    visited.insert(curr);//mark visited
    for(auto neigbour : graph[curr]){
    	if(not visited.count(neigbour)){
    		bool result = dfs(neigbour,dest);
    		if(result) return true;
    	}
    }
    return false;
}
bool any_path(int st,int end){
	return dfs(st,end);
}

int32_t main() {
  
  cin >> v;
  graph.resize(v,list<int> ());
  visited.clear();
  int e; cin >> e;
  while(e--){
  	int s,d;
  	cin >> s >> d;
  	add_edge(s,d);
  }
  int s,d;
  cin >> s >> d;
  cout << any_path(s,d) << endl;
  return 0;
}
