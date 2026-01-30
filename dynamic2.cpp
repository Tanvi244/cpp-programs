

class Demo

{   public:

           int i,j,k;
           Demo()
           {

            cout<<"inside constructor\n";
           }

           void Display()
           {

             cout<<"inside destructor\n";
           }

           ~Demo()
           {
              cout<<"inside destructor\n";
           }
  void Display()
  {
    cout<<"inside display\n";
  }
          };


          int main()

          {
            Demo obj1;
            obj1.Display();


            Demo *ptr  = new Demo;
             
             ptr->Display();
             delete ptr;


            return 0;
          }