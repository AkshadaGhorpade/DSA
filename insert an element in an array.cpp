#include<iostream>
using namespace std;
int insert (int a[], int n, int key, int pos)
{
	int i;
	//shift the element to right
	for(i=n-1; i>=pos; i--)
	{
		a[i+1]=a[i];
	}
	//insert the element
	a[pos]=key;
	//increase the size
	n++;
	return n;
}
display (int a[], int n)
{//display array
cout<<"\n After insertion in an array"<<endl;
for(int i=0;i<n;i++)
{
	cout<<a[i]<<"\t";
}
}
int main()
{
	int arr[6]={10,20,30};
	int n=3;
	int key=15;
	int pos=1;
	//insert element key at given pos
	n=insert(arr,n,key,pos);
	//display array
	display(arr,n);
	return 0;
}
