
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;


int main(){
   string user_data;
   cout << "Please input 128 KB of data" << endl;
   getline(cin, user_data, '\n');
   double size_in_kb = sizeof(user_data) / 1024.0;
   cout << "Your input was: " << size_in_kb << " KB" << endl;
   cout << "It says: " << user_data << endl;
}