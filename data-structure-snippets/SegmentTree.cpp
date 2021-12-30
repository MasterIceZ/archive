struct Segment_Tree{
	vector<int> tree;
	size_t n;
	Segment_Tree(size_t N){
		n = N;
		tree.resize(4 * n, 0);
	}
	void build(int l, int r, int now, int *a){
		if(l > r){
			return ;
		}
		if(l == r){
			tree[now] = a[l];
			return ;
		}
		int mid = (l + r) >> 1;
		build(l, mid, now * 2, a);
		build(mid + 1, r, now * 2 + 1, a);
		tree[now] = max(tree[now * 2], tree[now * 2 + 1]);
	}
	void build(int *a){
		build(1, n, 1, a);
	}
	void update(int l, int r, int idx, int v, int now){
		if(l > r || idx < l || idx > r){
			return ;
		}
		if(l == r){
			tree[now] = v;
			return ;
		}
		int mid = (l + r) >> 1;
		update(l, mid, idx, v, now * 2);
		update(mid + 1, r, idx, v, now * 2 + 1);
		tree[now] = max(tree[now * 2], tree[now * 2 + 1]);
	}
	void update(int idx, int v){
		update(1, n, idx, v, 1);
	}
	int read(int l, int r, int wl, int wr, int now){
		if(l > r || wl < r || l > wr){
			return ;
		}
		if(wl <= l && r <= wr){
			return tree[now];
		}
		int mid = (l + r) >> 1;
		return max(read(l, mid, wl, wr, now * 2), read(mid + 1, r, wl, wr, now * 2 + 1));
	}
	int read(int wl, int wr){
		return read(1, n, wl, wr, 1);
	}
};
