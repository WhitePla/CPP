#include <iostream>
#include <initializer_list>
#include <string>
using namespace std;

void ex_12()
{

    enum class Join
    {
        Rack = 1,
        Paper,
        Scissors
    };

    int num;

    while (1)
    {
        // static_cast나 const_cast의 <>과()의 순서 ()를 <>의 데이터형 값으로 변환시키겠다
        // ex) static_cast<int>(double) == 식별자double을 int형으로 변환하겠다
        cout << "정수 입력 (1, 2, 3이 아닌 수는 프로그램 종료) : ";
        cin >> num;

        Join jo = static_cast<Join>(num);

        if (jo == Join::Rack) {

            cout << "       Rack" << endl;

        } else if (jo == Join::Paper) {

            cout << "       Paper" << endl;

        } else if (jo == Join::Scissors) {

            cout << "       Scissors" << endl;

        } else {

            break;
        }
    }
}

void ex_13(){

    double num;

    cout << "실수를 입력하세요 : ";
    cin >> num;

    cout << endl;
    
    int intPart = static_cast<int>(num); //double형을 int형으로 변환하는 방식이다
    double decPart = num - intPart; //int형으로 바꾼 값을 기존에 입력한 값에 빼는 방식으로 소수를 남겼다

    cout << "정수 part : " << intPart << endl;
    cout << "소수 part : " << decPart << endl;


}

auto list_exam(initializer_list<string> value, string S){

    string save = "a";
    int Min = 9999;

    for(auto data : value){

        int dig = abs(S[0] - data[0]);

        if(dig < Min){

            Min = dig;
            save = data;

        }

    }

    return save;

}

void ex_14(){

    cout << "{ 'd', 'p', 'r', 'w', 'g', 'f' }문자 중 h와 가까운 문자는 : " ;
    cout << list_exam({ "d", "p", "r", "w", "g", "f" }, "h") << endl;

    cout << "{ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}문자 중 w와 가까운 문자는 : ";
    cout << list_exam({ "k", "q", "b", "r", "a", "e", "v", "z"}, "w") << endl;

}

int main()
{

    // ex_12();
    // ex_13();
    ex_14();
    // ex_15();

    return 0;
}