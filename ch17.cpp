#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a){
    for (size_t i = 0; i < 10; i++)
    {
        os << a[i] << " ";
    }
    cout << endl;
}

void print_array(ostream& os, int* a, int n){
    for (size_t i = 0; i < n; i++)
    {
        os << a[i] << " ";
    }
    cout << endl;
}

void print_vector(ostream& os, vector<int> a, int n){
    for (size_t i = 0; i < n; i++)
    {
        os << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int* alpha = new int[10];
    for (size_t i = 0; i < 10; i++)
    {
        cout << alpha[i] << " ";
    }
    cout << endl;
    delete(alpha);

    int* a = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    print_array(cout, a, 10);
    delete[] a;

    int* b = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    print_array(cout, b, 11);
    delete(b);

    int* c = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
    print_array(cout, c, 20);
    delete(c);

    vector<int> aa {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    print_vector(cout, aa, 10);

    vector<int> bb {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    print_vector(cout, bb, 11);

    vector<int> cc {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
    print_vector(cout, cc, 20);

    //part 2
    int n = 1;
    int& p1 = n;
    cout << p1 << endl << n << endl;
    int* array = new int[7] {1, 2, 4, 8, 16, 32, 64};
    int*& p2 = array;
    for (size_t i = 0; i < 7; i++)
    {
        cout << p2[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int* p3 = p2;
    //p1 = p2;
    //p3 = p1;
    cout << p1 << endl;
    for (size_t i = 0; i < 7; i++)
    {
        cout << p2[i] << " ";
    }
    cout << endl;
    delete(array);
    delete(p3);
    
    int* ten = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    int*& p1_ = ten;
    int* ten_2 = new int[10];
    int*& p2_ = ten_2;
    p2_ = p1_;

    return 0;
}
