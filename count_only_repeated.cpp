

Given an array arr[] of N positive integers, where elements are consecutive (sorted). Also, there is a single element which is
repeating X (any variable) number of times. Now, the task is to find the element which is repeated and number of times it is repeated.

Input:
2
5
1 2 3 3 4
5
2 3 4 5 5

Output:
3 2
5 2

Example:
Testcase 1: In the given array, 3 is occuring two times.So the output is 3 2.
Testcase 2: In the given array, 5 is occuring two times.So the output is 5 2.
 
 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	     cin>>ar[i];
	    
	    int start=0;
	    int end=n-1;
	    int ans=0;
	    while(start<end)
	    {
	        int mid=(start+end)/2;
	        if((mid>0 && ar[mid]==ar[mid-1])|| (mid < n-1 && ar[mid]==ar[mid+1]))
	           {
	               ans=ar[mid];
	               break;
	           }
	        else if((ar[0]+mid)==ar[mid])
	            start=mid+1;
	       else
	           end=mid-1;
	    }
	   int count= ar[0]+n-ar[n-1];
	   cout<<ans<<" "<<count<<endl;
	}
	return 0;
}
