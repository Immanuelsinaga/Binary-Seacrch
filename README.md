
# Algoritma Binary Search


Ini adalah algoritma paling bagus menurutku untuk men-sort sebuah array. Langsung aja kita mulai kupas tuntas tentang algoritma Binary Search.
## Definisi
menurut wiki, binary search adalah **sebuah struktur** data dalam bentuk *pohon (tree)* yang **mungkin** saja memiliki satu keturunan (cabang), dua keturunan (yang digambarkan sebagai cabang kiri dan cabang kanan), atau **tidak memiliki** keturunan sama sekali.

Tapi menurut saya, Binary search adalah algoritma untuk **menemukan target** dalam *sorted* array, yang dimana setiap *iterasi* akan mengeleminasi setengah dari array nya.

![Gif algoritma binary search](https://www.mathwarehouse.com/programming/images/binary-search-tree/optimal-binary-search-tree-from-sorted-array.gif)

![Gif algoritma binary search](https://www.mathwarehouse.com/programming/images/binary-search-tree/binary-search-tree-insertion-animation.gif)
## Contoh Di kehidupan sehari-hari

misal, Azis sedang membuka kamus bahasa Inggris, yang dimana kamus ini tersusun rapih secara *alfabet* dari A-Z. Azis ingin mencari sebuah kata yaitu "**square**".

Jika Azis tidak tau cara memakai kamus, pasti dia akan mencari **kata satu per satu**. ini akan membutuhkan waktu yang sangat lama.

Jika Azis tau cara memakai kamus, pasti dia akan membuka terlebih dahulu halaman dengan huruf awal **s**. Dan disusul huruf kedua dan selanjutnya. Nah ini yang dimaksud dengan ***algoritma Binary Search***.
## Program python

    def binary_search(array, target):
    left = 0
    right = len(array) - 1

    while (left <= right):
        mid = (right + left) // 2

        if array[mid] == target:
            return mid
        elif array[mid] < target: 
            left = mid + 1
        else:
            right = mid - 1

    return -1

## Program c++

    int BST(int array[], int size, int target) {
        int kiri = 0;
        int kanan = size - 1;
        
        while (kiri <= kanan) {
            int mid = kiri + (kanan - kiri) /2;
            
            if (array[mid] == target) {
                return mid; // Elemen ditemukan
            }
            
            if (array[mid] < target) {
                kiri = mid + 1; 
            } else {
                kanan = mid - 1;
            }
    }
    

## Authors

- [@Immanuelreyus](https://github.com/Immanuelsinagae)

