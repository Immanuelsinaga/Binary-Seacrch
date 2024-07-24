#include <iostream>
using namespace std;

// Fungsi binary search
int BST(int array[], int size, int target) {
    int kiri = 0;
    int kanan = size - 1;
    
    while (kiri <= kanan) {
        int mid = kiri + (kanan - kiri) / 2;
        
        if (array[mid] == target) {
            return mid; // Elemen ditemukan
        }
        
        if (array[mid] < target) {
            kiri = mid + 1; // Cari di sebelah kanan
        } else {
            kanan = mid - 1; // Cari di sebelah kiri
        }
    }
    
    return -1; // Elemen tidak ditemukan
}

int main() {
    int array[] = {1, 4, 5, 7, 9, 12, 15, 18, 19, 22, 25, 29, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 15;
    
    int result = BST(array, size, target);
    
    if (result != -1) {
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan." << endl;
    }
    
    return 0;
}
