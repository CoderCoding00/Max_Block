// Problem 24 Max Block

// Given an input string, set result to the length of the largest "block" in the string.
// A block is a run of adjacent chars that are the same.
// • for input of "hoopla" -> 2
// • for input of "abbCCCddBBBxx" -> 3
// • for input of"" -> 0

#include <iostream>
#include <string>
using namespace std;

int maxBlock(const string &str)
{
   int result = 0;       // set int to zero
   int len = str.size(); // declare len set to str.size();
   char current;         // declare current
   char prev = 0;        // initialized to 0
   int run = 1;          // keeps track amount of run in str
   int maxRun = 0;       // keeps tracks of the largest run found so far

   for (int i = 0; i < len; i++) // declare and set i = 0; i is less than len
   {
      current = str[i];

      if (prev != current)
      {
         if (run > maxRun)
            maxRun = run;
         run = 1;
      }
      else
         run++;

      prev = current;
   }
   return maxRun;
}

int main()
{

   cout << "Testing maxBlock(\"hoopla\"): " << maxBlock("hoopla") << endl;
   cout << "Testing maxBlock(\"abbCCCddBBBxx\"): " << maxBlock("abbCCCddBBBxx") << endl;
   cout << "Testing maxBlock(\"\"): " << maxBlock("") << endl;
   return 0;
}