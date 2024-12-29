#include <iostream>

using namespace std;

int main() {
	int a=0;
    int arr[] = {1, 3, 1, 1, 0};
    for (int i = 0; i < 5; i++) 
		{if (arr[i]>=2){
			a=arr[i];
		}
	}

    try {
            if (a > 2) {
                throw a; 
            } else {
                throw 'c';
            }
        }
     catch (int num) {
        cout << num << " this no in array is greater than 2." << endl;
    } catch (char ch) {
        cout << "Value is not greater than 2." << endl;
    }

    return 0;
}

