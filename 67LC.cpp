#include <iostream>
#include <algorithm>
#include <string>


std::string addBinary(std::string a, std::string b){
    std::string newBin = {};
    int indexA = a.size() - 1;
    int indexB = b.size() - 1;
    int carry = 0;
    while(indexA >= 0 || indexB >= 0 || carry > 0){
        if(indexA >= 0){
            carry += a[indexA] - '0';
            indexA--;
        }
        if(indexB >= 0){
            carry += b[indexB] - '0';
            indexB--;
        }
        newBin.push_back((carry % 2) + '0');
        carry /= 2;
    }
    std::reverse(newBin.begin(), newBin.end());
    return newBin;
}

int main(){
    std::string a = "11";
    std::string b = "1";
    std::cout << addBinary(a, b);
    return 0;
}
