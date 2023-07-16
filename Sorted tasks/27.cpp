#include <iostream> 
#include <vector>
using namespace std;
int main()
{
    vector<int> t = { 8,4, 2, 1};
    int *pl = &t[0] + 2,*p2 = pl - 1;
    pl++;
    cout << *pl-t[pl-p2] << endl;
}