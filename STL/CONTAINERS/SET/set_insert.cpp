#include <iostream>
#include <set>

using namespace std;

int main(){
	set <int> s;
	
	s.insert(10);
	s.insert(11);
	s.insert(12);
	s.insert(13);
	
	cout << s.count(10) << endl;	//prints 1 as 10 is present
	cout << s.count(9);		//prints 0 as 9 is not present
  return 0;
}
