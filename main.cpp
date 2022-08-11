#include <iostream>

using namespace std;

int f(int n)
{
    if(n==0) return 3;
    else return f(n-1)+2;
}

int main()
{
    cout << "This program returns f(3) for f(n-1)+2 formula: " << f(3) << endl;
    return 0;
}
