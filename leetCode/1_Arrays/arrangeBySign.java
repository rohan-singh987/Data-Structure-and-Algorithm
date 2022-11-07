// 2149. Rearrange Array Elements by Sign

public class arrangeBySign {
    public static void main(String[] args) {
        
    }

    static int[] rearrangeArray(int[] nums) { 
        int[] newNum = new int[nums.length];
        
        int[] posNum = new int[nums.length];
        int[] negNum = new int[nums.length];
        
        int i = 0;
        int j = 0;
        for(int num : nums)
        {
            if(num > 0)
            {
                posNum[i] = num;
                i++;
            }
            else{
                negNum[j] = num;
                j++;
            }
        }
        
    }
}
