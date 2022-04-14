// Written in C++, by Hydrolyzed

#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

inline void create_input(){
	ofstream file("buffer.txt");
	string s;
	while(1){
		getline(cin, s);
		if(s.size() == 0){
			file.close();
			break;
		}
		file << s << "\n";
	}
	file.close();
}

int main(int argc, char* argv[]){
	string tmp;
	getline(cin, tmp);
	int n = stoi(tmp);
	string fileName = to_string(argv[1]);
	string line = ".\\" + fileName + ".exe < buffer.txt";
	for(int i=1; i<=n; ++i){
		create_input();
		auto start_time = chrono::steady_clock::now();
		cout << "Testcase #" << i << ":\n";
		system(line.c_str());
		cout << "\n";
		auto end_time = chrono::steady_clock::now();
		double all_time = double(chrono::duration_cast <chrono::nanoseconds> (end_time - start_time).count());
		cout << "Run Time: " << fixed << setprecision(2) << all_time / 1e9 << " second(s)\n\n";
	}
	return 0;
}
