#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set <int> s;

    s.insert(6);
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(2);

    cout<<"Set = ";
    for(auto x : s)
        cout<<x<<"  ";

    set <int> :: iterator it;

    it = s.lower_bound(6);
    cout<<"\n\nLower bound of 6 is : "<<*it;

    it = s.lower_bound(2);
    cout<<"\n\nLower bound of 2 is : "<<*it;

    it = s.lower_bound(5);
    cout<<"\n\nLower bound of 5 is : "<<*it;

    cout<<endl;
    return 0;
}
