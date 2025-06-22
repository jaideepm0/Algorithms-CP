import java.util.Scanner;

public class Merge {

    public static void main(String[] args) {

	var scan = new Scanner(System.in);
	int n = scan.nextInt();
	int[] arr = new int[n];
	for(int i = 0; i < n; ++i)
	    arr[i] = scan.nextInt();
	sort(arr);
	for(int i: arr){
	    System.out.print(i + " ");
	}
    }

    public static int[] merge(int[] left, int[] right){

	int n = left.length, m = right.length, i = 0, j = 0, k = 0;
	int[] X = new int[n + m];
	for(;i < n && j < m; ++k){
	    if(left[i] < right[j])
		X[k] = left[i++];
	    else
		X[k] = right[j++];
	}
	return X;
    }
    public static int[] sort(int[] arr){

	int n = arr.length;
	if(n == 1)
	    return arr;
	// This is a total pain in the Ass to make the split for to just pass sub-arr recursively gotta find a better way
	var left = sort(arr);
	var right = sort(arr);
	return merge(left, right);
    }

}
