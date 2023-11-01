#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n)
{
  int smallest = arr[0];
  int sSmallest = INT_MAX;
  for(int i=1;i<n;i++)
    {
      if(arr[i]<smallest)
      {
        sSmallest = smallest;
        smallest = arr[i];
      }
      else
      {
        if(arr[i]<sSmallest)
          sSmallest = arr[i];
      }
    }
  return sSmallest;
}

int main()
{
  int n;
  cin>>n;
	int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

  cout<<secondSmallest(arr, n);

	return 0;
}
