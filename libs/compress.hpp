#ifndef __CP_COMPRESS__
#define __CP_COMPRESS__

#include <vector>
#include <set>
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

class compressor_precompute{
private:
	std::vector<int> c;
public:
	size_t get_value(int v){
		return upper_bound(c.begin(), c.end(), v) - c.begin();
	}
	compressor_precompute(std::vector<int> x){
		c = x;
		sort(c.begin(), c.end());
		c.resize(unique(c.begin(), c.end()) - c.begin());
	}
};

class compressor_set{
private:
	tree<int, null_type, std::less<int>, rb_tree_tag, tree_order_statistics_node_update> c; 
public:
	size_t get_value(int v){
		return 1 + c.order_of_key(v);
	}
	void add_value(int v){
		c.insert(v);
	}
};

#endif
