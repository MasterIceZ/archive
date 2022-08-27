template<typename T>
class fenwick_tree{
protected:
	unsigned int offset = 1024;
private:
	unsigned int sz;
	T *tree;
public:
	fenwick_tree(unsigned int _sz){
		sz = _sz + offset;
		tree = (T*) calloc(sz + offset, sizeof(T));
		assert(tree);
	}
	inline T read(unsigned int idx){
		T res = 0;
		for(; idx; idx-=idx&-idx){
			res = (res + tree[idx]);
		}
		return res;
	}
	inline void update(unsigned int idx, T value){
		for(; idx<=sz; idx+=idx&-idx){
			tree[idx] = (tree[idx] + value);
		}
	}
	inline void clear(){
		for(int idx=0; idx<sz; ++idx){
			tree[idx] = 0;
		}
	}
	T operator [] (const unsigned int idx){
		return read(idx);
	}
};
