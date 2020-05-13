Given an array A  which is sorted and contains N distinct elements. Also, this array is rotated at some unknown point. The task is to find the minimum element in it. 
Note: Expected time complexity is O(logN).

Input:
Example:
Input:
3
10
2 3 4 5 6 7 8 9 10 1
5
3 4 5 1 2
8
10 20 30 45 50 60 4 6
Output:
1
1
4




int minNumber(int arr[], int low, int high)
{
    // Your code here
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid==0 || arr[mid]<arr[mid-1])
         return arr[mid];
        else if(arr[mid]>arr[high])
        {
            low=mid+1;
        }
        else
          high=mid;
    }
    
}
