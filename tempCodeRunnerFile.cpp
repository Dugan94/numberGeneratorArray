#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  vector<int> vector_1;
  
  int counters[101] = {0};

  
    srand((unsigned)time(0));
    
        cout << "Array of 30 random numbers: " << endl;

    for (int i =0; i < 30; i++)

    { 
      
        int b = rand() % 101;
        vector_1.push_back(b);
        
        cout << b << " ";
        if (i == 14)
         cout << endl; 

         counters[b]++;
    }
      
   for (int j =0; j <15; j ++)
      {
        counters[vector_1[j] ] += 1;
      } 
        cout << endl;
      
      int index = 0; 
      int max = counters[0];

    for (int i = 1; i < 30; i++)
    {
      if (counters[i] > max)
      {
        index = i;
        max = counters[i];
      }
      
    } 

    cout << "Number " << index << " appeared " << max << " times." << endl;

    return 0;
    
} 
