/**
 * Exercise 2-2
 * Using only single output statements-one that outputs the hash mark, one that outputs the space and one that outputs
 * an end-of-line), write a program that produces the following shape:
 *    ##
 *   ####
 *  ######
 * ########
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
    for(int row = 1; row <= 8; row++) {
        if (row < 5) {
            cout << string(4 - row, ' ');
            for(int hashNum = 1; hashNum <= row * 2; hashNum++) {
                cout << "#";
            }
        }
        else {
            cout << string(row - 5, ' ');
            for(int hashNum = 1; hashNum <= 18 - 2 * row; hashNum++) {
                cout << "#";
            }
        }
        cout << "\n";
    }
}