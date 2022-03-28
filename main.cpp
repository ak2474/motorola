#include <iostream>

using namespace std;
int fance,a,b;
int main()
{
    cout << "how many meters of fence is available?:";
    cin >> fance;
a = fance/4;
b = fance - (2*a);


cout<<"lengh a of fance:"<<a;

cout<< endl <<"Lengh b of fance:"<<b;
cout << endl <<"Optimal area of Mc Donalds farm:"<<a*b;
    return 0;
}
