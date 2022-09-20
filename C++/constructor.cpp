#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y=0) // ----> This is a parameterized constructor as it takes 2 parameters  also default as given default values
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : b(j), a(i+b) //Error beacuse a is declared earlier
    Test(int i, int j) : a(i), b(2*j) // 
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};


int main(){
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    Test t(4, 6);
    return 0;
}
