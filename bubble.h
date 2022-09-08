// =================================================================
//
// File: bubble.h
// Author: Francisco Couttolenc Ortiz 
// Description: This file contains the implementation of the
//				bubble sort.
// =================================================================

#ifndef BUBBLE_H
#define BUBBLE_H

#include "header.h"
#include <vector>

// =================================================================
// Performs the bubble sort algorithm on an array
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// =================================================================

template <class T>
void bubbleSort(T *arr, int size) {
	for(int i = size - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr, j, j + 1);
			}
		}
	}
}

// =================================================================
// Performs the bubble sort algorithm on an vector.
//
// @param v, a vector of T elements.
// =================================================================

template <class T>
int bubbleSort(std::vector<T> &v) {
  int kBs = 0;
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j] > v[j + 1]){
				swap(v, j, j + 1);
        kBs++;
			}
		}
	}
  return kBs;
}

#endif /* BUBBLE_H */
