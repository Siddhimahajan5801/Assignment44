#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set <int> s;

    s.insert(5);
    s.insert(9);
    s.insert(1);

    cout<<"Set = ";
    for(auto x : s)
        cout<<x<<"  ";

    cout<<endl;

    return 0;
}
