// Write a c++ program to store roll number of 5 students and display all the roll numbers entered by user 

#include <iostream>
using namespace std;

int main() {
    int roll[5];

    for(int i = 0;i<5;i++){
        cout<<"Enter student "<<i+1 <<" roll number: ";
        cin>>roll[i];
    }
    cout<<"\n";

    for(int i = 0;i<5;i++){
        cout<<"The roll number student "<<i+1<<" is: "<<roll[i]<<"\n";
    }

    return 0;

}
