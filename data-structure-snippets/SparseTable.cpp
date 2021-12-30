struct Sparse_Table{
	vector<vector<int>> table;
	void compute(vector<int> a){
		int n = a.size();
		int lg = __lg(n) + 2;
		table.resize(lg, vector<int>(n + 2, 0));
		for(int i=0; i<n; ++i){
			table[0][i] = a[i];
		}
		for(int state=1; state<=lg; ++state){
			for(int i=0; i+(1 << state) - 1 < n; ++i){
				table[state][i] = max(table[state - 1][i], table[state - 1][i + (1 << (k - 1))]);
			}
		}
	}
	int read(int l, int r){
		int state = __lg(r - l + 1);
		return max(table[state][l], table[state][r - (1 << k) + 1]);
	}
};
