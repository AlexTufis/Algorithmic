#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m,a[1000010];
map <int,int> mp;
int main()
{
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
    m = 16;
    int i = -5;
    while (m--)
    {
        mp[i++]++;
    }
    for (int i=0; i<n; i++)
        mp[a[i]]--;
    for (map<int,int> :: iterator j = mp.begin(); j!=mp.end(); j++)
    {
        if (j->second > 0)
            cout<<j->first<<" ";
    }

}
