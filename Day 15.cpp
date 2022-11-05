class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        int index=-1;
          long sum=0;
          long equil_point=0;
       for(int i=0;i<n;i++)
       {
           sum=sum+arr[i];
       }
       for(int i=0;i<n;i++)
       {
           sum=sum-arr[i];
           if(sum==equil_point)
           {
               index=i+1;
           }
           equil_point+=arr[i];
       }
       return  index;
    
    }

};