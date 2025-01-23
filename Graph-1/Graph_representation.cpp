#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v; //No of vertices

void add_edge(int src, int dest, bool bi_dir = true){
	graph[src].push_back(dest);
	if(bi_dir){
		graph[dest].push_back(src);
	}
}

void display(){
	for(int i = 0; i < v; i++){
		cout << i <<"-->";
		for(auto el : graph[i]){
			cout << el <<' ';
		}
		cout << endl;
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> v;
  graph.resize(v,list<int> ());
  int e; cin >> e;
  while(e--){
  	int s,d;
  	cin >> s >> d;
  	add_edge(s,d,false);
  }
  display();
  return 0;
}
