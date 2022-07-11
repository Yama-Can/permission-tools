#include <iostream>
#include <vector>
#include <string>
using namespace std;
int inf(), help(), cal(bool explanation);
int main(int argc, char** argv)
{
    string opt;
    if (argc == 1)
    {
        help();
        return 0;
    }
    else
    {
        opt = argv[1];
    }
    if (opt == "--inf" || opt == "-i" || opt == "inf")
    {
        inf();
        return 0;
    }
    if (opt == "--cal" || opt == "-c" || opt == "cal")
    {
        bool explanation = false;
        if (argc == 3)
            if (argv[2] == "--explanation")
                explanation = true;
        cal(explanation);
        return 0;
    }
    if (opt == "--help" || opt == "-h" || opt == "help")
    {
        help();
        return 0;
    }
}

int inf()
{
    int i = 1;
    while (true)
    {
        cout << i << endl;
        i *= 2;
    }
}

int cal(bool explanation)
{
    if (explanation)
        cout << "OK. Please enter the number of elements:";
    int k;
    cin >> k;
    if (explanation)
        cout << "Thanks.Thank you. Next, use 1 when it is true and 0 when it is false to enter the permission." << endl
        << "Example: 1 0 0 0" << endl
        << "Result : 1 " << endl
        << " Example : 1 1 0 " << endl
        << " Result : 3 " << endl
        << " Also, the number of elements to be inserted must be equal to the number of elements to be inserted earlier.";
    vector<int> input = {};
    int inputnum;
    for (int i = 0; i < k; i++)
    {
        cin >> inputnum;
        input.push_back(inputnum);
    }
    int p = 0, i2 = 1;
    for (int i = 0; i < k; i++)
    {
        if (input[i] == 1)
            p += i2;
        i2 *= i2;
    }
    if (explanation)
        cout << "Thank you. The permission integer was " << p << "." << endl;
    cout << p << endl;
    return 0;
}

int help()
{
    cout << "--inf:output infinity permissions." << endl;
    cout << "   example out put:";
    cout << "       1" << endl
        << "       2" << endl
        << "       4"
        << "       8" << endl;
    cout << "--cal:calculate permission number." << endl;
    cout << "   example in put:" << endl;
    cout << "       --cal " << endl
        << "        5" << endl
        << "        1 0 1 0 1" << endl;
    cout << "   example out put:" << endl;
    cout << "       21" << endl;
    cout << "   example in put:" << endl;
    cout << "       --cal " << endl
        << "        3" << endl
        << "        1 1 1" << endl;
    cout << "   example out put:" << endl;
    cout << "       7" << endl;
    cout << "   Adding \"--explanation\" at the end will explain it in the middle." << endl;
    return 0;
}