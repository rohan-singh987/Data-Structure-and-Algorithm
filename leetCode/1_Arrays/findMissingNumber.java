import java.util.Arrays;

public class findMissingNumber {
    public static void main(String[] args) {
        int[] num = {3,0,1};
        System.out.println(missingNumber(num));

        int[] nums = {0,1};
        System.out.println(missingNumber(nums));
    }

    static int missingNumber(int[] num)
    {
        Arrays.sort(num);
        for(int i = 0; i<num.length; i++)
        {
            if(num[i] != i)
            {
                
                return i;
            }
        }
        return num.length;
    }

    static int missingNumber2(int[] nums)
    {
        int[] numArray=new int[nums.length+1];
        for(int i=0;i<nums.length;i++){
            numArray[nums[i]]++;
            System.out.println(Arrays.toString(numArray));
        }
        for(int i=0;i<numArray.length;i++){
            if(numArray[i]==0){
                return i;
            }
        }
        return 0;
    }
}
