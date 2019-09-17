/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
 ****************************************************/

#ifndef _QuickSortLib_h
#define _QuickSortLib_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

template <typename T>
class QuickSort
{
public:
	static void SortAscending(T* arr, const size_t left, const size_t right);
	static void SortDescencing(T* arr, const size_t left, const size_t right);
};


template <typename T>
void QuickSort<T>::SortAscending(T* data, const size_t left, const size_t right)
{
	size_t leftIndex = left;
	size_t rightIndex = right;
	T tmpItem;

	int pivot = data[(left + right) / 2];
	while (leftIndex <= rightIndex)
	{
		while (data[leftIndex]<pivot) leftIndex++;
		while (data[rightIndex]>pivot) rightIndex--;
		if (leftIndex <= rightIndex)
		{
			tmpItem = data[leftIndex];
			data[leftIndex] = data[rightIndex];
			data[rightIndex] = tmpItem;
			leftIndex++;
			rightIndex--;
		}
	}

	if (left<rightIndex)
		QuickSort<T>::SortAscending(data, left, rightIndex);
	if (leftIndex<right)
		QuickSort<T>::SortAscending(data, leftIndex, right);
}

template <typename T>
void QuickSort<T>::SortDescencing(T* data, const size_t left, const size_t right)
{
	size_t leftIndex = left;
	size_t rightIndex = right;
	T tmpItem;

	int pivot = data[(left + right) / 2];
	while (leftIndex <= rightIndex)
	{
		while (data[leftIndex]>pivot) leftIndex++;
		while (data[rightIndex]<pivot) rightIndex--;
		if (leftIndex <= rightIndex)
		{
			tmpItem = data[leftIndex];
			data[leftIndex] = data[rightIndex];
			data[rightIndex] = tmpItem;
			leftIndex++;
			rightIndex--;
		}
	}

	if (left<rightIndex)
		QuickSort<T>::SortDescencing(data, left, rightIndex);
	if (leftIndex<right)
		QuickSort<T>::SortDescencing(data, leftIndex, right);
}
#endif
