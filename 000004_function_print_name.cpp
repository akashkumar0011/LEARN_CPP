#include<iostream>
using namespace std;

   namespace first
{
   void show()
{
   cout<<"akash"<<endl;
}
}
   namespace second
{
   void show()
{
   cout<<"kumar"<<endl;
}
}
   int main()
{
   first::show();
   second::show();
   return 0;
}