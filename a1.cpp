// input: n
// output: n is even n/2 || n is odd 3n+1
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    while(n!=1)
    {
        if(n%2==0)
        {
            cout << n/2 << " ";
            n = n/2;
        }
        else
        {
            cout << 3*n+1 << " ";
            n = 3*n+1;
        }
    }
    return 0;
}