#include <iostream>
#include <cstdlib>
#include <ctime>

//rand ();
//int rand  = offset + (rand() % range );
//int random = 1 + (rand()% 100);

using namespace std;

int main() {
    
    srand(time(0));
    
    int random = 1 + (rand()% 100);
    cout << random << endl;
    
    return 0;
}
    