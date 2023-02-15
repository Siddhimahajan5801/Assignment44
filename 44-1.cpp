#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set <int> s;

    for (int i=1; i<6; i++)
    {
        s.insert(i);
    }

    cout<<"Total number of elements in the set = "<<s.size()<<endl;

    return 0;
}
