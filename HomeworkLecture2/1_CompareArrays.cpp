#include <iostream>
using namespace std;

bool areEqual(int arr1[], int length1, int arr2[], int length2)
{
    int lengthToCompare = length1 >= length2 ? length1 : length2;
    for (int i = 0; i < lengthToCompare; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int lengthArray1;
    cin >> lengthArray1;
    int array1[lengthArray1];
    for (int i = 0; i < lengthArray1; i++) {
        cin >> array1[i];
    }

    int lengthArray2;
    cin >> lengthArray2;
    int array2[lengthArray2];
    for (int i = 0; i < lengthArray2; i++) {
        cin >> array2[i];
    }

    string result = areEqual(array1, lengthArray1, array2, lengthArray2) ? "equal" : "not equal";
    cout << result;

    return 0;
}
