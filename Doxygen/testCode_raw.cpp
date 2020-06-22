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

/*!
* \brief Prints given input number
* \param num input number
* \details Provision to print numbers from single place
* While using multi-threading can be used lock here
*/
void printNum(int num){
	cout<<num<<endl;
}

/*!
* \brief Adds 1 to given input number
* \param num input number
* \details Just adds 1 to input number
* \return num+1
*/
int addOne(int num){
	return num+1;
}

int main(){
	int num = 10;//!< Use some random value as input to the code
	printNum(num);
	num = addOne(num);
	printNum(num);
	return 0;
}