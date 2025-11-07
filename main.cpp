using namespace std;
#include <iostream>
#include <vector>


int main()
{
    int char_limit = 128;
    string data = "";
    cout << "Please enter the data to be translated into a wave: !CHAR LIMIT " << char_limit << "!" << endl;
    do
    {
        cout << "Please make sure your data is less then 128 chars" << endl;
        getline(cin, data);
    } while (data.length() > 128);
    cout << "Your data is:" << endl;
    cout << data;
    return 0;
}
