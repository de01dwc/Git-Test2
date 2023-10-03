/**
 * @file main.cpp
 * @author Matthew Deck
 * @date 2023-08-30
 * @brief GitHub & Linux Basics
 * 
 * Program prompts user for a positive integer, then displays the sum of all positive integers between 1 and the number entered,
 * and then the product for the same range of integers.
 */


#include <iostream>

using namespace std;



/**
 * calculates the sum of all positive integers between int and 1
 *
 * @param unsigned long int num the starting number
 * @return unsigned long int the sum of positive integers
 * 
 */
unsigned long int sumIncremental(unsigned long int num);


/**
 * calculates the product of all positive integers between int and 1
 *
 * @param unsigned long int num the starting number
 * @return unsigned long int the product of positive integers
 * 
 */
unsigned long int productIncremental(unsigned long int num);


int main() {

  cout << "Enter a positive integer: ";

  unsigned long int num = 0;
  cin >> num;
  cout << "The sum of positive integers between 1 and " << num << " is " << sumIncremental(num) << "." << endl;
  cout << "The product of these integers is " << productIncremental(num) << "." << endl;
  
  return 0;
}


unsigned long int sumIncremental(unsigned long int num) {
  unsigned long int sum = 0;

  // add num to total, then decrease num by 1
  while (num > 0) sum += num--;
  
  return sum;

}


unsigned long int productIncremental(unsigned long int num) {
  unsigned long int product = 1;

  // multiply product by num, then decrease num by 1
  while (num > 1) product *= num--;

  return product;

}
