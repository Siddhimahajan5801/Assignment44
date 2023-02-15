#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int find_missing(int a[], int N)
{
    for(int i=0; i<N; i++)
    {
        if(a[i]== a[i+1])
            return a[i];
    }
}

int main ()
{
    int arr[] = {1,2,3,3,5,6};

    int Size = sizeof(arr)/sizeof(arr[0]);

    int x = find_missing(arr,Size);

    cout<<"Repeated number = "<<x<<" and missing number is "<<x+1<<endl;

    return 0;
}
