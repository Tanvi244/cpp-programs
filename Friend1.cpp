#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20; 
            k = 30;
        }
};
void Display()
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";
}

int main()
{
    Display();

    return 0;
}



import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Myframe extends JFrame implements ActionListener{

    JLabel label1,label2,label3,label4,label5,label6;
    JTextField t1,t2,t3,t4;
    JRadioButton male,female;
    JComboBox day,month,year;
    JCheckBox terms;
    JButton submit;
    JLabel msg; 
    JTextArea screen;

    
    Myframe(){
    
        setTitle("FLIGHT DETAILS");
        setSize(700,500);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE); 
        Container c=getContentPane();
        c.setLayout(null);

        label1=new JLabel ("Name");
        label1.setBounds(20,50,100,20);
        c.add(label1);

        t1=new JTextField();
        t1.setBounds(130,50,100,20);
        c.add(t1);

       
        
        label2=new JLabel ("Flight class");
        label2.setBounds(20,100,100,20);
        c.add(label2);

        t2=new JTextField();
        t2.setBounds(130,100,100,20);
        c.add(t2);

        label3=new JLabel("Gender");
         label3.setBounds(20,150,100,20);
         c.add(label3);


 male=new JRadioButton("Male");
 female=new JRadioButton("FeMale");

           male.setBounds(130,150,80,20);
        female.setBounds(220,150,80,20);
        male.setSelected(true); 

          c.add(male);
        c.add(female);

        
        ButtonGroup gen=new ButtonGroup(); 
        gen.add(male);
         gen.add(female);

        
        label4=new JLabel("Flight date");
         label4.setBounds(20,200,100,20); //sizevbox
         c.add(label4);

         
         String[] days={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21",
                       "22","23","24","25","26","27","28","29","30","31"};
         String months[]={"Jan","Feb","Mar","Apr","May","Jun","July","Sep","Oct","Nov","Dec"};
         String years[]={"2025","2024","2023","2022","2021","2020","2019","2018","2017","2016","2015","2014","2013","2012","2011","2010","2009","2008","2007","2006","2005",
                          "2004","2003","2002","2001","2000","1999","1998"};              

         day=new JComboBox(days);
           month=new JComboBox(months);
             year=new JComboBox(years);

         day.setBounds(130,200,50,20);
         month.setBounds(190,200,50,20);
         year.setBounds(250,200,60,20);

         c.add(day);
         c.add(month);
         c.add(year);

         label5=new JLabel("Destination");
         label5.setBounds(20,250,250,20);
          c.add(label5);

         t4=new JTextField();

         t4.setBounds(130,260,100,20); 
          c.add(t4); 

          label6=new JLabel ("Flight charges");
        label6.setBounds(20,300,150,20); //label size
        c.add(label6);

        t3=new JTextField();
        t3.setBounds(130,300,100,20); //field sathi
        c.add(t3);





         terms=new JCheckBox("please accept terms and conditions");
         terms.setBounds(50,350,300,20);
         c.add(terms);

         submit=new JButton("Submit");
         submit.setBounds(150,380,80,20); 

          c.add(submit); 
           submit.addActionListener(this);
 

         screen=new JTextArea();
         screen.setBounds(350,50,300,300); 
          c.add(screen);

          msg=new JLabel("");
        msg.setBounds(20,400,250,20);
        c.add(msg);
        c.setBackground(Color.PINK);

        setVisible(true);
    }


public void actionPerformed(ActionEvent e){
          

          if(terms.isSelected()) {
            msg.setText("Registration successfully!!!");

            String name=t1.getText();
            String flightclass=t2.getText();
            String flightcharges=t3.getText();
             //String destination=t4.getText();
              String gender="male";
              if(female.isSelected()){
                gender="female";
              }

              String flightdate=day.getSelectedItem()+"-"+month.getSelectedItem()+"-"+year.getSelectedItem();
              String destination=t4.getText();
              screen.setText("Name : "+name+"\n"+"Flight class : "+ flightclass+"\n"+"Gender : "+gender+"\n"+"Flight date : "+flightdate+"\n"+"Destination:"+destination+"\n"+"Flight Charges: "+flightcharges);



          }

          
          else{
                 msg.setText("accept terms and conditions to submit");
                  screen.setText("");
          }
    }
}

class Ticket{

    public static void main(String args []){

        Myframe frame=new Myframe ();
    }
}



         



