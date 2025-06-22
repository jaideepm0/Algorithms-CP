public class Quick {

    static int partition(int[] arr, int left, int right){
        int pivot = arr[left], index = left;
        while(left < right){

            // Check for the elements that are smaller that the current elements from the start of the array
            while(left < arr.length && arr[left] <= pivot)
                ++left;
            // Check the same for the greater elements from the end of the array
            while(arr[right] > pivot)
                --right;
            if(left < right){
                arr[left] += arr[right];
                arr[right] = arr[left] - arr[right];
                arr[left] -= arr[right];
            }
        }
        arr[index] += arr[right];
        arr[right] = arr[index] - arr[right];
        arr[index] -= arr[right];
        return right;
    }
    static void sort(int[] arr, int left, int right){

        if(left >= right)
            return;
        int P = partition(arr, left, right);
        sort(arr, left, P - 1);
        sort(arr, P + 1, right);
    }
    public static void main(String[] args) {

        // test the function with this driver code
    }
}
