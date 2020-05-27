int peakElement(int arr[], int n)
{
   // Your code he
   int l=0,r=n-1;
   while(l<=r)
   {
       int mid=(l+r)/2;
       if((mid==0 || arr[mid]>=arr[mid+1])  && ( mid==n-1 || arr[mid]>=arr[mid-1]))
            return mid;
        if(mid>0 &&arr[mid-1]>arr[mid])
        {
            r--;
        }
        else
            l++;
        
   }
