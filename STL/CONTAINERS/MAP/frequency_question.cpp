#include <bits/stdc++.h>

using namespace std;

//check names if it is unique print OK
//else append numbers from 1 to name i 

/*we will use maps for it
as map stores unique keys and values*/
int main(){
	
	map<string,int> frequency;
	int t;
	cin >> t;
	
	for(int i = 0;i < t; i++){
		string name;
		cin >> name;
		
		if(frequency[name] == 0)
			cout << "OK" << endl;
		
		else 
			cout << name << frequency[name] << endl;
		
		frequency[name]++;
	}
}
/*we make a map named as frequency of string as key and int as value 
we take names in forms of string and store them as keys in maps
if(frequency[name] == 0) this means if that names does not exist then we print ok
else we print name followed by frequency

for example:
first input  name = ab
so frequency[ab] = 0 and then frequency[ab]++ so now its frequency of ab = 1
second input name = ab 
so frequency[ab] = 1 so now the output will be name(ab) followed by 1 i.e ab1*/
