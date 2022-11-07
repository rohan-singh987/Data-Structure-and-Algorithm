import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class rotateArraybyK{
    public static void main(String[] args) {
        int[] num = {1,2,3,4,5,6,7};
        rotate(num, 3);
    }
    static void rotate(int[] nums, int k)
    {
        // int[] temp = new int[nums.length-k];


        // for(int i =0; i<nums.length-k; i++)
        // {
        //     temp[i] = nums[i];
        // }

        // for(int i = 1; i<k+1; i++)
        // {
        //     nums[i-1] = nums[i+k];
        // }
        
        // List<Integer> ans = new ArrayList<>();
        // for(int i = 0; i<k; i++)
        // {
        //     ans.add(i, nums[i]); 
        // }
        // for(int i = k; i<nums.length; i++)
        // {
        //     ans.add(i, temp[i-k]);
        // }

        // List<Integer> temp = new ArrayList<>();
        int[] temp = new int[nums.length];
        for(int i = 0; i<nums.length; i++)
        {
            temp[(i+k)%nums.length] =  nums[i]; 
        }
        
        nums = temp;
        

        System.out.println(Arrays.toString(nums));
    }
}