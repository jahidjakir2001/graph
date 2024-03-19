
   /*******************************************************
    *   IN THE NAME OF ALLAH  ,  BISMILLAHIR RAHMANIR RAHIM*
    ********************************************************/
    /**.....................................আল্লাহ্ ব্যাতিত কোন মাবুদ নাই............................**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
string s="abcdefghijklmnopqrstuvwxyz";
const int mx=1e4;
vector<int>v[mx];
int main()
{
    int node,edge;
    int x,y;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=node;i++)
    {
        cout<<i;
        for(int j=0;j<v[i].size();j++)
        {
            cout<<"->"<<v[i][j];
        }
        cout<<endl;
    }
}
