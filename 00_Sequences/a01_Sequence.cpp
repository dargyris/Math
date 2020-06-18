#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system ( "clear" );

    int cycles {0};
    int firstElement {0};
    int step {0};
    int numberOfElements {0};
    int lastElement {0};
    cout << "Please enter first Element\t> ";
    cin >> firstElement;
    cout << "Please enter last Element\t> ";
    cin >> lastElement;
    cout << "Please enter step\t\t> ";
    cin >> step;
    cout << endl;

    numberOfElements = (lastElement - firstElement)/step + 1;
    cout << endl;

    cout << "First\t: " << firstElement << endl;
    cout << "Last\t: " << lastElement << endl;
    cout << "#NoE.\t: " << numberOfElements << endl;
    cout << endl;

    cycles = 0;
    int sum {0};
    sum += numberOfElements * ( lastElement + firstElement )/2;
    cycles ++;
    cout << "Sum\t: " << sum << endl;
    cout << "Cycles\t: " << cycles << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}
