#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
float CPPLib::FindMedian(const std::vector<int> &input) {
    int size = input.size();
    float result;

    if (size == 0) {
        result = -1;
    }
    else if ((size % 2) == 0) {
        result = (input[size / 2] + input[(size / 2) - 1]) / 2.0;
    }
    else {
        result = input[size / 2];
    }

    return result;
}

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro(const std::string &first, const std::string &last, const std::string &exp) {
    // Please fill up this function.
    std::string output = "Hi, my name is " + first + " " + last + ", and my programming experiences are: " + exp + ".";
    return output; 
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input){
    // Please fill up this function.
    std::vector<int> res;

    for (const auto &x : input) {
        for (const auto &y : x) {
            for (const auto &z : y) {
                res.push_back(z);
            }
        }
    }
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n){
    // Please fill up this function.
    return 0;
}
