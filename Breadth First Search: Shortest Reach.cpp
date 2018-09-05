#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 1000
int V, E;
int path [MAX];
int main(){
    int query;
    cin>>query;
    while (query--) {
        if(query <0)
        {
            break;
        }
    cin>>V>>E;
    int u,v;
    vector<int> graph[MAX];
    bool visited[MAX] = {false};
    for(int i = 0; i <E;i++)
        {
            cin>> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int s;
        cin>>s;
        for(int i = 0; i <V;i++)
        {
            visited[i] = false;
            path[i] = -1;
        }
        queue<int> q;
        visited[s] = true;
        q.push(s);
        vector<int> distance;
        distance = vector<int>(MAX,0);
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for(int i = 0; i <graph[u].size();i++)
            {
                int v = graph[u][i];
                if(!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                    distance[v] += distance[u] + 6;
                }
            }
        }
        for(int i = 1 ; i<= V;i++)
        {
            if(i!= s)
            {
                if(distance[i] == 0)
                {
                    cout<<-1<<" ";
                }
                else
                {
                    cout<<distance[i]<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
