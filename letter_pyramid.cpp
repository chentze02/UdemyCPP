#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string chars;
    cout<<"Please input your string: ";
    cin>>chars;

    int length = chars.length();
    for(int i = 0; i<length; i++){
        string substring = chars.substr(0, i+1);
        string reversed_substring = substring;
        reverse(reversed_substring.begin(), reversed_substring.end());
        cout<<string((length-i-1), ' ')<<substring<<reversed_substring.substr(1, i)<<endl;
    }
    return 0;
}