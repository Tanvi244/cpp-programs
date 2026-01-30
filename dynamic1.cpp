#include<stdio.h>
#include<stdlib.h>   //all allowedvastat c che c++ la
using namespace std;



int main()
{

     int Arr [5];  //static
     int *ptr1 = (int *)malloc(5 * sizeof(int));  //c
      int *ptr2 = new int [5];  //c++ dynamic
      free (ptr1);
      delete ptr2[];



    return 0;
}