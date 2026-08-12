class Solution {
    public int maxArea(int[] heights) {
        int max_wtr=0;
        int left=0;
        int right=heights.length-1;
            while(left<right)
            {
            int minht=Math.min(heights[left],heights[right]);
            int width=right-left;
            int area=minht*width;
            max_wtr=Math.max(max_wtr,area);

            if(heights[left]<heights[right])
            left++;
            else
            right--;

        }
        return max_wtr;
    }
}
