#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n,p;
    cin>>n;
    vector<ll> a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>p;
        a[i] = p;


    }

    sort(a.begin(),a.end());
    ll d = n/2;

    cout<<a[d];

}
