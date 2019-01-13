#include<bits/stdc++.h>
using namespace std;
#define maxn 101
bool issocial[maxn];
int social,test;
int n,k;
inline void re(int x)
{
    int i;
    cin>>i;
    if (i==-1)
    {
        issocial[x]=true;
        social++;
    }
    else test++;
    return ;
}
