import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    public void SortArray(int[] Array){
        for (int i = 0 ; i < Array.length ; i++){
            for (int j = i+1 ; j< Array.length;j++){
                if(Array[j]<Array[i]){
                    swap(Array,i,j);
                }
            }
        }
    }
    public void swap(int[] array, int i, int j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    public void merge(int[] nums1, int m, int[] nums2, int n) {
        ArrayList<Integer> arrayList = new ArrayList<>();
        for (int i = 0 ; i < m ; i++){
            arrayList.add(nums1[i]);
        }
        for (int i = 0 ; i < n ;i++){
            arrayList.add(nums2[i]);
        }
        System.out.println("output");
        int temp[] = new int[m+n];
        for (int i = 0 ; i < arrayList.size() ; i++){
            temp[i] = arrayList.get(i);
        }
        SortArray(temp);
        for(int i = 0 ; i < temp.length ; i++){
            System.out.println(temp[i]);
        }
    }
    public void merge2(int[] nums1, int m, int[] nums2, int n){
        int j = 0 ;
        for (int  i = m ; i < m+n ; i++){
            nums1[i]  = nums2[j];
            j++;
        }
        Arrays.sort(nums1);
    }
}
