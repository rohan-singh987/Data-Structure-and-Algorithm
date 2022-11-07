import java.util.HashSet;
import java.util.Set;

// 128. Longest Consecutive Sequence
// (Medium)

public class longestConsequtiveSeq{



    public static void main(String[] args) {

        int[] arr = {0,3,7,2,5,8,4,6,0,1};

        System.err.println(longestConsecutive(arr));
    }


    // Naive Solution
    static int longestConsecutive(int[] nums) {
        if(nums.length == 0)
        {
            return 0;
        }
        
        int longestStreak = 0;

        for(int i = 0; i<nums.length; i++)
        {
            int currElement = nums[i];
            int currStreak = 0;

            while(ifConsecutive(nums, currElement))
            {
                currElement++;
                currStreak++;
            }
            longestStreak = Math.max(longestStreak, currStreak);
        }
        return longestStreak;


    }
    static boolean ifConsecutive(int[]num, int nextElement)
    {
        for(int i = 0; i<num.length; i++)
        {
            if(num[i] == nextElement)
            {
                return true;
            }
        }
        return false;
    }


    static int longestConsecutive2(int[] nums)
    {
        Set<Integer> num_set = new HashSet<Integer>();
        
        for(int num:nums)
        {
            num_set.add(num);
        }
        int longestStreak = 0;
        for(int numS:num_set)
        {
            if(!num_set.contains(numS-1))
            {
                int currElement = numS;
                int currStreak = 1;
                
                
                while(num_set.contains(currElement+1))
                {
                    currElement++;
                    currStreak++;
                }
                longestStreak = Math.max(currStreak, longestStreak);
            }
        }

        return longestStreak;
    }

    
    
}