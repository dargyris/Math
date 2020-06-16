#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system ( "clear" );

    int cycles {0};
    int sum {0};
    for ( int i {1}; i < 372; i+=5 ){
        sum += i;
        cycles ++;
    }
    cout << "Sum\t: " << sum << endl;
    cout << "Cycles\t: " << cycles << endl;
    cout << endl;

    int firstElement {1};
    int step {5};
    int numberOfElements {75};
    int lastElement {0};
    int middleElement {0};
    lastElement = firstElement + ( (numberOfElements - 1) * step );
    middleElement = lastElement - (lastElement - firstElement)/2;
    cycles = 0;
    sum = 0;
    for ( int i {0}; i < 37; ++i){
        sum += 372;
        cycles ++;
    }
    sum += middleElement;
    cout << "Sum\t: " << sum << endl;
    cout << "Cycles\t: " << cycles << endl;

    fflush ( stdin );
    cin.get();
    return 0;
}
