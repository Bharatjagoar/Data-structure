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
        return "One ";
        break;
    case 3:
        return "Three ";
        break;
    case 4:
        return "Four ";
        break;
    case 2:
        return "Two ";
        break;
    case 5:
        return "Five ";
        break;
    case 6:
        return "Six ";
        break;
    case 7:
        return "Seven ";
        break;
    case 8:
        return "Eight ";
        break;
    case 9:
        return "Nine ";
        break;
    default:
        break;
    }
    return "";
}

string helper(int a, int b)
{

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
        return "Twenty ";
        break;
    case 3:
        return "Thirty ";
        break;
    case 4:
        return "Forty ";
        break;
    case 5:
        return "Fifty ";
        break;
    case 6:
        return "Sixty ";
        break;
    case 7:
        return "Seventy ";
        break;
    case 8:
        return "Eighty ";
        break;
    case 9:
        return "Ninety ";
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
        return "Thousand ";
        break;
    case 3:
        return "Million ";
        break;
    case 4:
        return "Billion ";
        break;
    default:
        break;
    }
    return "";
}

string In_words(int a)
{
    if (a == 0)
    {
        return "Zero";
    }
    string final = "", ans = "";
    vector<int> number;
    while (a != 0)
    {
        number.push_back(a % 10);
        cout<<a%10<<" ";
        a = a / 10;
    }
    cout<<endl;
    int size = number.size();
    int j = 0, placevalue = 1;

    while (j + 2 < number.size())
    {
        int countZero = 0;
        for (int i = 0; i < 3; i++)
        {
            int len = 0;
            cout<<"number @ ith ::" << number[i + j]<<"\t"<<countZero<<endl;
            if (i == 0)
            {
                
                if ((number[j + i] != 0))
                {
                    
                    ans = getOnesDigit(number[i + j]);
                    len = ans.length();
                    cout<<"AAAAAAAAAAAAAAAAAAAAAAAA         "<<len<<ans<<endl;
                    int temp = getPlaceValue(placevalue).length();
                    cout<<getPlaceValue(placevalue)<<temp<<endl;
                    final = ans + getPlaceValue(placevalue) + final;
                }else{
                    countZero++;
                    ans = "";
                    final = getPlaceValue(placevalue) + final;
                }
            }
            if (i == 1)
            {
                if (number[j + i] != 0)
                {
                    if (number[i+j] == 1){

                        // ans = "";
                        cout<<ans.length()<< "       "<<final <<"Jagoar Jagoar Jagoar   "<<ans<<endl;
                        final.erase(0,ans.length());

                        ans = helper(number[(j + i) - 1], number[j + i]);
                        final = ans + " " + final;
                    }else{
                        cout<<"AAAAAAAAAAAAAAAAAAAAAAAA   "<<i+j<<endl;
                        cout<<len<<endl;
                        final.erase(0,len);
                        ans = helper(number[(j + i) - 1], number[j + i]);
                        final = ans + final;
                    }    
                    
                }else{
                    countZero++;
                }
            }
            if (i == 2)
            {
                if (number[j + i] != 0)
                {
                    ans = getOnesDigit(number[i + j]) + "Hundred ";
                    final = ans + final;
                }else{
                    countZero++;
                    cout<<"kumar"<<endl;
                    if(countZero==3){
                        int temp = getPlaceValue(placevalue).length();
                        final.erase(0,temp);
                    }
                }
                placevalue++;
            }
            cout << i + j << " ------------------ " << final << endl;
        }

        j += 3;
    }
    cout << final<<" bharat "  << getPlaceValue(placevalue) << endl;

    for (int i = 0; i + j < number.size(); i++)
    {
        int length = 0;
        if (i == 0)
        {
            if (number[j + i] != 0 )
            {
                ans = getOnesDigit(number[i + j]);
                length = ans.length();
                final = ans + getPlaceValue(placevalue) + final;
                
            }else{
                final = getPlaceValue(placevalue) + final;
            }
        }
        if (i == 1)
        {
            if (number[j + i] != 0)
            {
                cout<<"fdsafdsafdsafdsafdsafdsafdsafdsafdsafdsa"<<final<<endl;
                if (number[i+j] == 1){
                    // final.erase(0,length);
                    final==""?cout<<"hello from bharat "<<endl:cout<<"bye"<<endl;
                    if(final == ""){
                        final = getPlaceValue(placevalue);
                    }
                    final.erase(0,ans.length());
                    ans = helper(number[(j + i) - 1], number[j + i]);
                    final = ans +" "+ final;
                }else{
                    
                    ans = helper(number[(j + i) - 1], number[j + i]);
                    final = ans + final;
                }
                    
                
            }
        }
    }

    // cout<<number[j]<<endl;
    size = final.length();
    while (final[size - 1] == ' ')
    {
        final.resize(final.size() - 1);
    }
    return final;
}
int main()
{
    // cout << "hello world" << endl;

    cout << In_words(1010101) << endl;

    return 0;
}
// 11811911
// 11011081