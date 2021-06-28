#include <iostream> //preprocessor directives
using std::cout;
using std::cin;
using std::cout;
using std::endl;

/*
Ways to write main() function:
int main(){

}
or
int main(argc, char *argv[]){

}
argc is argument count
argv is argument vector

*/
int main(){
    int favourite_number;
    cout<< "Enter your favourite number between 1 and 100: ";
    cin>>favourite_number;
    cout<<"Amazing! I love that number too!"<<endl;
    cout<<"No really! "<<favourite_number<<" is my favourite number too!"<<endl;

    int test = 10;
    if (test < 6){
        cout<<test;
        cout<<"Next line";
    }
        
    return 0;
}

/*
Namespaces:
namespaces prevent naming conflicts between libraries.
to use something from a certain namespace we use the scope resolution operator ::

Tedious to write the namespace everytime, so we can use:
using namespace std; at the start of the program

we can also use only the namespace variables we need by:
using std::cout; etc.

*/