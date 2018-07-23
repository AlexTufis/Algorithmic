#include<iostream>

using namespace std;

int n,a[999],nr=0;

int repetitions(int a[],int n,int value)
{
    int count=0;
    for(int k=1; k<=n; ++k)
    {
        if(a[k] == value)
            count++;
    }
    return count;
}

int main()
{
    cout<<"Size: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int j = 1; j<=n; j++)
    {
        nr=repetitions(a,n,a[j]);
        if(nr>=2)
        {
            cout<<a[j]<<" is repeated for "<<nr<<" times"<<endl;
        }
    }

}
