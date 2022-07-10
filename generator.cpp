#include <iostream>
using namespace std;
int main(int argc, char** argv){
    char* opt = argv[1];
    if(opt == "-inf"){
        while(true){
            int i = 1;
            int i2 = 0;
            cout << i << endl;
            i += i;
        }
    }
}