Given a sorted array arr of N positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of 
x in the array arr.

Input:
Example:
Input:
2
10
1 1 2 2 3 4 5 5 6 7
1
7
10 20 20 20 20 20 20
20

Output:
0
1






THis is real shit niga..

simple soultion by two different methods with same time complexity..O(logn)

my github link :
https://github.com/Firoz-ku...

visit for some CP hacks..

method 1 -->

int leftIndex(int n, int ar[], int x){

int i=0;
int j=n-1;
int res=-1;
while(i<=j)
{
int mid=(i+j)/2;
if(ar[mid]==x)
{
res=mid;
j=mid-1;
}
else if(ar[mid]>x)
j=mid-1;
else
i=mid+1;
}
return res;

2nd method :

int leftIndex(int n, int ar[], int x){

// Your code here

if(binary_search(ar,ar+n,x))
{
return lower_bound(ar,ar+n,x)-ar;

}
else
return -1;

}
