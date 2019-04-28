#include <iostream>
#include <list>
using namespace std;

class graph{
    int v;
    list<int> *adj;
    void dfsu(int v,bool vis[]);
    public:
    graph(int v);
    void newEdge(int v,int w);
    void dfs();
};
graph::graph(int v){
    this->v=v;
    adj =new list<int>[v];
}
void graph::newEdge(int v,int w){
    adj[v].push_back(w);
}
void graph::dfsu(int v,bool vis[]){
    vis[v]=true;
    cout<<v<<" ";
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();++i){
        if(!vis[*i]){
            dfsu(*i,vis);
        }
    }
}
void graph::dfs(){
    bool *vis=new bool[v];
    for(int i=0;i<v;i++){
        vis[i]=false;
    }
    for(int i=0;i<v;i++){
    if(vis[i]==false)
    dfsu(i,vis);
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
    g.dfs(); 
  
    return 0; 
}