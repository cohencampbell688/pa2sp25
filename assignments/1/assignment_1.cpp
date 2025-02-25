/*
 * Name        : FILL IN
 * Author      : FILL IN
 * Description : FILL IN
 * Sources     : FILL IN
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)
bool CheckAlphabetic(const string& str) {
    if (str.empty()) return false;  
    
    for (char c : str) {
        if (!isalpha(c)) return false;  
    }
    return true;
}

bool EncryptString(string& str, int shift) {
    if (!CheckAlphabetic(str)) return false;  
    
    for (char& c : str) {
        if (isupper(c)) {
            c = (c - 'A' + shift) % 26 + 'A';  
        } else if (islower(c)) {
            c = (c - 'a' + shift) % 26 + 'a';  
        }
    }
    return true;
}

bool DecryptString(string& str, int shift) {
    if (!CheckAlphabetic(str)) return false;  
    
    return EncryptString(str, -shift);  
}

double ComputeAverage(double arr[], unsigned int size) {
    double sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
} 

double FindMinValue(double arr[], unsigned int size) {
    double min_value = arr[0];
    for (unsigned int i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    return min_value;
} 

double FindMaxValue(double arr[], unsigned int size) {
    double max_value = arr[0];
    for (unsigned int i = 1; i < size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    return max_value;
}