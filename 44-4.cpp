#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s;

    if (s.size()== 0)
    {
        cout<<"Set is empty! \n";

        for(int i=0; i<5; i++)
            s.insert(i+1);
    }

    else
        cout<<"Set is not empty!\n";

    cout<<"\nSet after inserting 5 elements = ";
    for(auto x: s)
        cout<<x<<"  ";

    cout<<endl<<endl;

    return 0;
}
