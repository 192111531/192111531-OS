#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,n,x,y,temp,diff,sum;
	cout<<"enter the no of elements: ";
	cin>>n;
	cout<<"enter the elements: ";
	for(i=1;i<=n;i++)
	{
		cin>>a[1];
	}
	cout<<"enter the m value: ";
	cin>>x;
	cout<<"enter the n value: ";
	cin>>y;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
	{		
		if(a[1]>a[i])
	{
		  temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;	
		}
	}
}
sum=a[n-(x-1)]+a[y];
diff=a[n-(x-1)]-a[y];
cout<<"the maximum element is"<<a[n-(x-1)]<<"\n";
cout<<"the minimum element is"<<a[y]<<"\n";
cout<<"sum of the maximum and minimum is"<<sum<<"\n";
cout<<"the difference of the maximum and minimum is"<<diff<<"\n";
}
