#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//int i=0;
int upper_bound1(int ar[],int n,int key)
{
  int l=0;
  int h=n-1;
  int ans=-1;
  while(l<=h)
  {
  	int mid=(l+h)/2;
  	if(ar[mid]==key)
  	 {
  	 	ans=mid;
  	 	l=mid+1;
  	 }
  	else if(ar[mid]>key)
  	  h=mid-1;
  	else
  	 l=mid+1;
  }
  return ans;
}

int main() {
	// your code goes here
    int ar[]={1,1,2,2,2,2,2,2,3,3,3,3,3,4,5,6,6,6,9,9};
    int n=sizeof(ar)/sizeof(int);
    int key=2;
    cout<<upper_bound1(ar,n,key)<<" baba"<<endl;  //made by me
    auto it=lower_bound(ar,ar+n,key);   //inbuilt fun
    cout<<it-ar<<endl;
    auto it2=upper_bound(ar,ar+n,key);
    cout<<(it2-ar)-1<<endl;               //upper bound gives us upper bound of the highest indexed element so we need to substract one from that
    cout<<"occurance of element is "<<it2-it;
  return 0;
}
//
7 baba
2
7
occurance of element is 6
