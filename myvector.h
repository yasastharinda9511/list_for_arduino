/*
 * myvector.h
 *
 *  Created on: Sep 23, 2018
 *      Author: Yasas Tharinda
 */

#ifndef MYVECTOR_H_
#define MYVECTOR_H_

#include <iostream>
#include <memory>
#include <cstdlib>


using namespace std;


template <class T>
class list{
private:
	int maxsize;
	int step;
public:
	list();
	list(int siz);
	int size;
	T* address;
	void append(T value);
	void pop();
	void insert(T value, int index);
	void del(T value);
	bool find(T value);
	void reallocation();
	int length();
	T operator[](int index);
	void print();
	int find_index(T val);

};
#endif /* MYVECTOR_H_ */
