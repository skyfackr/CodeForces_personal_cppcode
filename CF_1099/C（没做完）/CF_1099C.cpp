#include<bits/stdc++.h>
using namespace std;
#define error "Impossible"
#define ll long long
#define regi register int
int k;
char ch;
vector<char> s;
queue<ll> candy;
queue<char> candyin;
int iceflag=-1;
char inice; 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin>>ch)
    {
        if (ch=='*')
        {
            if (iceflag==-1) iceflag=s.size()-1,inice=s[s.size()-1];
            s.erase(s.end());
            continue;
        }
        if (ch=='?')
        {
            ll now=s.size()-1;
            candy.push(now);
            candyin.push(s[now]);
            s.erase(s.end());
            continue;
        }
        s.push_back(ch);
    }
    cin>>k;
    if (k==s.size())
    {
        for (regi i=1;i<=s.size();i++)
        {
            cout<<s[i-1];
        }
        cout<<endl;
        return 0;
    }
    if ((k<s.size())||(iceflag==-1&&(k>s.size()+candy.size())))
    {
        cout<<error<<endl;
        return 0;
    }
    if (k<=s.size()+candy.size())
    {
        ll nowsize=s.size();
        for (regi i=0;i<=s.size()-1;i++)
        {
            cout<<s[i];
            if (nowsize<k&&candy.front()+1==i)
            {
                candy.pop();
                cout<<candyin.front();
                candyin.pop();
                nowsize++;
            }
        }
        cout<<endl;
        return 0;
    }
    for (regi i=0;i<=iceflag-1;i++)
    {
        cout<<s[i];
    }
    ll nowsize=s.size();
    while (nowsize<k)
    {
        cout<<inice;
        nowsize++;
    }
    for (regi i=iceflag;i<=s.size()-1;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}