#include <iostream>
#include <list>
using namespace std;

class graph{
    int v;
    list<int> *adj;
    public:
    graph(int v);
    void newEdge(int v,int w);
    void bfs(int s);
};
graph::graph(int v){
    this->v=v;
    adj =new list<int>[v];
}
void graph::newEdge(int v,int w){
    adj[v].push_back(w);
}
void graph::bfs(int s){
    bool *vis=new bool[v];
    for(int i=0;i<v;i++){
        vis[i]=false;
    }
    list<int> queue;
    vis[s]=true;
    queue.push_back(s);
    list<int>::iterator i;
    while(!queue.empty()){
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();
        for(i=adj[s].begin();i!=adj[s].end();i++){
            if(!vis[*i]){
                vis[*i]=true;
                queue.push_back(*i);
            }
        }
    }
}
int main(){
    graph g(4);
    g.newEdge(0, 1); 
    g.newEdge(0, 2); 
    g.newEdge(1, 2); 
    g.newEdge(2, 0); 
    g.newEdge(2, 3); 
    g.newEdge(3, 3); 
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.bfs(2); 
  
    return 0; 
}