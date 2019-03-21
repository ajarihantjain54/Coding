//convert all integer to ll
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int p;
    int q;
    cin>>p>>q;
    while(p<=q)
    {   stringstream ss;
        ss<<p;
        int oount = 0;
        string p1 = ss.str();
        cout<<p1<<"\n";
        int l = p1.length();
        ll a = p*p;
        stringstream sp;
        sp <<a;
        string str = sp.str();
        //cout<<str<<"\n";
        string right = str.substr(str.length()-l);
        string left = str.substr(0,str.length()-l);
        stringstream geek(right);
        int x = 0;
        geek >> x;
        //cout<<x<<"\n";
        stringstream geek2(left);
        int y = 0;
        geek2>>y;
        //cout<<y<<"\n";
        int d = x+y;
        if(d==p)
        {

            cout<<p;
        }

        p++;
    }
}
