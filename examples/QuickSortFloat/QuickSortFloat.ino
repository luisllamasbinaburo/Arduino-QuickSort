/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
 ****************************************************/

#include "QuickSortLib.h"

float values100[] = { 3.0, 53.0, 70.0, 56.0, 18.0, 85.0, 27.0, 14.0, 37.0, 94.0, 9.0, 55.0, 40.0, 60.0, 52.0, 61.0, 15.0, 65.0, 13.0, 8.0, 57.0, 97.0, 69.0, 4.0, 35.0, 82.0, 22.0, 73.0, 59.0, 68.0, 78.0, 24.0, 21.0, 36.0, 71.0, 80.0, 74.0, 39.0, 17.0, 12.0, 29.0, 76.0, 49.0, 51.0, 30.0, 90.0, 88.0, 2.0, 84.0, 50.0, 62.0, 28.0, 77.0, 43.0, 5.0, 16.0, 58.0, 26.0, 32.0, 34.0, 1.0, 75.0, 66.0, 95.0, 38.0, 89.0, 67.0, 87.0, 100.0, 54.0, 92.0, 81.0, 25.0, 83.0, 46.0, 33.0, 23.0, 45.0, 96.0, 99.0, 79.0, 48.0, 11.0, 31.0, 7.0, 6.0, 19.0, 91.0, 93.0, 44.0, 47.0, 98.0, 86.0, 41.0, 63.0, 20.0, 72.0, 10.0, 42.0, 64.0 };
size_t values100Length = sizeof(values100) / sizeof(values100[0]);

void printArray(float* x, size_t length)
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

	Serial.println("Ordenando 100 integers");
	unsigned long timeCount = micros();
	QuickSort<float>::SortAscending(values100, 0, values100Length - 1);
	timeCount = micros() - timeCount;
	printArray(values100, values100Length);
	Serial.println();
	Serial.print(timeCount);
	Serial.println("us");
}


void loop()
{
}