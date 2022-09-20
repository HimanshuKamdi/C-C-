// “this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function.

#include<iostream>
using namespace std;

class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    // The main thing to note here is that the function “setData” is returning an object on which we have used the “getData” function. so we don’t need to call the function “getData” explicitly.
    return 0;
}
