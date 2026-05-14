#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
        vector<int> parent,rank,size;

        DisjointSet(int n){
            parent.resize(n+1);
            rank.resize(n+1);
            size.resize(n+1);

            for(int i =0; i <=n;i++){
                parent[i] = i;
                rank[i] = 0;
                size[i] = 1;
            }
        }

        int findParent(int node){
            if(node == parent[node]){
                return node;
            }

            return parent[node] = findParent(parent[node]);
        }

        void unionByRank(int u , int v){
            int ulp_u = findParent(u);
            int ulp_v = findParent(v);

            if(ulp_u == ulp_v) return;

            if(rank[ulp_v] < rank[ulp_u]){
                parent[ulp_v] = ulp_u;
            }
            else if(rank[ulp_u] < rank[ulp_v]){
                parent[ulp_u] = ulp_v;
            }
            else{
                parent[ulp_v] = ulp_u;
                rank[ulp_u]++;
            }

        }

        void unionBySize(int u,int v){
            int ulp_u = findParent(u);
            int ulp_v = findParent(v);

            if(ulp_v == ulp_u) return;
            if(size[ulp_v] < size[ulp_u]){
                parent[ulp_v] = ulp_u;
                size[ulp_u]+=size[ulp_v];
            }
            else{
                parent[ulp_u] = ulp_v;
                size[ulp_v]+=size[ulp_u];
            }
        }
};
