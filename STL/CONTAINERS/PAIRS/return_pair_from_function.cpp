#include <iostream>
#include <utility>
#include <string.h>
using namespace std;


pair<int,string> answer(){
	return make_pair(3 , "hello");
}


int main(){
	
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	pair<int,string> p = answer();
	int i = p.first;
	string s = p.second;
	cout << "pair returned from function is: " << i  << " " << s << endl;
}
