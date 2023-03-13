#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // Right align
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot" << endl;
    // Left align
    cout << left;    
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot" << endl;
    // Numbers
    cout << 12.24567 << endl;                               //12.2457 rounded
    cout << fixed << 12.24567 << endl;                      //12.245670
    cout << fixed << setprecision(2) << 12.24567 << endl;   //12.25
    
    return 0;
}