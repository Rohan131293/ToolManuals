/*!
 * @author Rohan Vardekar
 * @date 22-6-2020
 * @copyright Open
 *
 * \mainpage testCode to Explore dOxygen
 *
 * \section Section 1
 *
 * \section Sectio 2
 * \subsection SubSection 2.1
*/

#include <iostream>

using namespace std;


/**
 * @brief      Prints a number.
 *
 * @param[in]  num   input number
 */
void printNum(int num){
	cout<<num<<endl;
}


/**
 * @brief      Adds one.
 *
 * @param[in]  num   The number
 *
 * @return     { num+1 }
 */
int addOne(int num){
	return num+1;
}


int main(){
	int num = 10;
	printNum(num);
	num = addOne(num);
	printNum(num);
	return 0;
}