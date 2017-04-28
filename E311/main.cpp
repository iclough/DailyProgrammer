#include <iostream>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include <algorithm>

/*A sequence of n > 0 integers is called a jolly jumper if the absolute values of the differences between successive elements take on all possible values through n - 1
 *(which may include negative numbers). For instance,
 *1 4 2 3
 *is a jolly jumper, because the absolute differences are 3, 2, and 1, respectively.
 *
 * The definition implies that any sequence of a single integer is a jolly jumper.
 *
 * Write a program to determine whether each of a number of sequences is a jolly jumper.
 */

/*take in n
 *create vector of 1 through n-1
 *for int i = 0; i < vector.size(); i++
    *remove values from the vector as they are detected in the following numbers
    *ie if N = 4, and the 4 ints are 1 4 2 3
    *abs(1-4) = 3, so take 3 out of the vector
    *abs(4-2) = 2, so take 2 out of the vector
    *abs(4-2) = 2, so take 2 out of the vector
    *abs(2-3) = 1, so take 1 out of the vector
 *if vector is empty, it's a jolly jumper, if not, its not
*/

int main() {
    int n, elem;
    std::vector<int> v;
    std::vector<int> tracker;
    int remove;


    std::cout << "Please enter how many integers N are in your sequence: ";
    std::cin >> n;
    std::cout << "Please enter your sequence of integers (separated by return): ";

    while(std::cin >> elem) {
        v.push_back(elem);
    }

    for(int j = 1; j < n; j++){
        tracker.push_back(j);
    }

    for(int k = 0; k < v.size(); k++){
        remove = abs((v[k]) - v[k+1]);
        tracker.erase(std::remove(tracker.begin(), tracker.end(), remove), tracker.end());
    }

    std::cout << "[ ";
    for(std::vector<int>::const_iterator i = v.begin(); i != v.end(); i++) std::cout << *i << " ";
    std::cout << "] ";

    if(tracker.empty()){
        std::cout << "JOLLY" << std::endl;
    }
    else std::cout << "NOT JOLLY" << std::endl;
    return 0;
}