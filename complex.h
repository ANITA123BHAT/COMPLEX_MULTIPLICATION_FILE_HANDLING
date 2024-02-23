
/// complex_multiply

#ifndef COMPLEX_H
#define COMPLEX_h
#define SIZE 4

#define multiply_complex(num1, num2)\
    complex((num1.real * num2.real) - (num1.img * num2.img),\ 
            (num1.img * num2.real) + (num1.real * num2.img))

class complex{

    public:
        float real, img;

        complex(float real, float img);

        void display() const;
    
};
#endif