#include <iostream>
#include <initializer_list>
#include <string>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

namespace A
{
    int value = 10;
}
namespace B
{
    int value = 20;
}

void ex_02_47(){

    cout << "A : " << A::value << endl;
    cout << "B : " << B::value << endl;

}

void ex_02_49(){
    
    enum class Menu{
        Insert = 1,
        Dlete,
        Update
    };

    int num;

    while(1){

        cout << "정수 입력 : ";

        cin >> num ;

        Menu Me = static_cast<Menu>(num);

        if(Me == Menu::Insert){

            cout << "       Insert" << endl;

        } else if(Me == Menu::Dlete){

            cout << "       Dlete" << endl;

        } else

        if(Me == Menu::Update){

            cout << "       Update" << endl;

        } else{

            break;

        }

    }


}

void ex_02_50(){

    double price{3500.75};
    auto count{3.5};
    auto total{price * count};

    count = static_cast<int>(count);
    total = static_cast<int>(total);

    std::cout << "count = " << count << '\n';
    std::cout << "total = " << total << '\n';


}

void ex_02_51(){

    array<int, 5> arr;

    for(int i = 0; i < 5; i++){

        cin >> arr[i];

    }

    int sum = 0;

    sort(arr.begin(), arr.end());

    int max = arr[4];

    for (int data : arr){

        sum += data;

    }

    cout << "sum = " << sum << endl;
    cout << "max = " << max << endl;

}

void ex_02_52(){

    vector<int> arr(5);
    int count = 0;

    cout << "정수 5개 입력 > ";

    for(int i = 0; i < 5; i++){

        cin >> arr[i];

    }   

    for(int data : arr){

        if(data % 2 == 0){

            cout << data << " ";
            count++;

        }

    }

    cout << endl;

    cout << "count = " << count << endl;

}

void printResult(initializer_list<int> values) {
    
    int sum = 0, count = 0;

    for(int data : values){

        if(data >= 5 ){

            count++;
            sum += data;

        }

    }

    cout << "count = " << count << endl;
    cout << "sum = " << sum << endl;

}

void ex_02_53(){

    printResult({3, 8, 2, 10, 5});
 
}



int main()
{

    // ex_02_47();
    // ex_02_49();
    // ex_02_50();
    // ex_02_51();
    // ex_02_52();
    ex_02_53();


    return 0;
}