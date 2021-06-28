#include <iostream>
#include <string>

using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"HRVvwxEFWXYZghijyzAefUIJKLMklmnNOabcPBSTdQopqCDrstuG"};

    string message {};
    string encoded {};
    string decoded {};

    cout<<"Type in your message: ";
    getline(cin, message);

    cout<<"\nEncrypting..........."<<endl;
    for (auto c : message){
        if (isalpha(c)){
            int i {0};
            i = alphabet.find(c);
            encoded += key.at(i);
        }
        else{
            encoded += c;
        }
    }
    cout<<"Your encrypted message is: " <<encoded<<endl;

    cout<<"\nDecrypting............"<<endl;
    for (auto c : encoded){
        if (isalpha(c)){
            int i {0};
            i = key.find(c);
            decoded += alphabet.at(i);
        }
        else{
            decoded += c;
        }
    }
    cout<<"The decoded message is: "<<decoded<<endl;

    return 0;
}