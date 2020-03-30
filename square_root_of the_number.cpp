#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n=63;
	int low=0;
	int high=n;
	int ans=-1;
	int flag=0;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if((mid*mid)==n)
		{   cout<<mid<<endl;   //perfect squar
		    flag=1;
			break;
		}
		if(mid*mid>n)
		 high=mid-1;
		else {
		 ans = mid;
		 low=mid+1;   //if the number is not perfect square
		}
	}
	if(flag==0)
	cout<<ans<<endl;
	return 0;
}
