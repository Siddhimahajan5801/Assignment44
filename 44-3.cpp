#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set <int> s;

    for (int i=1; i<6; i++)
    {
        s.insert(i);
    }

    cout<<"Set = ";
    for(auto x : s)
        cout<<x<<"  ";

    s.erase(2);

    cout<<"\n\nNew Set after erase(2) = ";
    for(auto x : s)
        cout<<x<<"  ";

    cout<<endl<<endl;
    return 0;
}
