#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
//printing out the ood numbers with <cmath> sqrt
void printOddNumbers(int x){
    cout << "Odd: ";
    for(int i = 1; i <= 2 * x; i++){ 
        if(i % 2 != 0){
            cout << sqrt(i) << " ";
        }
    }
}
//printing out the even numbers with <cmath> log
void printEvenNumbers(int x){
    cout << "\nEven: ";
    for(int i = 1; i <= 2 * x; i++){
        if(i % 2 ==0){
            cout << log(x) << " ";
        }
    }

}

//method for function 1(seasons)
void printSeasons(int seasons){
    cout << "What season is it?: ";

    switch (seasons){
    case 1: 
        cout << "The Season is Summer";
        break;
    case 2:
        cout << "The Season is Autumn";
        break;
    case 3:
        cout << "The Season is Winter";
        break;
    case 4:
        cout << "The Season is Spring";
        break;
    }
    cout << endl;
}

//method for function2 (bizzbuzz)
void bizzbuzz(vector<int> nums){
    for(int i = 1; i <= nums.size(); i++){
       if(i % 2 == 0){
           cout << "bizz";
       }else if(i % 2 != 0){
           cout << "buzz";
       }
    }
}

int main(){
    //concatinating varables for first and last name 
    string firstName = " Reyes ";
    string lastName = "Huerta";
    string fullName = firstName + lastName;
    cout << "Good Morning" + fullName << endl;
    
    int x=5;
    printOddNumbers(x);
    printEvenNumbers(x);

    //String array with loop and print each element in the array
    cout << "\nThis vacation I'm going to: ";
    string events[5] = {"eat food", "kill turkeys", "rake leaves", "go on a walk", "go to St. Mary by the Sea"};
    for(int i = 0; i < 5; i++){
        cout << events[i] << endl;
    }

    //Function 1(Seasons)
    int seasons = 2;
    printSeasons(seasons);

    //Function 2(bizzbuzz)
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(2);
    bizzbuzz(nums);

    return 0;
}
    
