#include <iostream>

using namespace std;

long minim;
long maxim;
int i;
long n;
long v[9999];
int main()
{
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        cin>>v[i];
    }

    minim = v[1];
    for(i=2; i <= n; i++)
    {
        if(minim > v[i])
            minim = v[i];
    }

    maxim = v[1];
    for(i=2; i<=n; i++)
    {
        if(maxim < v[i])
            maxim = v[i];
    }

    cout<<"Minimul este: "<<minim;
    cout<<endl;
    cout<<"Maximul este: "<<maxim;
    return 0;
}




