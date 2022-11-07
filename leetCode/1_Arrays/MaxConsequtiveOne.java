// 485. Max Consecutive Ones

public class MaxConsequtiveOne {
    public static void main(String[] args) {
        int[] nums = {1,1,0,1,1,1};
        System.out.println(findMaxConsecutiveOnes(nums));


        int[] nums2 = {1,0,1};
        System.out.println(findMaxConsecutiveOnes(nums2));
    }

    static int findMaxConsecutiveOnes(int[] nums) {
        
        int maxOnes = 0;
        int tempOnes = 0;
        for(int i = 0; i<nums.length; i++)
        {
            if(nums[i] == 0)
            {
                tempOnes = 0;
            }
            else{
                tempOnes++;
            }
            maxOnes = Math.max(maxOnes, tempOnes);

        }
        return maxOnes;
    }
}