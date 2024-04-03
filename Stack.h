#pragma once
#include<iostream>
using namespace std;

class Stack
{
private:
	int* items;
	int top;
	int size;

public:
	Stack();
	int is_empty();
	int is_full();
	void push(int);
	int pop();
	void print();
	int stack_top();
	~Stack();
};

