#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;


void add_edge(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node,unordered_set<int> &visited){
    
    visited.insert(node);//mark visited
    for(auto neigbour : graph[node]){
        if(not visited.count(neigbour)){
            dfs(neigbour,visited);
        }
        
    }
}
int co_comp(){
    unordered_set<int> visited;
    int result = 0;
    for(int i = 0; i < v; i++){
        if(visited.count(i) == 0){
            result++;
            dfs(i,visited);
        }
    }
    return result;
}

int32_t main() {
  
  cin >> v;
  graph.resize(v,list<int> ());
  
  int e; cin >> e;
  while(e--){
    int s,d;
    cin >> s >> d;
    add_edge(s,d);
  }
  cout << co_comp();
  return 0;
}
