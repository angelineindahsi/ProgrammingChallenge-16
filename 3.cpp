#include <iostream>
using namespace std;

template <class num>
void minmax(num &first, num &second)
            {
                if(first < second)
                    first = first;
                else
                    second = first;
            };
            
int main()
            {
                int min1, min2;
                double max1, max2;
                
                cout << "Enter minimum value 1: ";
                cin >> min1;
                cout << "Enter minimum value 2: ";
                cin >> min2;
                
                minmax(min1, min2);
                cout << "Minimum value: " << min2 << endl;
                
                cout << endl;
                
                cout << "Enter maximum value 1: ";
                cin >> max1;
                cout << "Enter maximum value 2: ";
                cin >> max2;
                
                minmax(max1, max2);
                cout << "Maximum value: " << max2 << endl;
                
                return 0;
            }
    
            
            
