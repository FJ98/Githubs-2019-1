#ifndef QUICKSORT_TEMPLATE_QUICKSORT_H // Created by felix on 5/17/2019.
#define QUICKSORT_TEMPLATE_QUICKSORT_H

#include <vector>
#include <algorithm>

template <class T>
T partition(T arr[], int start, int end){
    T valorPivot = arr[start];
    int posPivot = start;
    for (int pos = start + 1; pos <= end; pos++){
        if (arr[pos] < valorPivot){
            std::swap(arr[posPivot + 1], arr[pos]);
            std::swap(arr[posPivot], arr[posPivot + 1]);
            posPivot ++;
        }
    }
    return posPivot;
}

template <class T>
T quickSort(T arr[], int start, int end){
    if (start < end) {
        T p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
    return *arr;
}

template <class T>
T partition(std::vector<T> vec[], int start, int end){
    T valorPivot = vec[start];
    int posPivot = start;
    for (int pos = start + 1; pos <= end; pos++){
        if (vec[pos] < valorPivot){
            std::swap(vec[posPivot + 1], vec[pos]);
            std::swap(vec[posPivot], vec[posPivot + 1]);
            posPivot ++;
        }
    }
    return posPivot;
}

template <class T>
T quickSort(std::vector<T> vec [], int start, int end){
    if (start < end) {
        T p = partition(vec, start, end);
        quickSort(vec, start, p - 1);
        quickSort(vec, p + 1, end);
    }
    return vec;
}


#endif //QUICKSORT_TEMPLATE_QUICKSORT_H