//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};
Complex operator+(const Complex & X, const Complex & Y) {
    Complex Z {X.a + Y.a, X.b + Y.b};
    return Z;
}
ostream & operator<< (ostream & out, const Complex & X) {
    if (X.b < 0) {
        out << X.a << "-i" << -X.b;
    } else if(X.b > 0) {
        out << X.a << "+i" << X.b;
    } else {
        out << X.a;
    }
//Shorter code
// ostream& operator<<(ostream& os, const Complex& c) {
//     return os << c.a << (c.b > 0 ? '+' : '-') << 'i' << c.b;
// }

// Complex operator+(const Complex& a, const Complex& b) { 
//     return { a.a + b.a, a.b + b.b };
// }
    return out;
}
//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

int main()