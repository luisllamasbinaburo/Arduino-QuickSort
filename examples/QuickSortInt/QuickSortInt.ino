/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License

UPDATES:
2020/08/22:1006>
          error fix: Added type to templated declaration (Orlando S. Hoilett)
          Also print values before ordering to compare (Orlando S. Hoilett)
 ****************************************************/

#include "QuickSortLib.h"

int values100[] = { 3, 53, 70, 56, 18, 85, 27, 14, 37, 94, 9, 55, 40, 60, 52, 61, 15, 65, 13, 8, 57, 97, 69, 4, 35, 82, 22, 73, 59, 68, 78, 24, 21, 36, 71, 80, 74, 39, 17, 12, 29, 76, 49, 51, 30, 90, 88, 2, 84, 50, 62, 28, 77, 43, 5, 16, 58, 26, 32, 34, 1, 75, 66, 95, 38, 89, 67, 87, 100, 54, 92, 81, 25, 83, 46, 33, 23, 45, 96, 99, 79, 48, 11, 31, 7, 6, 19, 91, 93, 44, 47, 98, 86, 41, 63, 20, 72, 10, 42, 64 };
size_t values100Length = sizeof(values100) / sizeof(values100[0]);

void printArray(int* x, size_t length)
{
	for (size_t iCount = 0; iCount < length; iCount++)
	{
		Serial.print(x[iCount]);
		Serial.print(',');
	}
}

void setup()
{
	Serial.begin(115200);

  Serial.println("Antes de ordenando");
  printArray(values100, values100Length);
  Serial.println();
  Serial.println();

	Serial.println("Ordenando 100 integers");
	unsigned long timeCount = micros();
	QuickSort<int>::SortAscending(values100, 0, values100Length - 1);
	timeCount = micros() - timeCount;
	printArray(values100, values100Length);
	Serial.println();
	Serial.print(timeCount);
	Serial.println("us");
}


void loop()
{
}
