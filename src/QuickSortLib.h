//Copyright (c) 2016 Luis Llamas 
//www.luisllamas.es
//
//This library is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This library is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along this library. If not, see <http://www.gnu.org/licenses/>.

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
