#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> f_buzz {};
    
    for(int i = 1; i <= n; i++){
        if((i % 3 == 0) && (i % 5 == 0)){
            f_buzz.push_back("FizzBuzz");
        }else if(i % 3 == 0){
            f_buzz.push_back("Fizz");
        }else if(i % 5 == 0){
            f_buzz.push_back("Buzz");
        }else{
            f_buzz.push_back(std::to_string(i));
        }
    } 
    return f_buzz;
}
int main(){
    std::vector<std::string> result = fizzBuzz(3);
    for (auto word : result) {
        std::cout << word << " "; 
    }
    return 0;
}
