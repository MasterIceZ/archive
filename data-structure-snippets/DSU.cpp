struct DSU{
	vector<int> parent;
	DSU(size_t n){
		parent.resize(2 + n);
		for(int i=1; i<=n; ++i){
			parent[i] = i;
		}
	}
	int find_root(int u){
		return u == parent[u] ? u: parent[u] = find_root(parent[u]);
	}
};
