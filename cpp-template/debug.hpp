/*
 * Written by [Hydrolyzed](https://github.com/MasterIceZ)
 * */


// Header Guard
#ifndef ___SELF_DEBUG___
#define ___SELF_DEBUG___

// Include
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

namespace UTILS{
	template<class T> vector<T> to_vector(T a[], size_t l, size_t r){
		vector<T> vt;
		 for(size_t i=l; i<=r; ++i){
			 vt.push_back(a[i]);
		 }
		 return vt;
	}
}

string to_string(char s){
	return string(1, s);
}

string to_string(string s){
	return s;
}

string to_string(const char* s){
	return string(s);
}

template<class T> string to_string(T a[], size_t l, size_t r){
	vector<T> vt = UTILS::to_vector(a, l, r);
	string res;
	bool ok = false;
	for(auto x: vt){
		ok = true;
		res += to_string(x);
	}
	return res;
}

template<class T> string to_string(T v){
	bool f = true;
	string res;
	for(auto x: v){
		if(!f){
			res += " ";
		}
		f = false;
		res += to_string(x);
	}
	return res;
}

void DBG(){
	cerr << "]\n";
}

template<class H, class... T> void DBG(H h, T... t){
	cerr << to_string(h);
	if(sizeof...(t)){
		cerr << ", ";
	}
	DBG(t...);
}

#define dbg(...) cerr << "Line(" << __LINE__ << ") -> [" #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)

#endif
