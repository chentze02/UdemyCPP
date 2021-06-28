#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector <vector<int>> vector_2d {};
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"Elements of vector 1: "<<vector1.at(0)<<","<<vector1.at(1)<<"Size: "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"Elements of vector 2: " <<vector2.at(0)<< ","<<vector2.at(1)<<"Size: "<<vector2.size()<<endl;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"Elements of row 1 of 2D vector: " << vector_2d.at(0).at(0) <<","<<vector_2d.at(0).at(1)<<endl;
    cout<<"Elements of row 2 of 2D vector: " << vector_2d.at(1).at(0) <<","<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0) = 1000;
    cout<<"New elements of row 1 of 2D vector: " << vector_2d.at(0).at(0) <<","<<vector_2d.at(0).at(1)<<endl;
    cout<<"New elements of row 2 of 2D vector: " << vector_2d.at(1).at(0) <<","<<vector_2d.at(1).at(1)<<endl;
    cout<<"New elements of vector 1: "<<vector1.at(0)<<","<<vector1.at(1)<<"Size: "<<vector1.size()<<endl;

    return 0;

}