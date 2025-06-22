def sort(array):
    n = len(array)
    for i in range(n):
        minimum_value, minimum_index = array[i], i
        for j in range(i + 1, n):
            if array[j] < minimum_value:
                minimum_value = array[j]
                minimum_index = j
        array[i], array[minimum_index] = array[minimum_index], array[i]
