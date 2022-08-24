#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

long long largestsum(int arr[],int n)
{
    long long currbest=arr[0];
    long long overallbest=arr[0];
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=currbest+arr[i];
        if(temp>arr[i])
        {
        currbest=temp;
        }
        else
        {
            currbest=arr[i];
        }
        if(currbest>overallbest)
        {
            overallbest=currbest;
        }
    }
    return overallbest;
}
int main()
{
    int arr[]={-1,-2,-3,-4};
    long long int n=sizeof(arr)/sizeof(arr[0]);
    int ans;
    ans=largestsum(arr,n);
    cout<<ans;
    return 0;
}