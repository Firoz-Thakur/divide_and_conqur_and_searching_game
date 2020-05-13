Given a binary sorted non-increasing array arr of size N. You need to print the count of 1's in the binary array.
Example:
Input:
2
8
1 1 1 1 1 0 0 0
8
1 1 0 0 0 0 0 0
Output:
5
2

int countOnes(int arr[],int n)
{
    
    int i=0;
    int j=n-1;
    int x=0;
    while(i<=j)
    {
      int mid=(i+j)/2;
      if(arr[mid]==1 && (arr[mid+1]==0 || mid==n-1))
      {
          return mid+1;
      }
      else if(arr[mid]==0)
      {
          j=mid-1;
      }
     else
     {
         i=mid+1;
     } 
     
    }
    return x;
}
