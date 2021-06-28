#include <iostream>

using namespace std;

int main(){
    int price_s_room {25};
    int price_l_room {35};
    float tax_rate {6};
    int validity {30};
    int smalls {0};
    int larges{0};

    cout<<"Hello! Welcome to Cleaner's Express!"<<endl;
    cout<<"How many small rooms do you want cleaned?"<<endl;
    cin>>smalls;
    cout<<"How many large rooms do you want cleaned?"<<endl;
    cin>>larges;

    int cost {price_l_room*larges + price_s_room*smalls};
    float tax {tax_rate*cost/100};
    float total {tax+cost};

    cout<<"Estimate for cleaning service"<<endl;
    cout<<"Number of small rooms: "<<smalls<<endl;
    cout<<"Number of large rooms: "<<larges<<endl;
    cout<<"Price per small room: $"<<price_s_room<<endl;
    cout<<"Price per large room: $"<<price_l_room<<endl;
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"============================="<<endl;
    cout<<"Total estimate: $"<<total<<endl;
    cout<<"This estimate is valid for "<<validity<<" days."<<endl;

    return 0;
}