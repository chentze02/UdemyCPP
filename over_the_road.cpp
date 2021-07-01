#include <iostream>

using namespace std;

int *generate_odds(long long n);
int *generate_evens(long long n);
void print_array(const int *const arr, const long long size);

int main(){

    int *evens{nullptr};
    int *odds{nullptr};
    long long n {310027696726};
    long long address {23633656673};

    evens = generate_evens(n);
    odds = generate_odds(n);

    cout<<"Evens: ";
    print_array(evens, n);
    cout<<"\nOdds: ";
    print_array(odds, n);

    cout<<"\n--------------------------\n";

    if(address%2 != 0){
        cout<<evens[(address - 1)/2]<<" is opposite you."<<endl;
    }else{
        cout<<odds[(2*n-address)/2]<<" is opposite you."<<endl;
    }
    return 0;
}

int *generate_odds(long long n){
    int *arr {};
    arr = new int(n);

    int position {0};
    for (int i = 1; position<n; i+=2){
        arr[position] = i;
        position += 1;
    }
    return arr;
}
int *generate_evens(long long n){
    int *arr {};
    arr = new int(n);

    int position {0};
    for (int i = n*2; position<n; i-=2){
        arr[position] = i;
        position += 1;
    }
    return arr;
}
void print_array(const int *const arr, const long long size){
    cout<<"[ ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}