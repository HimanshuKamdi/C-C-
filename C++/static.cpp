// If we do not use static keyword, the variable count, is reinitialized everytime when counter() function is called, and gets destroyed each time when counter() functions ends. But, if we make it static, once initialized count will have a scope till the end of main() function and it will carry its value through function calls too.

#include <iostream>
using namespace std;

void counter()
{
    static int count=0;
    cout << count++;
};

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
}

// Without Static
// void counter()
// {
//     int count=0;
//     cout << count++;
// }

// int main(0
// {
//     for(int i=0;i<5;i++)
//     {
//         counter();
//     }
// }

