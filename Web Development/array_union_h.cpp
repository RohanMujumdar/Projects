#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int unionarr(int a[],int b[],int n,int m)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int j=0;j<m;j++)
    {
        s.insert(b[j]);
    }
    int f;
    f=s.size();
    return f;
}
int main()
{
    int a[]={85,25,1,32,54,6};
    int n=sizeof(a)/sizeof(a[0]);
    
    int b[]={85,2};
    int m=sizeof(b)/sizeof(b[0]);
    int ans=unionarr(a,b,n,m);
    cout<<ans;
    return 0;
}