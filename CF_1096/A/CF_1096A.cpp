#include<bits/stdc++.h>
using namespace std;
#define regi register int
int t;
#define ll long long
ll l,r;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for (regi i=1;i<=t;i++)
    {
        cin>>l>>r;
        cout<<l<<" "<<r-(r%l)<<endl;
    }
    return 0;
}