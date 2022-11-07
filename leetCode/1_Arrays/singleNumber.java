import java.util.Arrays;

// 136. Single Number

public class singleNumber {

    public static void main(String[] args) {
        int[] nums = {2,2,1};
        System.out.println(singleNO(nums));
    }

    static int singleNO(int[] nums)
    {
        Arrays.sort(nums);
        for(int i = 0; i<nums.length-1; i+=2)
        {
            if(nums[i] != nums[i+1])
            {
                return nums[i];
            }
        }
        return 0;
            
    }

    static int singleNO2(int[] nums)
    {
        int x = 0;
	for (int a : nums) {
		x = x ^ a;
	}
	return x;
    
    }
    
}
