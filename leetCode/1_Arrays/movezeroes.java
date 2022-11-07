import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class movezeroes {
    public static void main(String[] args) {
        int[] nums={0,1,0,3,12};
        move0(nums);
        move00(nums);
    }

    static void move0(int[] nums)
    {
        int[] temp = new int[nums.length];
        int j = 0;

        for(int i = 0; i<nums.length; i++)
        {
            if(nums[i] != 0)
            {
                temp[j] = nums[i];
                j++;
            }
        }
        nums = temp;
        System.out.println(Arrays.toString(nums));
    }

    static void move00(int[] arr)
    {
        int k = 0;
        while (k < arr.length) {
          if (arr[k] == 0) {
            break;
          } 
          else {
            k = k + 1;
            System.out.println(Arrays.toString(arr));
          }
        }
        int i = k;
        int j = k + 1;
    
        while (i < arr.length && j < arr.length) {
          if (arr[j] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
    
          }
    
          j++;
    
        }
        for(int a=0;a<arr.length;a++)
       {
           System.out.print(arr[a]+" ");
       }
    }

}
