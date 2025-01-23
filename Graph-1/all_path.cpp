#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
unordered_set<int> visited;
vector<vector<int>> result;

void add_edge(int src,int dest,bool bi_dir = true){
	graph[src].push_back(dest);
	if(bi_dir){
		graph[dest].push_back(src);
	}
}

void dfs(int curr,int dest,vector<int> &path){
    // Base case
	if(curr == dest){
    path.push_back(curr);
    result.push_back(path);
    path.pop_back();
    return;
  }
	
    visited.insert(curr);//mark visited
    path.push_back(curr);
    for(auto neigbour : graph[curr]){
    	if(not visited.count(neigbour)){
    		dfs(neigbour,dest,path);
    	}
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void allpath(int st,int end){
  vector<int> v;
	dfs(st,end,v);
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
  allpath(s,d);
  for(auto path : result){
    for(auto el : path){
      cout << el <<' ';
    }
    cout << endl;
  }
  return 0;
}
