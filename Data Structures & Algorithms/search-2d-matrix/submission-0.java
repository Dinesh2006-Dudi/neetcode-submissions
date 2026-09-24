class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n=matrix.length;
        int m=matrix[0].length;

        int left=0;
        int right=m*n-1;

        while(left<=right)
        {
            int mid=(left+right)/2;

            int rpos=mid/m;
            int cpos=mid%m;

            if(matrix[rpos][cpos]==target)
            {
                return true;
            }
            else if(matrix[rpos][cpos]>target)
            {
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return false;
    }
}
