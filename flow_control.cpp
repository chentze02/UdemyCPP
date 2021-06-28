#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    char selection;

    do{
        cout<<"\n========Menu========"<<endl;
        cout<<"Print - P"<<endl;
        cout<<"Add - A"<<endl;
        cout<<"Calculate Mean - M"<<endl;
        cout<<"Display smallest - S"<<endl;
        cout<<"Display largest - L"<<endl;
        cout<<"Quit - Q"<<endl;
        cout<<"Enter your selection: ";
        cin>>selection;

        switch(selection){
            case 'P':
            case 'p':
            {
                if (nums.size() == 0){
                    cout<<"Your list is empty!";
                }else{
                    for (auto num : nums){
                        cout<<num<<endl;
                    }
                }
                break;
            }
            case 'A':
            case 'a':
            {
                int num {};
                cout<<"Enter a number to add: ";
                cin>>num;
                nums.push_back(num);
                for (auto num : nums){
                    cout<<num<<endl;
                }
                break;
            }
            case 'M':
            case 'm':
            {
                int sum {};
                for (auto num : nums){
                    sum += num;
                }
                cout<<"The mean is "<< sum/nums.size() << "."<<endl;
                break;
            }
            case 'S':
            case 's':
            {
                int smallest {INT_MAX};
                for (auto num : nums){
                    if (num < smallest){
                        smallest = num;
                    }
                }
                cout<<"The smallest number is "<<smallest<<'.'<<endl;
                break;
            }
            case 'L':
            case 'l':
            {
                int largest {INT_MIN};
                for (auto num : nums){
                    if (num > largest){
                        largest = num;
                    }
                }
                cout<<"The largest number is "<<largest<<'.'<<endl;
                break;
            }
            case 'Q':
            case 'q':
            {
                cout<<"Goodbye bro!"<<endl;
                break;
            }
            default:
                cout<<"That is not a valid selection!"<<endl;
                break;
        }

    } while (selection !='Q' && selection != 'q');

    return 0;
}