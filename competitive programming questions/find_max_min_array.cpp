#include<bits/stdc++.h>
using namespace std;
struct Pair
{
	int max;
	int min;
};
struct Pair getmaxmin(int a[] , int n)
{
	struct Pair maxmin;
	if(n==1)
	{
		maxmin.max=a[0];
		maxmin.min=a[0];
		return maxmin;
	}
	if(a[0]>a[1])
	{
		maxmin.max=a[0];
		maxmin.min=a[1];
	}
	else
	{
		maxmin.max=a[1];
		maxmin.min=a[0];
	}
	for(int i=2;i<n;i++)
	{
		if(a[i]>maxmin.max)
			maxmin.max=a[i];
		else if(a[i]<maxmin.min)
			maxmin.min=a[i];
	}
	return maxmin;
}
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)	cin>>a[i];
	struct Pair maxmin=getmaxmin(a,n);
	cout<<"Max="<<maxmin.max<<endl;
	cout<<"Min="<<maxmin.min<<endl;
	return 0;
}