// 560. Subarray Sum Equals K

public class subarraySumEqualK {

    public static void main(String[] args) {
        int[] num = {1,2,3};
        System.out.println(subarraySum(num, 3));

    }
    static int subarraySum(int[] nums, int k)
    {
        if(k == 0)
        {
            return 0;
        }
        int counter = 0;
        for(int i =0; i<nums.length; i++)
        {
            
            int sum = 0;
            for(int j =i; j<nums.length; j++)
            {
                sum = nums[j] + sum;

                if(sum == k)
                {
                    counter++;
                }
            }
        }
        return counter;
    }
    
}
