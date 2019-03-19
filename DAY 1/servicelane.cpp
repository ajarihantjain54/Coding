#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int n,t,p;
    cin>>n>>t;
    vector<ll> a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>p;
        a[i] = p;
    }
    while(t>0)
    {
        ll enter,exit;
        cin>>enter>>exit;
        ll gh = a[enter];
        for (int jj = enter ;jj<=exit;jj++)
        {
            if(a[jj]<gh)
                gh = a[jj];
        }
        cout<<gh<<"\n";
        t--;
    }


}
