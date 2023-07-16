#include<iostream>
using namespace std;
class A {
public:
static int a;
A() { a = 0; a++; }
A(A &aa) {a++; }
};
int main(void) {
A a, b (a), (b);
cout<< A.a << endl;
return 0;
}