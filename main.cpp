#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int square(string a){
   int b = stoi(a);
   return b*b;

}

int main(){
   string lineInput;
   while(cin >> lineInput){
      cout<<square(lineInput)<<endl;
   }
   return 0;
}
