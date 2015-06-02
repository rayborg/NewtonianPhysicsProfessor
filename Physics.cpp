#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    while(1>0)
    {
//Numerical declarations
    int opc;
    double choice=0,A=0,Vo=0,V=0,T=0,T1=0,T2=0,X=0;
    double V1=0,V2=0,Vo1=0,A1=0,Vo2=0,A2=0,X1=0,X2=0,D=0,td=0,Vi=0,Vf=0;
    float averagevelocity=0,averagespeed=0,averageacceleration=0;
//String declaration
  string z,y;
  
  /*************************
   *acceleration="a";      *
   * initialvelocity="Vo"; *
   * finalvelocity="V";    *
   * time="t";             *
   * distance="x";         *
   *************************/
   
  //While loop used to repeat the whole program.

  //Selection of problem type
   system("cls");
  cout<<"  Hello! I am the physics professor."<<endl;
               cout<<"  Choose which type of problem you want to solve: \n";
               
               cout<<"\t  +--------------------------+ \n"
                     "\t  | 1 Average Velocity.      | \n"
                     "\t  | 2 Average Speed.         | \n"
                     "\t  | 3 Average Acceleration.  | \n"
                     "\t  | 4 Constant Velocity.     | \n"
                     "\t  | 5 Constant Acceleration. | \n"
                     "\t  | 6 Two body problems.     | \n"
                     "\t  +--------------------------+ \n\n";
               cin>>opc;
  switch(opc)
  {
             case 1:
                  system("cls");
                  cout<<"Enter initial x coordinate: ";
                  cin>>X1;
                  cout<<"Enter final x coordinate: ";
                  cin>>X2;
                  cout<<"Enter total time: ";
                  cin>>T;
                  averagevelocity=(X2-X1)/T;
                  cout<<"The average velocity is equal to "<<averagevelocity<<" m/s\n";
             break;
             case 2:
                   system("cls");
                  cout<<"Enter total distance traveled: ";
                  cin>>X;
                  cout<<"Enter total time: ";
                  cin>>T;
                  averagespeed=X/T;
                  cout<<"The average speed is equal to "<<averagespeed<<" m/s\n";
             break;
             case 3:
                   system("cls");
                  cout<<"Enter initial velocity: ";
                  cin>>Vi;
                  cout<<"Enter final velocity: ";
                  cin>>Vf;
                  cout<<"Enter total time: ";
                  cin>>T;
                  averageacceleration=(Vf-Vi)/T;
                  cout<<"The average acceleration is equal to "<<averageacceleration<<" m/s squared\n";
             break;
  case 4:
       //Beginning of constant velocity problems
   system("cls");
  cout<<"   Enter the value you need:"<<endl;
  cout<<"      +---------------+\n"
        "      | V  = Velocity |\n"
        "      | t  = Time     |\n"
        "      | x  = Distance |\n"
        "      +---------------+\n"<<endl;
  cin>>z;
  if(z=="X" || z=="x")
  {
  cout<<"Enter the total time: "<<endl;
  cin>>T;
  cout<<"Enter the velocity: "<<endl;
  cin>>V;
  cout<<"The total distance is " <<V*T<<"m."<<endl;
}
  else
  if(z=="t" || z=="T")
  {
  cout<<"Enter the total distance: "<<endl;
  cin>>X;
  cout<<"Enter the velocity: "<<endl;
  cin>>V;
  cout<<"The total time is " <<X/V<<"s."<<endl;
}
  else
  if(z=="V"|| z=="v")
  {
  cout<<"Enter the total distance: "<<endl;
  cin>>X;
  cout<<"Enter the total time: "<<endl;
  cin>>T;
  cout<<"The velocity is " <<X/T<<"m/s."<<endl;
  break;
  }
//Beginning of constant acceleration problems
  case 5:
   system("cls");
  cout<<"     Enter the values you need: "<<endl;
  cout<<"      +---------------------+\n"
        "      |a  = Acceleration    |\n"
        "      |Vo = Initial Velocity|\n"
        "      |V  = Final Velocity  |\n"
        "      |t  = Time            |\n"
        "      |x  = Distance        |\n"
        "      +---------------------+\n"<<endl;
  cin>>z>>y;
      if(((z=="A"||z=="a") || (y=="A"||y=="a")) && ((z=="Vo"||z=="vo") || (y=="Vo"||y=="vo")))
  {
                        cout<<"We need the acceleration and the initial velocity."<<endl;
                         //Request values to substitute
                        cout<<"Enter the final velocity: "<<endl;
                        cin>>V;
                        cout<<"Enter the time: "<<endl;
                        cin>>T;
                        cout<<"Enter the distance: "<<endl;
                        cin>>X;
                        A=(X-V*T)/(-.5*(pow(T,2)));
                        Vo=(2*X)/T-V;
                        cout<<"The acceleration is "<<A<<"m/s squared."<<endl;
                        cout<<"The initial velocity is "<<Vo<<"m/s."<<endl;
                        }
      else
          if(((z=="A"||z=="a") || (y=="A"||y=="a")) && ((z=="V"||z=="v") || (y=="V"||y=="v")))
  {
                        cout<<"We need the acceleration and the final velocity."<<endl;
                         //Request values to substitute
                        cout<<"Enter the initial velocity: "<<endl;
                        cin>>Vo;
                        cout<<"Enter the time: "<<endl;
                        cin>>T;
                        cout<<"Enter the distance: "<<endl;
                        cin>>X;
                        A=(X-Vo*T)/(.5*(pow(T,2)));
                        V=(2*X)/T-Vo;
                        cout<<"The acceleration is "<<A<<"m/s squared."<<endl;
                        cout<<"The final velocity is "<<V<<"m/s."<<endl;
                        }
      else
          if(((z=="A"||z=="a") || (y=="A"||y=="a")) && ((z=="T"||z=="t") || (y=="T"||y=="t")))
  {
                        cout<<"We need the acceleration and the total time."<<endl;
                        //Request values to substitute
                        cout<<"Enter the initial velocity: "<<endl;
                        cin>>Vo;
                        cout<<"Enter the final velocity: "<<endl;
                        cin>>V;
                        cout<<"Enter the distance: "<<endl;
                        cin>>X;
                        A=((pow(V,2))-(pow(Vo,2)))/(2*X);
                        T=(2*X)/(Vo+V);
                        cout<<"The acceleration is "<<A<<"m/s squared."<<endl;
                        cout<<"The total time is "<<T<<"s."<<endl;
                        }
      else
          if(((z=="A"||z=="a") || (y=="A"||y=="a")) && ((z=="X"||z=="x") || (y=="X"||y=="x")))
  {
                        cout<<"We need the acceleration and the total distance."<<endl;
                        //Request values to substitute
                        cout<<"Enter the initial velocity: "<<endl;
                        cin>>Vo;
                        cout<<"Enter the final velocity: "<<endl;
                        cin>>V;
                        cout<<"Enter the total time: "<<endl;
                        cin>>T;
                        A=(V-Vo)/T;
                        X=.5*(Vo+V)*T;
                        cout<<"The acceleration is "<<A<<"m/s squared."<<endl;
                        cout<<"The total distance is "<<X<<"m."<<endl;
                        }
      else
        if(((z=="Vo"||z=="vo") || (y=="Vo"||y=="vo")) && ((z=="V"||z=="v") || (y=="V"||y=="v")))
  {
                        cout<<"We need the initial velocity and the final velocity."<<endl;
                         //Request values to substitute
                        cout<<"Enter the acceleration: "<<endl;
                        cin>>A;
                        cout<<"Enter the time: "<<endl;
                        cin>>T;
                        cout<<"Enter the distance: "<<endl;
                        cin>>X;
                        Vo=(X-.5*A*(pow(T,2)))/T;
                        V=(X+.5*A*(pow(T,2)))/T;
                        cout<<"The initial velocity is "<<Vo<<"m/s."<<endl;
                        cout<<"The final velocity is "<<V<<"m/s."<<endl;
                        }
      else
        if(((z=="Vo"||z=="vo") || (y=="Vo"||y=="vo")) && ((z=="T"||z=="t") || (y=="T"||y=="t")))
  {
                        cout<<"We need the initial velocity and the total time."<<endl;
                         //Request values to substitute
                        cout<<"Enter the acceleration: "<<endl;
                        cin>>A;
                        cout<<"Enter the final velocity: "<<endl;
                        cin>>V;
                        cout<<"Enter the distance: "<<endl;
                        cin>>X;
  
                        Vo=pow(pow(V,2)-2*A*X,.5);
                        T1=(V+pow(pow(V,2)-4*.5*A*X,.5))/A;
                        T2=(V-pow(pow(V,2)-4*.5*A*X,.5))/A;
                        cout<<"The initial velocity is "<<Vo<<"m/s."<<endl;
                        cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
                        }
      else
          if(((z=="Vo"||z=="vo") || (y=="Vo"||y=="vo")) && ((z=="X"||z=="x") || (y=="X"||y=="x")))
  {
                        cout<<"We need the initial velocity and the total distance."<<endl;
                         //Request values to substitute
                        cout<<"Enter the acceleration: "<<endl;
                        cin>>A;
                        cout<<"Enter the final velocity: "<<endl;
                        cin>>V;
                        cout<<"Enter the time: "<<endl;
                        cin>>T;
                        Vo=V-A*T;
                        X=V*T-.5*A*pow(T,2);
                        cout<<"The initial velocity is "<<Vo<<"m/s."<<endl;
                        cout<<"The total dstance is "<<X<<"m."<<endl;
                        }     
      else
      if(((z=="V"||z=="v") || (y=="V"||y=="v")) && ((z=="T"||z=="t") || (y=="T"||y=="t")))
  {
                        cout<<"We need the final velocity and the total time."<<endl;
                         //Request values to substitute
                        cout<<"Enter the acceleration: "<<endl;
                        cin>>A;
                        cout<<"Enter the initial velocity: "<<endl;
                        cin>>Vo;
                        cout<<"Enter the total distance: "<<endl;
                        cin>>X;
                        
                        V=pow(pow(Vo,2)+ 2*A*X,.5);
                        T1=(-Vo+pow(pow(Vo,2)-4*(.5*A)*(-X),.5))/A;
                        T2=(-Vo-pow(pow(Vo,2)-4*(.5*A)*(-X),.5))/A;
                        cout<<"The final velocity is "<<V<<"m/s."<<endl;
                        cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
                        }  
      else
          if(((z=="V"||z=="v") || (y=="V"||y=="v")) && ((z=="X"||z=="x") || (y=="X"||y=="x")))
  {
                        cout<<"We need the final velocity and the total distance."<<endl;
                         //Request values to substitute
                        cout<<"Enter the acceleration: "<<endl;
                        cin>>A;
                        cout<<"Enter the initial velocity: "<<endl;
                        cin>>Vo;
                        cout<<"Enter the total time: "<<endl;
                        cin>>T;
                        V=Vo+A*T;
                        X=Vo*T+.5*A*pow(T,2);
                        cout<<"The final velocity is "<<V<<"m/s."<<endl;
                        cout<<"The total distance is "<<X<<"m."<<endl;
                        }         
       else
           if(((z=="T"||z=="t") || (y=="T"||y=="t")) && ((z=="X"||z=="x") || (y=="X"||y=="x")))
  {
                        cout<<"We need the total time and the total distance."<<endl;
                         //Request values to substitute
                        cout<<"Enter the acceleration: "<<endl;
                        cin>>A;
                        cout<<"Enter the initial velocity: "<<endl;
                        cin>>Vo;
                        cout<<"Enter the final velocity: "<<endl;
                        cin>>V;
                        T=(V-Vo)/A;
                        X=((pow(V,2))-(pow(Vo,2)))/(2*A);
                        cout<<"The total time is "<<T<<"s."<<endl;
                        cout<<"The total distance is "<<X<<"m."<<endl;
                        }
                        cout<<"Was the problem a free fall problem where the object was projected up first.\n Y/N?"<<endl;
                        cin>>z;
                        if (z=="Y"||z=="y")
                        {
                        if (T==0)
                        {
                                 cout<<"The total time from release to impact is "<<fabs(T1*2)<<"s."<<endl;
                        }
                        else
                       {
                             cout<<"The total time from release to impact is "<<fabs(T*2)<<"s."<<endl;
                        }
                        //Closing if statement key
                        } 
                       break;
  //2 OBJECT PROBLEMS                                  
 case 6:
       //Some special new variables for 2 object problems
       /*  D=Distance between bodies
          td=time difference between bodies. */
          
      //double V1=0,V2=0,Vo1=0,A1=0,Vo2=0,A2=0,X1=0,X2=0,D=0,td=0;
       system("cls");
      cout<<"Choose one of the following scenarios to best suit the problem: "<<endl;
      
      cout<<"   +------------------------------------------+ \n"  
            "   | 1  Body one has constant velocity.       | \n" 
            "   |    Body two has constant velocity.       | \n"
            "   |------------------------------------------| \n"
            "   | 2  Body one has constant velocity.       | \n"
            "   |    Body two has constant acceleration.   | \n"
            "   |------------------------------------------| \n"
            "   | 3  Body one has constant acceleration.   | \n"
            "   |    Body two has constant acceleration.   | \n"
            "   +------------------------------------------+ \n";
            cout<<"NOTE: if the acceleration's are equal choose number one.\n";
            cin>>opc;
            switch(opc)
{
case 1:
      
     cout<<"+-------------------------------------------+\n"
           "| 1 Bodies start at same time and distance. |\n" 
           "| 2 Bodies start at different times.        |\n"
           "| 3 Bodies start at different distances.    |\n"
           "+-------------------------------------------+\n";
     cin>>opc;
     switch(opc)
     {
       case 1:
          cout<<"Then that is the only time they have the same x coordinate.\n";
          break;
       case 2:
          cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the velocity for body number one: ";
          cin>>V1;
          cout<<"Enter the velocity for body number two: ";
          cin>>V2;
          cout<<"Enter the time difference: ";
          cin>>td;
          T=(V1*td)/(V2-V1);
          cout<<"The time is equal to "<<T<<endl;
          break;
       case 3:
           cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the velocity for body number one: ";
          cin>>V1;
          cout<<"Enter the velocity for body number two: ";
          cin>>V2;
          cout<<"Enter the distance in between them: ";
          cin>>D;
          T=D/(V2-V1);
          cout<<"The time is equal to "<<T<<endl;
      	  break;
      	  //Closing switch key
         }
         break;
case 2:

     cout<<"+---------------------------------------------------+\n"
           "| 1 Bodies start at same time and distance.         |\n" 
           "| 2 The constant velocity body starts first.        |\n"
           "| 3 The constant acceleration body starts first.    |\n"
           "| 4 The constant velocity body is further ahead.    |\n"
           "| 5 The constant acceleration body is further ahead.|\n"
           "+---------------------------------------------------+\n";
     cin>>opc;
     switch(opc)
     {
       case 1:
          cout<<"Enter the constant velocity: ";
          cin>>V1;
          cout<<"Enter the initial velocity for body number two: ";
          cin>>Vo2;
          cout<<"Enter the acceleration: ";
          cin>>A;
          T=(V1-Vo2)/(.5*A);
          cout<<"The time is equal to "<<T<<endl;
          break;
       case 2:
           cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the velocity for body number one: ";
          cin>>V1;
          cout<<"Enter the initial velocity for body number two: ";
          cin>>Vo2;
          cout<<"Enter the acceleration: ";
          cin>>A;
          cout<<"Enter the time difference: ";
          cin>>td;
          T1=(-(Vo2-V1)+pow(pow(Vo2-V1,2)-4*(.5*A)*(-V1*td),.5))/A;
          T2=(-(Vo2-V1)-pow(pow(Vo2-V1,2)-4*(.5*A)*(-V1*td),.5))/A;
          cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
          break;
       case 3:
           cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the initial velocity for body number one: ";
          cin>>Vo1;
          cout<<"Enter the velocity for body number two: ";
          cin>>V2;
          cout<<"Enter the acceleration: ";
          cin>>A;
          cout<<"Enter the time difference: ";
          cin>>td;
          T1=(-(Vo1-V2+A*td)+pow(pow(Vo1-V2+A*td,2)-4*(.5*A)*(.5*A*pow(td,2)+Vo1*td),.5))/A;
          T2=(-(Vo1-V2+A*td)-pow(pow(Vo1-V2+A*td,2)-4*(.5*A)*(.5*A*pow(td,2)+Vo1*td),.5))/A;
          cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
          break;
       case 4:
          cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the velocity for body number one: ";
          cin>>V1;
          cout<<"Enter the initial velocity for body number two: ";
          cin>>Vo2;
          cout<<"Enter the acceleration: ";
          cin>>A;
          cout<<"Enter the distance in between them: ";
          cin>>D;
          T1=(-(Vo2-V1)+pow(pow(Vo2-V1,2)-4*(.5*A)*(D),.5))/A;
          T2=(-(Vo2-V1)-pow(pow(Vo2-V1,2)-4*(.5*A)*(D),.5))/A;
          cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
          break;
        case 5:
          cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the initial velocity for body number one: ";
          cin>>Vo1;
          cout<<"Enter the velocity for body number two: ";
          cin>>V2;
          cout<<"Enter the acceleration: ";
          cin>>A;
          cout<<"Enter the distance in between them: ";
          cin>>D;
          T1=(-(Vo1-V2)+pow(pow(Vo1-V2,2)-4*(.5*A)*(-D),.5))/A;
          T2=(-(Vo1-V2)-pow(pow(Vo1-V2,2)-4*(.5*A)*(-D),.5))/A;
          cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
          break;
         }
         break;
case 3:

     cout<<"+-------------------------------------------+\n"
           "| 1 Bodies start at same time and distance. |\n" 
           "| 2 Bodies start at different times.        |\n"
           "| 3 Bodies start at different distances.    |\n"
           "+-------------------------------------------+\n";
     cin>>opc;
     switch(opc)
     {
       case 1:
          cout<<"Enter the initial velocity for body number one: ";
          cin>>Vo1;
          cout<<"Enter the initial velocity for body number two: ";
          cin>>Vo2;
          cout<<"Enter the acceleration for body number one: ";
          cin>>A1;
          cout<<"Enter the acceleration for body number two: ";
          cin>>A2;
          T=(Vo1-Vo2)/(.5*(A2-A1));
          cout<<"The time is equal to "<<T<<endl;
          break;
       case 2:
          cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the initial velocity for body number one: ";
          cin>>Vo1;
          cout<<"Enter the initial velocity for body number two: ";
          cin>>Vo2;
          cout<<"Enter the acceleration for body number one: ";
          cin>>A1;
          cout<<"Enter the acceleration for body number two: ";
          cin>>A2;
          cout<<"Enter the time difference: ";
          cin>>td;
          T1=(-(Vo1-Vo2+A1*td)+pow(pow(Vo1-Vo2+A*td,2)-4*(.5*(A1-A2))*(.5*A1*pow(td,2)+Vo1*td),.5))/(A1-A2);
          T2=(-(Vo1-Vo2+A1*td)-pow(pow(Vo1-Vo2+A*td,2)-4*(.5*(A1-A2))*(.5*A1*pow(td,2)+Vo1*td),.5))/(A1-A2);
          cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
          break;
       case 3:
          cout<<"NOTE: the first body is considered to be \nthe one that starts first or is ahead.\n\n";
          cout<<"Enter the initial velocity for body number one: ";
          cin>>Vo1;
          cout<<"Enter the initial velocity for body number two: ";
          cin>>Vo2;
          cout<<"Enter the acceleration for body number one: ";
          cin>>A1;
          cout<<"Enter the acceleration for body number two: ";
          cin>>A2;
          cout<<"Enter the distance in between them: ";
          cin>>D;
          T1=(-(Vo1-Vo2)+pow(pow(Vo1-Vo2,2)-4*(.5*(A1-A2))*(-D),.5))/(A1-A2);
          T2=(-(Vo1-Vo2)-pow(pow(Vo1-Vo2,2)-4*(.5*(A1-A2))*(-D),.5))/(A1-A2);
          cout<<"The two possible times are "<<T1<<"s"<<" and "<<T2<<"s."<<endl;
      	  break;
         }
         //2 body problems choice closing switch key and break
         break;
         }
//First switch closing key
}
                //Break statement
                        cout<<"Do you wish to continue. Y/N?"<<endl;
                        cin>>z;
                         if (z=="n"||z=="N")
                         {break;}
                         else
                         { cout<<endl;}
                         
                         //While closing key            
                            }
   system("PAUSE");
   return 0;
}
