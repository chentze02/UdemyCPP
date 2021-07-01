#include <iostream>
#include <vector>

using namespace std;

int main(){

    int num {100};
    int &ref {num};
    int *num_ptr {&num};

    vector <int> ints {1,2,3,4,5,6,-1};
    vector <int> *ints_ptr {&ints};

    int arr[] {7,8,9,10,-1};
    int *arr_ptr{arr};

    cout<<arr_ptr<<endl;
    cout<<&ints<<endl;

    for (int const &i: ints){
        cout<<i<<endl;
    }
    cout<<"-----------------\n";
    while(*arr_ptr != -1){
        cout<<*arr_ptr++<<endl;
    }
    return 0;
}