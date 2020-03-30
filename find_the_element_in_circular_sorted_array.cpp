sample:input

5
4 5 1 2 3 
2
outputL 3

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int key;
	cin>>key;
	int l=0;
	int h=n-1;
	int ans=-1;
	//int flag=0;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(ar[mid]==key)
		 {
			 ans=mid;
			 break;
			 //cout<<mid;
			// flag=1;
		 }
		else if(ar[mid]<ar[h])
		 {
			 if(key>=ar[mid] && key<=ar[h])
			   l=mid+1;
			else 
			  h=mid-1;
		 }
		else 
		{
         if(key>=ar[l] && key<=ar[mid])
			   h=mid-1;
			else 
			   l=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}

5
4
5
1
2
3
2
Sample Output
3
