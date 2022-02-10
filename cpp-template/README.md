### Reference
- [tmwilliamlin168](https://github.com/tmwilliamlin168/CompetitiveProgramming/blob/master/Templates/Main.cpp)
- [RNR](https://codeforces.com/blog/entry/67830)
- [bas](https://codeforces.com/profile/bas.z)
- [Errichto](https://codeforces.com/profile/Errichto)
### Special Thanks
- [JO](https://github.com/Vij-Jo) 
	- [x] inline
- [Jomnoi](https://github.com/JomnoiZ)
	- [x] inline 
- [Aphrodicez](https://github.com/Aphrodicez)
	- [x] Advice
### Usage
you can use ``dbg(x, y, ...)`` to print out x's value, y's value and others.  
**example :** 
```cpp
#include<bits/stdc++.h>
using namespace std;

#include "debug.hpp"

int a = 20, b = 2;
string c = "Hello World";

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	dbg(a, b, c);
	return 0;
}
```
Function ``dbg()`` can be used with arrays but it must be invoke together with ``to_string()``.  

``to_string(T arr[], size_t l, size_t r)`` can be used to convert array from ``l`` to ``r`` to a string which separate with a space(" ").  
**example :**
```cpp
int a[10] = {1, 2, 5, 2, 3, 3, 1};
string s = to_string(a, 1, 4);
```
