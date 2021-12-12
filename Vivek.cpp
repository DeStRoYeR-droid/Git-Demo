#include <iostream>

using namespace std;

int sum_of_n_natural_numbers(unsigned long int number){
	unsigned long long int total = 0;

	for (int i=1 ; i <= number ; i++){
		total += i;
	}

	return total;
}

int main(){
	unsigned long int number;

	cout << "Please input a number : ";
	cin >> number;
	cout << "The total of numbers from 1 to " << number << " is " << sum_of_n_natural_numbers(number) << endl;

	return 0;
}
