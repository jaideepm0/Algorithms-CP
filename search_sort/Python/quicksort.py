
def parition(arr, left, right):
    ind, key = left, arr[left]

    while left < right:
        while left < len(arr) and arr[left] <= key:
            left += 1
        while right > 0 and arr[right] > key:
            right -= 1
        if left < right:
            arr[left], arr[right] = arr[right], arr[left]

    arr[right], arr[ind] = arr[ind], arr[right]
    return right


def quick(arr, left, right):
    if left < right:
        p = parition(arr, left, right)
        quick(arr, p + 1, right)
        quick(arr, left, p - 1)
