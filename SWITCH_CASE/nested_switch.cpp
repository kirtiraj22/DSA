/*nested switch statement means a switch statement inside another switch statement*/

//EG:
#include <iostream>

using namespace std;

int main(){
    char character = 'a';
    int num = 1;
  
    switch(character){
        case 'a':
            switch(num){
                case 1:
                   cout << "value of num = " << num << endl;
                   break;

                case 2:
                    cout << "this is second case" << endl;
                    break;
            }
            break;
        
        case 'b':
            cout << "character is b";
            break;
        
        default:
            cout << "this is default";
            break;
    }
    return 0;
}


//output will be:
//value of num = 1
