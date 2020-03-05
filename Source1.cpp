#include <iostream>
using namespace std;

int LinearSearch(int value, int* array, int size);

int main()
{
    int const size = 5;
    int value, array[size];

    cin >> value;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << LinearSearch(value, array, size) << endl;

    return 0;
}

int LinearSearch(int value, int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}
