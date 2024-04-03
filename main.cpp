/*
This code was written by Anas Elhaag
It contains different functions that are used to study different concepts in C++ Data Structures and Algorithms all the material studied in ECU to be specific.
It covers the material that would be covered in the First Midterm Exam.
This code wasnt written to be used by anyone, it was written for studying purposes only.
During running you might enncounter unrecognized user experience.
This code is a collection of different functions that are used to study different concepts in C++ Data Structures and Algorithms.
if you want to run this code you can use the exe file in the repository.
you can clone threpository and run the code in your IDE.
*/



#include"Stack.h"
#include "Student.h"
#include <iostream>
#include <string>


using namespace std;

// Function prototypes
void _enum(int c);
void _5_input_array();
void _2D_array();
void dynamic_array();
void struct_person();
void struct_person_dynamic_array();
void array_largest_num();
void student_percentage_struct();
void dynamic_2D_array();
void class_student();
void stack();
void program();

// Enum
enum Direction {
	UP,
	DOWN,
	LEFT,
	RIGHT
};

// Struct
struct Person {
	string name;
	int age;
};

struct Student_struct {
	string name;
	int marks[5];
	int total{ 0 };
	float percentage;
};

// Main function
int main() {
	while (true) {
		program();
	}
	cout << endl << "---------------------------------" << endl;
}

// Function definitions
void _enum(int c) {
	Direction dir = static_cast<Direction>(c);
	switch (dir) {
	case UP:
		cout << "Going up!" << endl; cout << dir << endl;
		break;
	case DOWN:
		cout << "Going down!" << endl; cout << dir << endl;
		break;
	case LEFT:
		cout << "Going left!" << endl; cout << dir << endl;
		break;
	case RIGHT:
		cout << "Going right!" << endl; cout << dir << endl;
		break;
	}
}
void _5_input_array() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter a number: ";
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}
void _2D_array() {
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter a number: ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void dynamic_array() {
	cout << "Enter No. of items: ";
	int array_size{ 0 }; cin >> array_size;
	int* items_array = new int[array_size];
	for (int i{ 0 };i < array_size;i++) {
		cout << endl;
		cout << "Enter item no. " << i + 1 << ": ";
		cin >> items_array[i];
	}
	cout << "You have: ";
	for (int i = 0; i < array_size; i++)
	{
		cout << items_array[i];
	}
	delete[]items_array;
}
void struct_person() {
	Person p1;
	p1.name = "Anas";
	p1.age = 19;

	cout << p1.name << "    " << p1.age << endl;
}
void struct_person_dynamic_array() {
	cout << "enter the size of the array of the struct: ";
	int struct_array_size{}; cin >> struct_array_size;
	Person* sturct_array = new Person[struct_array_size];
	for (int i{ 0 }; i < struct_array_size;i++) {
		cin >> sturct_array[i].name;
		cin >> sturct_array[i].age;
	}
	for (int i{ 0 }; i < struct_array_size;)
		cout << sturct_array[i].name << " " << sturct_array[i].age;
}
void array_largest_num() {
	cout << "No. of elements: ";
	int array_size{};
	cin >> array_size;
	int* array_of_int = new int[array_size];
	for (int i = 0; i < array_size; i++) {
		cin >> array_of_int[i];
	}
	int largest_num = array_of_int[0];
	for (int i = 1; i < array_size; i++) {
		if (array_of_int[i] > largest_num) {
			largest_num = array_of_int[i];
		}
	}
	cout << "Largest number: " << largest_num << endl;
	delete[] array_of_int;
}
void student_percentage_struct() {
	Student_struct s1;
	s1.name = "Anas";
	cout << "Enter student's marks";
	for (auto mark : s1.marks) {
		cin >> mark;
		s1.total = +mark;
	}
	s1.percentage = s1.total / 5;

	cout << s1.percentage;
}
void dynamic_2D_array() {
	cout << "enter the number of rows: "; int r{}; cin >> r;
	cout << "enter the number of rows: "; int c{}; cin >> c;
	int** matrix = new int* [r];
	for (int i = 0; i < r; i++) {
		matrix[i] = new int[c];
	}
	cout << "enter the 2d ";
	for (int i = 0; i < r; i++) {
		for (int j{ 0 };j < c;) {
			cin >> matrix[i][j];
		}
		cout << endl;
	}
	cout << endl << "you entered:";
	for (int i = 0; i < r; i++) {
		for (int j{ 0 };j < c;) {
			cout << matrix[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < r;i++)
		for (int j{ 0 }; i < c;j++)
			delete[] matrix[j];
	delete[] matrix;
}
void class_student() {
	Student s1("Anas", 1);
	s1.set_name("John");
	s1.set_roll_no(2);
	cout << s1.get_name() << " " << s1.get_roll_no();
}
void stack() {
	Stack s;
	s.push(5);
	s.push(3);
	s.push(500);
	s.print();
	s.pop();
	s.print();
	s.~Stack();
}
void program() {
	cout << "choose a function: \n";
	cout << "1. enum\n";
	cout << "2. 5 input array\n";
	cout << "3. 2D array\n";
	cout << "4. dynamic array\n";
	cout << "5. struct person\n";
	cout << "6. struct person dynamic array\n";
	cout << "7. array largest number\n";
	cout << "8. student percentage struct\n";
	cout << "9. dynamic 2D array\n";
	cout << "10. class student\n";
	cout << "11. stack\n";
	cout << "Enter your choice: ";
	int chose{}; cin >> chose;
	switch (chose) {
	case 1:
		_enum(1);
		break;
	case 2:
		_5_input_array();
		break;
	case 3:
		_2D_array();
		break;
	case 4:
		dynamic_array();
		break;
	case 5:
		struct_person();
		break;
	case 6:
		struct_person_dynamic_array();
		break;
	case 7:
		array_largest_num();
		break;
	case 8:
		student_percentage_struct();
		break;
	case 9:
		dynamic_2D_array();
		break;
	case 10:
		class_student();
		break;
	case 11:
		stack();
		break;
	default:
		cout << "Invalid input!";
		break;
	}
}









