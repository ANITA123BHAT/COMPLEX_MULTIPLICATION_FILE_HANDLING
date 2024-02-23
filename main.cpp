
/// complex multiply

#include <iostream>
#include <fstream>
#include <sstream>
#include "complex.h"
using namespace std;

int 
main(int argc, char* argv[]){

    if(argc != 2){
        cout << "usage: " << argv[0] << "inputfile" << endl;
        return -1;
    }
    ifstream file(argv[1]);
    if(!file.is_open()){
        cout << "file failed to open";
        return -1;
    }

    float complex_num[SIZE];
    int casenum = 1;

    // while(file >> complex_num[0] >> complex_num[1] >> complex_num[2] >> complex_num[3]){
        
    //     complex num1(complex_num[0], complex_num[1]);
    //     complex num2(complex_num[2], complex_num[3]);

    //     complex result = multiply_complex(num1, num2);
    //     cout << "result for case : " << casenum << ": ";

    //     result.display();
    //     casenum++;
    // }

    string line;
    while(getline(file, line)){
        istringstream iss(line);
        int count = 0;

        while(iss >> complex_num[count]){
            count++;
        }

        if(count != SIZE){
            cout << "invalid data " << casenum << endl;
            cout << "\n";
        }

        else{

            complex num1(complex_num[0], complex_num[1]);
            complex num2(complex_num[2], complex_num[3]);

            complex result = multiply_complex(num1, num2);

            cout << "input : " << casenum << ": ";
            cout << "(" << complex_num[0] << "+i*" << complex_num[1] << ")" << "(" << complex_num[2] << "+i*" << complex_num[3] << ") = " << endl;

            result.display();
        }

        casenum++;
    }

    file.close();

    return 0;

}