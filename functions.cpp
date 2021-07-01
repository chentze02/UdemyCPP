#include <iostream>
#include <vector>
using namespace std;

void print_list(const vector <int> &nums);
double calc_mean(const vector <int> &nums);
int smallest_num(const vector <int> &nums);
int largest_num(const vector <int> &nums);

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
        
        switch(toupper(selection)){
            case 'P':
            {
                print_list(nums);
                break;
            }
            case 'A':
            {
                int num {};
                cout<<"Enter a number to add: ";
                cin>>num;
                while (!cin){
                    cout<<"Invalid input!"<<endl;
                    cin.clear();
                    cin.ignore();
                    cout<<"Enter a valid number to add: ";
                    cin>>num;
                }
                nums.push_back(num);
                print_list(nums);
                break;
            }
            case 'M':
            {
                cout<<"The mean is "<< calc_mean(nums) << "."<<endl;
                break;
            }
            case 'S':
            {
                cout<<"The smallest number is "<<smallest_num(nums)<<'.'<<endl;
                break;
            }
            case 'L':
            {
                cout<<"The largest number is "<<largest_num(nums)<<'.'<<endl;
                break;
            }
            case 'Q':
            {
                cout<<"Goodbye bro!"<<endl;
                break;
            }
            default:
                cout<<"That is not a valid selection!"<<endl;
                break;
        }

    } while (toupper(selection) !='Q');

    return 0;
}

void print_list(const vector <int> &nums){
    if (nums.size() == 0){
        cout<<"Your list is empty!";
    }else{
        for (auto num : nums){
            cout<<num<<endl;
        }
    }
}

double calc_mean(const vector <int> &nums){
    int sum {};
    for (auto num : nums){
        sum += num;
    }
    return sum/nums.size();
}

int smallest_num(const vector <int> &nums){
    int smallest {INT_MAX};
    for (auto num : nums){
        if (num < smallest){
            smallest = num;
        }
    }
    return smallest;
}

int largest_num(const vector <int> &nums){
    int largest {INT_MIN};
    for (auto num : nums){
        if (num > largest){
            largest = num;
        }
    }
    return largest;
}
