// Header Guard
#ifndef __DS_SACK_DSU__
#define __DS_SACK_DSU__

// important includes
#include <cstdbool>

template<size_t S>
class disjoint_set{
private:
    // offset with 2^10 = 1024 
    int parent[S + (1 << 10)], sz[S + (1 << 10)];
public:
    // This Approach can be used to implement "SACK"
    int find_root(int u){
        while(u != parent[u]){
            u = parent[u];
        }
        return u;
    }
    // Use this instead of ``parent[u] = v;``
    bool merge(int u, int v){
        int ru = find_root(u), rv = find_root(v);
        // check that if (u, v) is already same set
        // cannot merge!
        if(ru == rv){
            return false;
        }
        // can merge!
        if(sz[ru] > sz[rv]){
            parent[rv] = ru;
            sz[ru] = sz[ru] + sz[rv];
        }
        else{
            parent[ru] = rv;
            sz[rv] = sz[ru] + sz[rv];
        }
        return true;
    }
    disjoint_set(){
        for(int i=1; i<=S; ++i){
            sz[i] = 1;
            parent[i] = i;
        }
    }
};

#endif
