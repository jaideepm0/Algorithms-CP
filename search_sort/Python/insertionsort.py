# I am not sure for this implementation
def sort_(array):
    n = len(array)
    if n <= 1:
        return array

    for i in range(1, n):
        pivot = array[i]
        j = i
        while j > 0 and pivot < array[j - 1]:
            array[j] = array[j - 1]
            j -= 1
        array[j] = pivot

    return array


# This one I am ok
def sort(arr):
    n = len(arr)
    for i in range(1, n):
        j = i - 1
        pivot = arr[i]
        while j >= 0 and arr[j] > pivot:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = pivot
