#include <iostream>

using namespace std;


int main() {


  int a;

  cin>>a;



  int rev = 0;

  while(a>0)

  {

      int r = a%10;

      a = a/10;


      rev = (rev*10 + r);



  }

  cout<<int(rev)<<endl;

  return 0;

}

