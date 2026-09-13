#include <iostream>
#include <iomanip>

#include <string>

using namespace std;

int main(){

  double Qz, Jo, Gi, sum;

  cout << "퀴즈, 중간고사, 기말고사 성적을 입력하세요 : ";

  cin >> Qz >> Jo >> Gi;

  sum = Qz + Jo + Gi;

  cout << "total : " << fixed << setprecision(2) << sum << endl;
  
  cout << "average : " << fixed << setprecision(2) << sum / 3 << endl;

  return 0;

}