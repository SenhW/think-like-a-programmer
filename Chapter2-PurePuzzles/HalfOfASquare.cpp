/** 
 * Problem: Half of a Square
 * Write a program that uses only two output statements, cout << "#" and cout <<
 * "\n", to produce a pattern of hash symbols shaped like half of a perfect 5x5
 * square (or a right triangle):
 * #####
 * ####
 * ###
 * ##
 * #
 */

#include <iostream>
using std::cin;
using std::cout;

int main() {
    for(int row = 1; row <= 5; row++) {
        for(int hashNum = 1; hashNum <= 6 - row; hashNum++) {
            cout << "#";
        }
        cout << "\n";
    }	
}
