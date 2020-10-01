#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a[5] = {1, 3, 7 , 8 , 9};
    cout << a[upper_bound(a, a+5, 7)-a] << endl;
    cout << a[lower_bound(a, a+5, 1)-a] << endl;
    return 0;
}
