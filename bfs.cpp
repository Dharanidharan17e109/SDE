#include<iostream>
#include<list>

using namespace std;

class Graph{
	int vertices;
	list<int> *adj_list;
	public:
	Graph(int vertices);
	void add_edges(int u,int v);
	void BFS(int s);
};

Graph::Graph(int vertices){
	this->vertices=vertices;
	adj_list=new list <int>[vertices];
}

void Graph::add_edges(int u,int v){
	adj_list[u].push_back(v);
}

void Graph::BFS(int s){
	bool *visited=new bool[vertices];
	for(int i=0;i<vertices;i++){
		visited[i]=false;
	}
	
	list<int> queue;
	visited[s]=true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty()){
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();
		for(i=adj_list[s].begin();i!=adj_list[s].end();i++){
			if(!visited[*i]){
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter no.of vertices:";
	cin>>n;
	Graph g(n);
	int nedges;
	cout<<"Enter the no.of edges:";
	cin>>nedges;
	for(int i=0;i<nedges;i++){
		int d,s;
		cout<<"Enter the edges:";
		cin>>d>>s;
		g.add_edges(d,s);
	}
	cout<<"Enter the source vertex:";
	int source;
	cin>>source;
	g.BFS(source);
	
	
	return 0;
}
