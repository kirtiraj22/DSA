#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	//given N numbers in input 
	//print 2 lines 
	//first line alll even integers in sorted order
	//second line all odd integers in sorted order
	
	vector <int> odd;
	vector <int> even;
	int n,a;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		if(a%2 == 0)
			even.push_back(a);
		else 
			odd.push_back(a);
	}
	
	for(int i = 0 ; i<even.size() ; i++){
		for(int j = i+1 ; j <even.size() ;j++){
			if (even[i] > even[j]){
				int temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
			
		}
	}
	
	for(int i = 0 ; i<even.size() ; i++){
		for(int j = i+1 ; j <even.size() ;j++){
			if (odd[i] > odd[j]){
				int temporary = odd[i];
				odd[i] = odd[j];
				odd[j] = temporary;
			}
			
		}
	}
	
	for(int i = 0 ; i < even.size() ; i++){
		cout << even[i] << " ";
	}
	cout << "\n";
	for(int i = 0 ; i < even.size() ; i++){
		cout << odd[i] << " ";
	}
	
	return 0;
}
