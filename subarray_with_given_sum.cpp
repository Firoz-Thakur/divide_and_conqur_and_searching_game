void subarraySum(int ar[], int n, int s){
    
    // Your code her
    
    int i=0;
    int j=0;
    int cursum=0;
    int flag=0;
    while(true)
    {
        if(cursum+ar[j]==s)
        {
            cout<<i+1<<" "<<j+1;
            flag=1;
            break;
        }
       else if(cursum+ar[j]>s)
       {
           
           cursum=cursum-ar[i];
           i++;
       }
      else
      {
          cursum=cursum+ar[j];
          j++;
      }
      
    if(i==n || j==n)
     break;
    }
    if(flag==0)
     cout<<"-1";
    
 
}
