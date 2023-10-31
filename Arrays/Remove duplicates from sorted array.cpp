#include<iostream>
using namespace std;

void removeDuplicatesNaive(int arr[], int n)
{
	int temp[n];
	temp[0]=arr[0];
	int res=1;
	for(int i=0;i<n;i++)
	if(temp[res-1]!=arr[i])
	{
		temp[res]=arr[i];
		res++;
	}
	for(int i=0;i<n;i++)
	arr[i]=temp[i];
}

void removeDuplicates(int arr[], int n)
{
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[res-1])
		{
			arr[res]=arr[i];
			res++;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];

	removeDuplicates(arr, n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
