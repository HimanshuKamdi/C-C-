#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
template <class T>
class AddElements {
    T element;
  public:
    AddElements (T arg) {element=arg;}
    T add (T x) {return x+element;}
};

// class template specialization:
template <>
class AddElements <string> {
    string element;
  public:
    AddElements (string arg) {element=arg;}
    string concatenate (string arg)
    {
      string s = element+arg;
      return s;
    }
};
/*Write the class AddElements here*/

int main () {