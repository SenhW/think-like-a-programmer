/**
 * Exercise 2-3
 * Here's an especially tricky one:
 * Using only single output statements-one that outputs the hash mark, one that outputs the space and one that outputs
 * an end-of-line), write a program that produces the following shape:
 * #            #
 *  ##        ##
 *   ###    ###
 *    ########
 *    ########
 *   ###    ###
 *  ##        ##
 * #            #
 */

#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    for(int row = 1; row <= 8; row++) {
        if (row < 5) {
            cout << string(row - 1, ' ');
            for(int hashNum = 1; hashNum <= row; hashNum++) {
                cout << "#";
            }
            cout << string(16 - 4 * row, ' ');
            for(int hashNum = 1; hashNum <= row; hashNum++) {
                cout << "#";
            }
        }
        else {
            cout << string(8 - row, ' ');
            for(int hashNum = 1; hashNum <= 9 - row; hashNum++) {
                cout << "#";
            }
            cout << string(4 * row - 20, ' ');
            for(int hashNum = 1; hashNum <= 9 - row; hashNum++) {
                cout << "#";
            }
        }
        cout << "\n";
    }
}