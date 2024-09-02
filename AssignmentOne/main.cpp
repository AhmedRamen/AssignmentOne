#include <stdio.h> //"printf()" > "std::cout << std::endl"

int main() {
	//init values firsthand
	int two = 1; int one = 2; int temp;

	//Print before swap
	printf("Before swap:\nThe two variable: %d\nThe one variable: %d\n\n", two, one);

	//Print normally before swap
	printf("Normal (Before swap):\nThe one variable: %d\nThe two variable: %d\n\n", one, two);

	temp = two; //temp variable assigned to two var, which two has 1 as the value
	two = one;	//two variable assigned to one var, which one has 2 as the value
	one = temp; //finally, one variable assigned to temp, which temp has 1 as the value

	//Finally print the after swap
	printf("After swap:\nThe two variable: %d\nThe one variable: %d\n\n", two, one);

	//Print normally after swap
	printf("Normal (After swap):\nThe one variable: %d\nThe two variable: %d\n\n", one, two);

	return 0;
}