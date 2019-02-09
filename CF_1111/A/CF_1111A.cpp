#include<bits/stdc++.h>
using namespace std;
string s,t;
char vowel[5]={'a','e','i','o','u'};
#define regi register int
bool isvowel(char ch)
{
    for (regi i=1;i<=5;i++)
    {
        if (vowel[i-1]==ch) return true;
    }
    return false;
}
void yes()
{
    cout<<"Yes"<<endl;
    exit(0);
}
void no()
{
    cout<<"No"<<endl;
    exit(0);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>s>>t;
    if (s.size()!=t.size()) no();
    int l=s.size()-1;
    for (regi i=0;i<=l;i++)
    {
        if (isvowel(s[i])!=isvowel(t[i])) no();
    }
    yes();
    return 0;
}