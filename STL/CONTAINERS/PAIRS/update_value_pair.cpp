#include <iostream>
#include <utility>

using namespace std;

int main(){
	
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	pair <int,string> p = {10,"Kirtiraj"};
	p.first = 19;
	p.second = "Hello world";
	
	cout << p.first << " " << p.second << endl;
	return 0;
}
