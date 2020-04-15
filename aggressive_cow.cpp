Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

Input Format
First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.



Constraints
5 3
1 2 8 4 9
Sample Output
3



#include <iostream>
using namespace std;

bool can_cow_place(int stll[],int n,int distance,int no_of_cow)
{
   int last_cow_that_is_placed=stll[0];
   int c=1;
   for(int i=1;i<n;i++)
   {
   	 if((stll[i]-last_cow_that_is_placed)>=distance)
   	 {
   	 	last_cow_that_is_placed=stll[i];
   	 	c++;
   	 	if(c==no_of_cow)
   	 	 return true;
   	 }
   }
	return false;
}


int main() {
	// your code goes here
	int stall[]={1,2,4,8,9};
	int c=3;
	int s=0;
	int n=5;
	int e=stall[n-1]-stall[0];
	int ans=0;
	while(s<=e)
	{
		int mid=(s+e)/2;
		bool cowrakhpaye=can_cow_place(stall,n,mid,c);
		if(cowrakhpaye)
		{
			ans=mid;
			s=mid+1;
		}
	    else
	      e=mid-1;
	}
  cout<<ans;
	return 0;
}
