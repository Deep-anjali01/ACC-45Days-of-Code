
class Solution{
    public:
    
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int n=r+1,ans=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(k==(i+1))
            {ans=arr[i];
            break;}
        }
    }
};