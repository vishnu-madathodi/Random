
#include <iostream>

int main()
{
    int size = 4;
    int numbers[4] = { 5, 10, 15, 20 };
    int target = 15;
    bool isFound = false;

    for(int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (numbers[i] + numbers[j] == target) {
                std::cout << "Numbers " << numbers[i] << " and " << numbers[j] << " found at indices: " << i+1 << " and " << j+1 <<"\n";
                isFound = true;
            }
        }
    }

    if (!isFound) {
        std::cout << "Such numbers not found!!";
    }
}

