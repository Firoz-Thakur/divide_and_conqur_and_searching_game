You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

Input Format
First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.


1
4 2
12 34 67 90
Sample Output
113 
Explanation
1st students : 12 , 34, 67 (total = 113)
2nd students : 90 (total = 90)
Print max(113, 90)


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool ispossible(int ar[],int n,int person,int mid)
{
 int person_used=1;
 int page_assign=0;
 for(int i=0;i<n;i++)
 {
	 if(page_assign+ar[i]>mid)
	 {
		 person_used++;
		 page_assign=ar[i];
		 if(person_used>person)
		  return false;
	 }
	 else 
	  page_assign=page_assign+ar[i];
 }
return true;
}

int isfind(int ar[],int n,int person)
{
  if(n<person)
   return -1;
  int s=ar[n-1];
  long long int sum=0;
  for(int i=0;i<n;i++)
     sum=sum+ar[i];
   int e=sum;
   int ans=INT_MAX;
   while(s<=e)
   {
	 int mid=(s+e)/2;
	 if(ispossible(ar,n,person,mid))
	   {
		   ans=min(ans,mid);
		   e=mid-1;
	   }
	   else
	    s=mid+1;
 }
 return ans;
}
int main() {
  int t;
  cin>>t;
  while(t--)
  {
	  int n,person;
	  cin>>n>>person;
	  int ar[n];
	  for(int i=0;i<n;i++) 
	  {
		  cin>>ar[i];
	  }
	  cout<<isfind(ar,n,person);
	  cout<<endl;
  }
	return 0;
}
