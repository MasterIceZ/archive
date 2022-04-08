### Download
You can download this source file from [DownGit](https://minhaskamal.github.io/DownGit/#/home) or the link which provided [here](https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/MasterIceZ/archive/tree/main/cpp-template).

### Template Usage
Full function of the template is avaliable at [0.cc](https://github.com/MasterIceZ/archive/blob/main/cpp-template/0.cc) and the minimal version is avaliable at [main.cc](https://github.com/MasterIceZ/archive/blob/main/cpp-template/main.cc).  
**To compile :** you might add ``-D_DEBUG`` as additional compiling flag.  
**For example :** ``g++ -std=c++11 -Wall -D_DEBUG hello.cc -o hello``  
After compiling you can run the program via command ``./hello``

### Library Usage
You can use ``dbg(x, y, ...)`` to print out x's value, y's value and others.  
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
