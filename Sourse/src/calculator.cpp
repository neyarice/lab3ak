#include <iostream>
#include "funcs.h"
//#include "inp.h"
using namespace std;

int main() {
	
    int a, b, param;
    std::cout << "Input 2 numbers\n";
    std::cin >> a >> b;
    std::cout << "Input the parameter" << std::endl <<
        "1. Sum" << std::endl <<
        "2. Subtract" << std::endl <<
        "3. Multiply" << std::endl <<
        "4. Devide" << std::endl;
    std::cin >> param;

    switch (param){
        case 1:
            cout << Sum(a, b) << endl;
            break;
        case 2:
            cout << Subtract(a, b) << endl;
            break;
        case 3:
            cout << Multiply(a, b) << endl;
            break;
        case 4:
            cout << Divide(a, b) << endl;
            break;
        default:
            cout << "not valid value of parameter!";
            break;
    }
    return 0;
}
