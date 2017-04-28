#include <iostream>

/*A fraction exists of a numerator (top part) and a denominator (bottom part) as you probably all know.
 *Simplifying (or reducing) fractions means to make the fraction as simple as possible. Meaning that the denominator is a close to 1 as possible.
 *This can be done by dividing the numerator and denominator by their greatest common divisor.
 *
 *You will be given a list with 2 numbers separator by a space. The first is the numerator, the second the denominator
 * 4 8
 * 1536 78360
 * 51478 5536
 * 46410 119340
 * 7673 4729
 * 4096 1024
 *
 * which become:
 * 1 2
 * 64 3265
 * 25739 2768
 * 7 18
 * 7673 4729
 * 4 1
*/

int gcd(long int n, long int m) {
    //n is the numerator, m is the denominator

    if(n == 0 || m == 0) return 1;
    if(n < 0) n = -n;       //if n is negative, negate it
    if(m < 0) m = -m;       //if m is negative, make m positive
    if(m > n){      //swap
        int a;
        a = n;  //temp = numerator
        n = m;  //numerator = denominator
        m = a;  //denominator = temp = numerator
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}