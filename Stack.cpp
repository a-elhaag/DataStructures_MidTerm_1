#include "Stack.h"

Stack::Stack() {
	top=-1;
	std::cout << "enter the size of the stack: "; std::cin >> size;
	items = new int[size];
}

Stack::~Stack() {
	top = -1;
	delete[] items;
}

int Stack::is_empty() {
	if (top == -1)
		return 1;
	return 0;
}

int Stack::is_full() {
    if (top == size - 1) {
        return 1;
    }
    return 0;
}

void Stack::push(int item) {
	if (is_full()) {
		cout << "stack is overflow";
		return;
	}
	top++;
	items[top] = item;
}

int Stack::pop() {
	if (is_empty()) {
		cout << "stack is uderflow";
		return 0;
	}
	int item = items[top];
	top--;
	return item;
}
void Stack::print() {
	for (int i = top;i >= 0;i--)
		cout << items[i] << endl;
}

int Stack::stack_top() {
	return items[top];
}

