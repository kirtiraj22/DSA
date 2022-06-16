#include <iostream>
#include <utility>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	vector <pair<int,string>> v; 	//making a vector of a pairs(of int and string)
	
	//{int,string}  means {score,names}
	
	for(int i = 0 ; i < 5; i++){
		int score;
		string name;
		cin >> score >> name;
		v.push_back(make_pair(score,name));
	}

	
	sort(v.begin(),v.end());
	
	for(int i = 0 ; i < 5 ;i++){ 
		cout << v[i].second << endl;
	}
}
