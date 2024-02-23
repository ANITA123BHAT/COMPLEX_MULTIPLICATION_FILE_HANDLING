
/// complex_multiply

#include "complex.h"
#include <iostream>
using namespace std;

complex::complex(float real, float img) : real(real), img(img) {}

void complex::display() const {
    cout << "                    result = ";
    if(img >= 0){
        cout << real << " + i*" << img << endl;
    }
    else{
        cout << real << " - i*" << -img << endl;
    }
} 