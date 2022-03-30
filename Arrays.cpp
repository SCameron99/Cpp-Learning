#include <iostream>

using namespace std;

int main() {
    
    int my_scores [5] {1,2,3,4,5};
    
    cout << "First Element is: " << my_scores[0] << endl;
    cout << "Last Element is: " << my_scores[4] << endl;
    cout << "An out of bounds is: " << my_scores[5] << endl;
    
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    
    my_scores[0] = 6;
    cout << "First Element is now : " << my_scores[0] << endl;
	  return 0;
}
