/**
 * Exercise 2-1
 * Using only single output statements-one that outputs the hash mark, one that outputs the space and one that outputs
 * an end-of-line), write a program that produces the following shape:
 * ########
 *  ######
 *   ####
 *    ##
 */

#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    for(int row = 1; row <= 4; row++) {
        int spaces = row - 1;
        cout << string(spaces, ' ');
        for(int hashNum = 1; hashNum <= row + (-3 * row + 10); hashNum++) {
            cout << "#";
        }
        cout << "\n";
    }
}