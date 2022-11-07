public class leadersInArray {
    public static void main(String[] args) {
        int[] arr = {10, 22, 12, 3, 0, 6};
        leaderElement(arr);
    }

    static void leaderElement(int[] nums)
    {

        int currLargest = nums[nums.length-1];
        System.out.println(currLargest);

        for(int i = nums.length-2; i>=0; i--)
        {
            if(nums[i] > currLargest)
            {
                System.out.println(nums[i]);
                currLargest = nums[i];
            }
        }
    }
}
