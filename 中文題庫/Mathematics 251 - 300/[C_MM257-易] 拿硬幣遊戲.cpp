#include<iostream>
 
using namespace std;
 
int main()
{
    int n, k;
    while (cin >> n >> k)
    cout << n % (k + 1) << endl;
    return 0;
}