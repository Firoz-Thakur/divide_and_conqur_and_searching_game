You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. And all elements occur once except two
numbers which occur twice. Find the two repeating numbers


Output:
Print the two elements occuring twice in the array. Order of the two elements must be according to second appearance, i.e.,
first print the element whose second occurrence arrives first. For example in 1 2 2 1, the output should be 2 1. And for 1 1 2 2, 
output should be 1 2.

User Task:

Example:
Input:
3
4
1 2 1 3 4 3
2
1 2 2 1
2
1 1 2 2
Output:
1 3
2 1
1 2


HINT:

The complete Solution :

Traverse the complete array, take the array elements as index and mark the element at this index postion .
Marking can be done, for example by multiplying the element at this index by -1.
Also, check if the element at this index is already negative, if it is output the index.


void twoRepeated(int ar[], int n){
    
    // Your code here
    
 //  unordered_map<int,bool> mp;
   n=n+2;
   for(int i=0;i<n;i++)
   {
       if((ar[abs(ar[i])])>0)
       {
         ar[abs(ar[i])]=-1 * ar[abs(ar[i])];
       }
      else
      {
        cout<<abs(ar[i])<<" ";   
      }
      
   }
