#include<bits/stdc++.h>
using namespace std;

class DSU {

private:
    int nodes;
    vector<int> parent, rank;
    int components;

public:
    DSU (int n) {
        this -> nodes = n;
        parent = vector<int> (n, 0);
        rank = vector<int> (n, 0);

        for(int i = 0; i < n; ++i) parent[i] = i, rank[i] = 0;
    }

    int findParent(int node) {
        if(parent[node] == node) return node;
        return parent[node] = findParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        u = findParent(u);
        v = findParent(v);

        if(rank[u] <= rank[v]) {
            parent[u] = v;
            rank[v]++;
        }
        else {
            parent[v] = u;
            rank[u]++;
        }
    }

    void setComponents() {
        this -> components = getComponents();
    }

    int getComponents() {
        int component = 0;
        for(int i = 0; i < nodes; ++i) {
            if(parent[i] == i) component++;
        }
        return component;
    }
};

int main() {
    const int n = 3;
    vector<vector<int> > grid = {
        {1,0,1},
        {0,1,0}, 
        {1,0,1}
    };

    DSU dsu(n);
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(!grid[i][j] || i == j) continue;
            
            dsu.unionByRank(i, j);
        }
    }

    cout << dsu.getComponents() << "\n";

    return 0;
}