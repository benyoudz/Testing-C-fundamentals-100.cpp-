#include <iostream>
using namespace std;
int fun1 (int p)
{
++p;
return p++;
}
int fun2 (int &p)
{
++p;
return p++;
}
int main()
{
int a = 1;
int b = fun1 (a);
int c = fun2 (b);
cout << a + b + c << endl;
}