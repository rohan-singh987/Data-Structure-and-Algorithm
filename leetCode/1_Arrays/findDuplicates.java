import java.util.Arrays;

public class findDuplicates {

    public static void main(String[] args) {
        int[] nums = {1,3,4,2,2};
        System.out.println(findDupi(nums));

        System.out.println(findDupi2(nums));
    }

    static int findDupi(int[] nums)
    {
        Arrays.sort(nums);
        for(int i = 1; i<nums.length; i++)
        {
            if(nums[i-1] == nums[i])
            {
                return nums[i];
            }
        }
        return 0;
    }

    static int findDupi2(int[] nums)
    {
        int[] freq = new int[nums.length];
        for(int i = 0; i<nums.length; i++)
        {
            if(freq[nums[i]] == 0)
            {
                freq[nums[i]]++;
            }
            else{
                return nums[i];
            }
        }
        return 0;
    }
    
}
