#include<iostream>
#include<algorithm>
using namespace std;

int minjumps(int arr[],int n)
{
    int i=0;
    int j=0;
    int c=0;
    int ans=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 4, 3, 2, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=minjumps(arr,n);
    cout<<ans;
    return 0;
}