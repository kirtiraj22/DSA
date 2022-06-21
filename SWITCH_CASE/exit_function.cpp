/*exit() is a predefined function in c++ which is used to terminate the program*
file buffers are flushed,streams are closed and temporary files are deleted and hence memory is freed*/

//using exit function in switch case with infinite loop

//eg:

#include <iostream>

using namespace std;

int main(){
    int a = 18; 
    int num = 15;
    while(num){                 //this is an infinite loop as condition will be true forever
         switch(a){ 
            case 1:
                cout << "first"<< endl;
                break;
            case 2:
                cout << "second" << endl;
                break;
            default:
                cout << "This is example of exit() function in infinite loop" << endl;
            }
            exit(0);            //here exit function is called 
   }
   return 0;
}


/*there are two types of exit:
    1) exit(0) : it means exit successfully which means program run successfully and then it is terminated
    
    2) exit(1) : it means exit failure which indicates the abnormal termination of the program.i.e some error has occurred*/
