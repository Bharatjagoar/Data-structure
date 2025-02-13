#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// yha kaam triplets me hoga
// kisi bhi triplet me pehle 2 digits check krne pdenge , mtlb
// ye dekhna pdega ki kahi 2 digit 1 to nhi hai agar hai

// what if second number is zero to return ""

// three cases hai hamare pass
// 1 that second number is 0 return the word for  first digit
// 2 that second numer is 1 then handle accordingly
// other then 1 ya 2 hai to return repective number like of 41 return forty one  etc

// algorithm
// check for 2 digit first
// then check the first digit

string getOnesDigit(int a)
{
    switch (a)
    {
    case 0:
        return "";
        break;
    case 1:
        return "One";
        break;
    case 3:
        return "Three";
        break;
    case 4:
        return "Four";
        break;
    case 2:
        return "Two";
        break;
    case 5:
        return "Five";
        break;
    case 6:
        return "Six";
        break;
    case 7:
        return "Seven";
        break;
    case 8:
        return "Eight";
        break;
    case 9:
        return "Nine";
        break;
    default:
        break;
    }
    return "";
}

string helper(int a, int b)
{
    cout << a << b << endl;
    switch (b)
    {
    case 1:
        switch (a)
        {
        case 0:
            return "Ten";
            break;
        case 1:
            return "Eleven";
            break;
        case 2:
            return "Twelve";
            break;
        case 3:
            return "Thirteen";
            break;
        case 4:
            return "Fourteen";
            break;
        case 5:
            return "Fifteen";
            break;
        case 6:
            return "Sixteen";
            break;
        case 7:
            return "Seventeen";
            break;
        case 8:
            return "Eighteen";
            break;
        case 9:
            return "Nineteen";
            break;
        default:
            break;
        }
        break;
    case 0:
        return getOnesDigit(a);
        break;
    case 2:
        return "Twenty " + getOnesDigit(a);
        break;
    case 3:
        return "Thirty " + getOnesDigit(a);
        break;
    case 4:
        return "Forty " + getOnesDigit(a);
        break;
    case 5:
        return "Fifty " + getOnesDigit(a);
        break;
    case 6:
        return "Sixty " + getOnesDigit(a);
        break;
    case 7:
        return "Seventy " + getOnesDigit(a);
        break;
    case 8:
        return "Eighty " + getOnesDigit(a);
        break;
    case 9:
        return "Ninety " + getOnesDigit(a);
        break;
    default:
        break;
    }
    return "";
}

string getPlaceValue(int a)
{
    switch (a)
    {
    case 1:
        return "";
        break;
    case 2:
        return " Thousand ";
        break;
    case 3:
        return " Million ";
        break;
    case 4:
        return " Billion ";
        break;
    default:
        break;
    }
    return "";
}

string In_words(int number)
{
    // 456

    vector<int> num;
    while (number != 0)
    {
        num.push_back(number % 10);
        number /= 10;
    }
    if (num.size() <= 2)
    {
        if (num.size() == 2)
            return helper(num[0], num[1]);
        else
        {
            return getOnesDigit(num[0]);
        }
    }
    int indecies = (num.size() - 1) / 3;

    int count = 0, placevaluecount = 0;
    string ans = "", final = "";
    for (int i = 0; i < num.size(); i++)
    {

        count++;
        if (count == 1)
        {
            placevaluecount++;
            if (i + 1 == num.size())
            {
                ans = getOnesDigit(num[i]) +
                      getPlaceValue(placevaluecount) + final;
                final = ans;
            }
        }
        if (count == 2)
        {
            ans = helper(num[i - 1], num[i]);
            if (i + 1 == num.size())
            {
                final = ans + getPlaceValue(placevaluecount) + final;
            }
            // cout << ans << endl;
            // count=0;
        }
        if (count == 3)
        {

            // yaha pe swtich case lagega i mean million trillion wala;

            // cout<<num[i]<<endl;
            cout <<"fdsa:: "<< ans << endl;
            if (ans == "" && num[i] == 0)
            {
                ans = getOnesDigit(num[i]) + ans + "" +
                      getPlaceValue(placevaluecount);
            }
            else
            {
                if (num[i] != 0)
                {
                    
                    ans = getOnesDigit(num[i]) + " Hundred " + ans + "" + getPlaceValue(placevaluecount);
                    final = ans + final;
                }else{
                    cout<<"hello"<<ans<<":FDSA"<<endl;
                    ans = getOnesDigit(num[i]) + ans + "" + getPlaceValue(placevaluecount);
                    final = ans + final;
                }
            }

            // final+=ans;
            cout << ans << endl;
            count = 0;
        }
        // cout << num[i] << " ";
    }
    // cout<<final<<endl;
    return final;
}
int main()
{
    // cout << "hello world" << endl;

    cout << In_words(20020073) << endl;

    return 0;
}