#include <iostream>

using namespace std;

int main(){
    int total;
    cout << "Enter total amount: " <<endl;
    cin >> total;
    int hundred,fifty,twenty,one;
    switch(1){
        case 1:
            hundred = total / 100;
            total = total % 100;
            cout << "number of 100 rupees notes : " << hundred << endl;
        case 2:
            fifty = total / 50;
            total = total % 50;
            cout << "number of 50 rupees notes : " << fifty << endl;
        case 3:
            twenty = total / 20;
            total = total % 20;
            cout << "number of 20 rupees  notes : " << twenty << endl;
        case 4:
            one = total / 1;
            total = total % 1;
            cout << "number of 1 rupee notes : " << one << endl;
            break;
    }
  return 0;
}

/*output :
Enter total amount: 
1330
number of 100 rupees notes : 13
number of 50 rupees notes : 0
number of 20 rupees  notes : 1
number of 1 rupee notes : 10
*/


//total money = 1330
//find total number of 100,50,20 and 1 rupee notes required
//1330 = 100 * 13 + 20 * 1 + 1 * 10
//1330/100 = 13
//1330 % 100 = 30
//30/20 = 1
//30%20 = 10
//10 / 1 = 10
