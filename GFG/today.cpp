class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
      
      int start_val = 0,end_val = 2000;
      
      while(start_val <= end_val)
      {
         int centre_val = (start_val + end_val)/2;
         int count=0;
         int n = r*c;
         for(int i=0;i<r;i++)
         {
             int l=0,h=c-1;
             while(l<=h)
             {
                   int mid = l + (h-l)/2;
                   
                   if(matrix[i][mid] <= centre_val)
                   l = mid+1;
                   
                   else
                   h = mid-1;
             }
             count = count + l;
         }
         
         if( count > n/2 )
           end_val = centre_val-1;
         else
           start_val = centre_val+1;
      }
      
      return start_val;
   }
};