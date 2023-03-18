#include <iostream>
#include <vector>

//1. typedef
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std:: string text_t;
typedef int number_t;

//2. using keyword
using text_t = std::string;
using number_t = int;

int main(){
    //1. typedef:
    // std::vector<std::pair<std::string, int>> pairlist; helyett:
    // pairlist_t pairlist;
    text_t name = "Dorothy";
    number_t age = 18;

    //2. using keyword
    using namespace std;
    cout << name << endl
              << age << endl;

    return 0;
}