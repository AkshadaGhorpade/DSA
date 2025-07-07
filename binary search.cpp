#include <iostream>
using namespace std;
int binarysearch (int a[], int left, int right,int key)
{
	int mid=(left+right)/2;
	while (left<=right && a[mid]!=key)
	{
		if(key<a[mid])
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
		mid=(left+right)/2;	
	}
	if(a[mid]==key)
	{
		return mid;
	}
	else
	{
	return-1;
	}
}
int main(void)
{
	int arr[]={2,3,4,10,40};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int key=10;
	int pos=binarysearch(arr, 0, n-1, key);
	if(pos == -1)
	{
		cout<<"key is not found in an array"<<endl;
	}
	else
	{
		cout<<"key is found at index"<<pos<<endl;
		
	}
	return 0;	
}
