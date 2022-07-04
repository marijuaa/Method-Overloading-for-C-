#include <iostream>
using namespace std;

/* 

Method Overloading nedir?


Method Overloading basit ve ilkelce, aynı  farisimdenklı methodlar türetmektir. Bunu da küçük imzalar atarak hata vermeden çalışmasını sağlamaktayız.

küçük imzalar nedir?

örnek;

int getNum(int x) {
   return x;
}

int getNum(float x) {
   return x;
}

"int x" ve "float x" oradaki küçük imzalardır.


What is Method Overloading?

Method Overloading is simple and primitive, deriving different methods from the same name. We make it work without errors by making small signatures.

What are small signatures?

sample;

int getNum(int x) {
   return x;
}

int getNum(float x) {
   return x;
}

"int x" and "float x" are small signatures there.


*/

/*


Basic Sample;
Basit Örnek;

class number {
   public:
    int x;
    int y;
    int z;
   public:
    int setNumber(int a) {
      x = a;
    }
    int setNumber(int a, int b) {
      x = a;
      y = b;
    }
    int setNumber(int a, int b, int c) {
      x = a;
      y = b;
      z = c;
    }
};


int main() {
  number a;
  a.setNumber(5,10);
  cout << a.x << " " << a.y << endl;
}

*/



class human {
   private:
    int boy;
   public:
    void setBoy(int x) {
      boy = x;
    }
    void setBoy(float x) {
      boy = x * 100;
    }
    int getBoy() {
      return boy;
    }
};


int main() {
   human ali;
   ali.setBoy(180);
   cout << ali.getBoy() << endl;
   ali.setBoy(float(1.65));
   cout << ali.getBoy() << endl;
}
