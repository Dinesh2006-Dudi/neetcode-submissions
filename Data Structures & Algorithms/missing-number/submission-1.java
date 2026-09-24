class Solution {
    public int missingNumber(int[] nums) {
        
        HashSet<Integer> res=new HashSet<>();

        int n=nums.length;

        for(int i=0;i<n;i++)
        {
            res.add(nums[i]);
        }

        for(int i=0;i<=n;i++)
        {
            if(!res.contains(i))
            {
                return i;
            }
        }
        return -1;
        
    }
}
