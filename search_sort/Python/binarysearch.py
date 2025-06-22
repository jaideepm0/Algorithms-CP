
def search(arr, key):

    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            right = mid - 1
        else:
            left = mid + 1
    return -1
