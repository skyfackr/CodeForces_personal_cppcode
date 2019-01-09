#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define regi register int
#define no "NO"
#define yes "YES"
int n,k;
int cf[5001],color[5001],py[5001];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for (regi i=1;i<=k;i++)
    {
        int a;
        cin>>a;
        color[i]=i;
        cf[a]++;
        py[a]=i;
    }
    for (regi i=k+1;i<=n;i++)
    {
        int a;
        cin>>a;
        cf[a]++;
        color[i]=2*cf[a]-py[a]-1;
    }
    sort(cf+1,cf+5002,cmp);
    if (cf[1]>k) 
    {
        cout<<no<<endl;
        return 0;
    }
    cout<<yes<<endl;
    for (regi i=1;i<=n;i++)
    {
        cout<<color[i]<<" ";
    }
    return 0;
}