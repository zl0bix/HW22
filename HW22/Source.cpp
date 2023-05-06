#include<iostream>

void degree_num(int* num1, int num2);

int main() {
	//HW22.1
	std::cout << "\n\n\t\tHW22.1\n\n";
	const int size1 = 10;
	int arr1[size1]{ 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = arr1;
	for (int i = 0; i < size1; i+=2) {
		std::swap(*(ptr1 + i), *(ptr1 + i + 1));
	}
	for (int i = 0; i < size1; i++){
		std::cout << *(ptr1 + i) << ' ';
	}
	//HW22.2
	std::cout << "\n\n\t\tHW22.2\n\n";
	int n = 3, m = 5;
	int* ptrnum = &m;
	
	degree_num(ptrnum, n);


	system("pause");
	return 0;
}

void degree_num(int* num1, int num2){
	int tmp = *num1;
	for (int i = 1; i < num2; i++) {
		tmp *= *num1;
	}
	std::cout << tmp;
	std::cout << std::endl;
}
