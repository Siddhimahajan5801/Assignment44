#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Search(set <int> s, int K)
{
    set<int> :: iterator i;
    for(auto i = s.begin(); i!= s.end(); i++)
    {
        if (*i == K)
        {
           return 1;
        }
    }
    return 0;
}

int main ()
{
    set <int> s;

    for(int i=1; i<=10; i++)
    {
        s.insert(i);
    }

    int k;
    cout<<"Enter the element you want to search : ";
    cin>>k;

    int x = Search(s,k);

    if (x == 1)
        cout<<"\nElement found! \n";
    else
        cout<<"\nElement not found! \n";

    return 0;
}
