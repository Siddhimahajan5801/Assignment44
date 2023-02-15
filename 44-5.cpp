#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set <int> s;

    s.insert(6);
    s.insert(5);
    s.insert(2);
    s.insert(6);
    s.insert(2);

    cout<<"Set = ";
    for(auto x : s)
        cout<<x<<"  ";   //By default set have unique values only!

    cout<<endl<<endl;
    return 0;
}
