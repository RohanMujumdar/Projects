#include<iostream>
#include<algorithm>
using namespace std;

void replace(int arr[],int n)
{
    int i;
    int j=0;
    int c;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
}

void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(arr)/sizeof(arr[0]);
    replace(arr,n);
    printarr(arr,n);
    return 0;
}