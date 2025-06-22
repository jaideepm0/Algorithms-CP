def merge(left_array, right_array):
    i, j, n, m = 0, 0, len(left_array), len(right_array)
    merged_array = []
    while i < n and j < m:
        if left_array[i] <= right_array[j]:
            merged_array.append(left_array[i])
            i += 1
        else:
            merged_array.append(right_array[j])
            j += 1
    merged_array.extend(left_array[i:])
    merged_array.extend(right_array[j:])
    return merged_array


def sort(array):
    n = len(array)
    if n <= 1:
        return array

    left_array = sort(array[:n // 2])
    right_array = sort(array[n // 2:])

    array = merge(left_array, right_array)
    return array
