#include<iostream>
using namespace std;
int main()
{
   int min, fps, frames;
   cout << "Number of Minutes: ";
   cin >> min;
   cout << "Frames per Second: ";
   cin >> fps;
   frames = fps * (min * 60);
   cout << "Total Number of Frames: " << frames;
}