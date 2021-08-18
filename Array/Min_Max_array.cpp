/*Maximum and minimum of an array using minimum number of comparisons*/
// Can also use sorting and just have to pick either one the first or second.

#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<< min<<endl;
	cout<<max;
}
