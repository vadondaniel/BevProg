#include "std_lib_facilities.h"

int* ga = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int* array, int n){
    int* la = ga;
    for (size_t i = 0; i < 10; i++)
    {
        cout << la[i] << " ";
    }
    cout << endl;
    int* fsarray = new int[n];
    fsarray = la;
    for (size_t i = 0; i < n; i++)
    {
        cout << fsarray[i] << " ";
    }
    cout << endl;
    delete[]fsarray;
}

void fv(vector<int> vec){
    vector<int> lv = vec;
    for (size_t i = 0; i < lv.size(); i++)
    {
        cout << lv[i] << " ";
    }
    cout << endl;
    
    vector<int> lv2 = vec;
    for (size_t i = 0; i < lv2.size(); i++)
    {
        cout << lv2[i] << " ";
    }
    cout << endl;

}

int main(){
    f(ga, 10);
    int* aa = new int[10] {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    f(aa, 10);
    fv(gv);
    vector<int> vv = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    fv(vv);

    return 0;
}