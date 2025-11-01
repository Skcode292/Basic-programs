
#include <iostream>  
using namespace std;  

// Function to check if a digit is prime  
bool isPrimeDigit(int digit) {  
    if (digit < 2) return false;  
    for (int i = 2; i < digit; i++) {  
        if (digit % i == 0) return false;  
    }  
    return true;  
}  

// Function to calculate sum of prime digits  
int sumPrimeDigits(int number) {  
    int sum = 0;  
    while (number > 0) {  
        int digit = number % 10;  
        if (isPrimeDigit(digit)) {  
            cout << digit << " is a prime number" << endl;  
            sum = sum + digit;  
        } else {  
            cout << digit << " is not a prime number" << endl;  
        }  
        number = number / 10;  
    }  
    return sum;  
}  

// Function to count prime digits  
int countPrimeDigits(int number) {  
    int count = 0;  
    while (number > 0) {  
        int digit = number % 10;  
        if (isPrimeDigit(digit)) count = count + 1;  
        number = number / 10;  
    }  
    return count;  
}  

// Function to calculate average of prime digits  
double avgPrimeDigits(int sum, int count) {  
    if (count == 0) return 0;  
    return (double)sum / count;  
}  

// Function to find minimum prime digit  
int minPrimeDigit(int number) {  
    int minPrime = 10; // digits go from 0-9  
    while (number > 0) {  
        int digit = number % 10;  
        if (isPrimeDigit(digit) && digit < minPrime) minPrime = digit;  
        number = number / 10;  
    }  
    if (minPrime == 10) return -1; // no prime digits found  
    return minPrime;  
}  

// Function to find maximum prime digit  
int maxPrimeDigit(int number) {  
    int maxPrime = -1; // digits go from 0-9  
    while (number > 0) {  
        int digit = number % 10;  
        if (isPrimeDigit(digit) && digit > maxPrime) maxPrime = digit;  
        number = number / 10;  
    }  
    return maxPrime;  
}  

int main() {  
    string studentid = "BC240410076";  
    int studentidno = 240410076;  

    cout << "Assignment 1 CS201P by Saud Akhtar BC240410076" << endl;  
    cout << "My STUDENT ID: " << studentid << endl;  
    cout << "My student ID no: " << studentidno << endl;  

    cout << "\nLet's find prime numbers in my ID\n" << endl;  

    int sum = sumPrimeDigits(studentidno);  
    int count = countPrimeDigits(studentidno);  
    double avg = avgPrimeDigits(sum, count);  
    int minPrime = minPrimeDigit(studentidno);  
    int maxPrime = maxPrimeDigit(studentidno);  

    cout << "\nThe sum of all prime digits is: " << sum << endl;  
    cout << "The total number of prime digits is: " << count << endl;  
    cout << "The average of prime digits is: " << avg << endl;  

    if (minPrime != -1) cout << "The minimum prime digit is: " << minPrime << endl;  
    else cout << "No prime digits found." << endl;  

    if (maxPrime != -1) cout << "The maximum prime digit is: " << maxPrime << endl;  
    else cout << "No prime digits found." << endl;  

    return 0;  
}  
