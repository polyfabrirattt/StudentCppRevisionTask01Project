﻿#include "tasks.h"

/*	Task (задание) 01. Maximum Number [наибольшее число]
*
*	Даны два целых числа. Выведите значение наибольшего из них.
*	Если числа равны, выведите любое из них.
*
*	Примечание
*	При реализации программы постарайтесь не использовать условные конструкции.
*	Данную задачу можно решить с использованием только встроенных в язык C/C++ простых операций.
*
*	Формат входных данных [input]
*	Функция принимает два любых целых числа.
*
*	Формат выходных данных [output]
*	Функция должна вывести наибольшее число.
*
*	[Sample function input  1] (пример передаваемых в функцию параметров): 10 15
*	[Sample function output 1] (пример возвращаемого функцией результата): 15
*
*	[input  2]: 40 25
*	[output 2]: 40
*
*	[input  3]: 7 7
*	[output 3]: 7
*/

int task01(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}

}