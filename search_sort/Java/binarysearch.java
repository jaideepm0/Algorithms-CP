public class binarysearch {

    public static int search(int[] arr, int value){

        int n = arr.length,i = 0, j = n - 1, m = (i + j) / 2;
        for(; i <= j; m = (i + j) / 2){
            if(arr[m] == value)
                return m;
            else if(arr[m] < value)
                i = m + 1;
            else
                j = m - 1;
        }
        return -1;
    }
}
