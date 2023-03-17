#include <iostream>
#include <limits>

using namespace std;

int main(){
    int numbers[] = {10, 20, 30};
    // cout << sizeof(numbers) << endl;
    // cout << sizeof(int) << endl;
    // cout << sizeof(long) << endl;
    // cout << sizeof(long long) << endl;
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << sizeof(long long) << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;
    cout << sizeof(size_t) << endl;
    return 0;
}