/*A2
#include <iostream>
using namespace std;

void f(int* arr) {
    // In ra kích thước của mảng trong hàm f
    cout << "Kích thước của mảng trong hàm f: " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};

    // In ra kích thước của mảng bên ngoài hàm
    cout << "Kích thước của mảng bên ngoài hàm: " << sizeof(A) << " bytes" << endl;

    // Gọi hàm f và truyền mảng A dưới dạng con trỏ
    f(A);

    return 0;
}

/* A3
#include <iostream>

using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    const int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Đếm số số chẵn trong 5 phần tử đầu mảng
    int countFirst = count_even(arr, 5);
    cout << "Number of even elements in the first 5 elements: " << countFirst << endl;

    // Đếm số số chẵn trong 5 phần tử cuối mảng
    int countLast = count_even(arr + size - 5, 5);
    cout << "Number of even elements in the last 5 elements: " << countLast << endl;

    return 0;
}

/* A4
#include <iostream>
using namespace std;

// Hàm tìm kiếm nhị phân bằng con trỏ
int binarySearch(int* arr, int low, int high, int target) {
    if (low > high) {
        return -1; // Trường hợp không tìm thấy
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // Trường hợp tìm thấy
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target); // Tìm kiếm nửa đầu của mảng
    } else {
        return binarySearch(arr, mid + 1, high, target); // Tìm kiếm nửa sau của mảng
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Nhập giá trị cần tìm: ";
    cin >> target;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result == -1) {
        cout << "Không tìm thấy giá trị " << target << " trong mảng." << endl;
    } else {
        cout << "Giá trị " << target << " được tìm thấy tại vị trí " << result << " trong mảng." << endl;
    }

    return 0;
}

/* A5
#include <iostream>

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main() {
    char* ptr = weird_string();
    cout << "Output: " << ptr << endl;

    return 0;
}
