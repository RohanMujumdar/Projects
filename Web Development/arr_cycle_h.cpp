#include<iostream>
#include<algorithm>

using namespace std;

void rotate(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        swap(arr[i],arr[n-1]);
    }
}

void printarr(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={9, 8, 7, 6, 4, 2, 1, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n);
    printarr(arr,n);
    return 0;
}