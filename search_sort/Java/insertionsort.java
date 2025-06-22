
/**
 * insertionsort
 */
public class insertionsort {

    void sort(int[] arr){

        int n = arr.length;
        for(int i = 1; i < n; ++i){
            int j = i - 1;
            int pivot = arr[i];
            while(j >= 0 && arr[j] > pivot){
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = pivot;
        }
    }
}
