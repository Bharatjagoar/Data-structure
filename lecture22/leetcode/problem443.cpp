#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ham yaha two pointer se questtion solve karenge ,
// both will be at zero . j will move when detecting same character windows , i will jump to j when different character is detected.






int GetTheLength(vector<char> chars)
{
    int i = 0, j = 1;
    char ch = chars[0];

    int indexStored = 0;
    if (chars.size() == 1)
        return 1;
    while (j < chars.size())
    {
        
        if (chars[j] != ch)
        {
            int count = j - i;
            if(count==1){
                chars[i] = ch;
                indexStored=i+1;
                ch = chars[j];
                i = j;
                j++;
                continue;
            }
            


            chars[i] = ch;
            i++;
            int place = 0;
            while (to_string(count).length() > place)
            {
                chars[place + i] = to_string(count)[place];
                place++;
            }

            indexStored = place + i;

            ch = chars[j];
            i = j;
        }

        j++;
    }
    int count = j - i;
    
    i= indexStored;
    chars[i] = ch;
    i++;
    int place = 0;
    while (to_string(count).length() > place)
    {
        chars[place + i] = to_string(count)[place];
        place++;
    }
    
    
    place = indexStored+to_string(count).length();
    cout<<place <<endl;
    
    int last =chars.size()-1;
    chars.resize(place+1);
    
    
    for(auto x : chars){
        cout<<x<<" ";
    }


    return (int) chars.size();
}

int main()
{

    vector<char> chars = {'a','a','a','b','b','a','a'};

    cout<<endl<<GetTheLength(chars)<<endl;
    return 0;
}