#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello World";

    set <char> s;

    for(auto x : str)
    {
        s.insert(x);

    }

    cout<<"Set =";
    for (auto i : s)
        cout<<i<<"  ";

    cout<<endl;

    return 0;

}
