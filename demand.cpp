#include <iostream>
using namespace std;

int main() {
  int priceValue1; 
  cout << "What is the first price value?:"; 
  cin >> priceValue1;

  int priceValue2;
  cout << "What is the second price value?:"; 
  cin >> priceValue2;
  
  int priceValue3;
  cout << "What is the first demand value?:"; 
  cin >> priceValue3;
  
  int priceValue4;
  cout << "What is the second demand value?:"; 
  cin >> priceValue4;
  
  cout << endl; 
  
 //This finds the slope/b value of your question
  
  int b1 = priceValue4 - priceValue3;
  int b2 = priceValue2 - priceValue1;
  int bFin = b1/b2;
  cout << bFin;

  cout << endl;
  cout << endl;

  int a = priceValue3 - bFin * priceValue1;

  cout << a << endl;
  
  cout << endl;
  cout << endl;
  // This outputs and prints your necessary anser; the demand formula with the necessary values. 
  cout << "The demand equation is then " << "Q = " << a << " + " << bFin << "P";
  if (bFin < 0){
    cout << "The demand equation is then " << "Q = " << a << bFin << "P";
  }else{
    cout << "The demand equation is then " << "Q = " << a << " + " << bFin << "P";
  }
  
  
  return 0;
  
  

  
  
}



