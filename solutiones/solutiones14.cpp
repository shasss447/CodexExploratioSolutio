#include <iostream>
using namespace std;
# define NO_OF_CHARS 256
 
class gfg
{
    public :
     
    /* Fills count array with
    frequency of characters */
    void fillCharCounts(char *str, int *count)
    {
        int i;
        for (i = 0; *(str + i); i++)
        count[*(str + i)]++;
    }
 
    /* Print duplicates present
    in the passed string */
    void printDups(char *str)
    {
         
        // Create an array of size 256 and fill
        // count of every character in it
        int *count = (int *)calloc(NO_OF_CHARS,
                                      sizeof(int));
        fillCharCounts(str, count);
 
        // Print characters having count more than 0
        int i;
        for (i = 0; i < NO_OF_CHARS; i++)
        if(count[i] > 1)
            printf("%c, count = %d \n", i, count[i]);
 
        free(count);
    }
};
 
/* Driver code*/
int main()
{
    gfg g ;
    char str[] = "test string";
    g.printDups(str);
    //getchar();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
 
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
/* Driver code*/
int main()
{
    string str = "test string";
    printDups(str);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;  //increase the count of characters by 1
    }
  
    for (auto it : count) {   //iterating through the unordered map
        if (it.second > 1)   //if the count of characters is greater than 1 then duplicate found
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
/* Driver code*/
int main()
{
    string str = "test string";
    printDups(str);
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
void printDuplicates(string str){
        int len = str.length();
     
    // Sorting the string
    sort(str.begin(), str.end());
     
    // Loop through the sorted string to find duplicates
    for(int i = 0; i < len; i++) {
        int count = 1;
         
        // Counting the occurrences of each character
        while(i < len-1 && str[i] == str[i+1]) {
            count++;
            i++;
        }
         
        // Printing the duplicate character and its count
        if(count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
    }
     
}
int main() {
    string str = "test string";
    printDuplicates(str);
    return 0;
}