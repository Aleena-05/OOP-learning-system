#include<iostream>
#include<conio.h>

using namespace std;

 class oop
 {
  public:
   void front_page();               //Front Page
   void intro();                    //Introduction to OOP
   void class_object();             //Concept of Class and Object
   void features();                 //Features of OOP
   void special_fn();               // Special Class Functions: Constructor and destructor
   void access_specifier();         //Public,Private and Protected
   void operator_overloading();     //Operator overloading
   void virtual_abstract();         //Virtual Base Class,Abstract class,Constructors in derived class
   void virtual_polymorphism();     //Virtual functions and Polymorphism
   void project();
  };

  void oop::front_page()
  {
   cout<<"\n\n\t\t\t :OOP TUTORIAL:";
   cout<<"\n\t\t\t================";
   cout<<"\n\n\t :LEARNING OBJECT ORIENTED PROGRAMMING USING C++:";
   cout<<"\n\t -------------------------------------------------";
   cout<<"\n\n\
              \t 1.Introduction to OOP.\n\n\
              \t 2. Concept Of Class And Object.\n\n\
              \t 3. Features Of OOP.\n\n\
              \t 4. Constructor & Destructor.\n\n\
              \t 5. Private,Public And Protected Members.\n\n\
              \t 6. Operator Overloading.\n\n\
              \t 7. Virtual Base Class & Abstract Class.\n\n\
              \t 8. Polymorphism & Virtual Functions.\n\n\n\
              \t ** Enter 0 For Exit.** \n\n\n\
              \t => Enter Your Choice: ";

  int i;
  cin>>i;

switch(i)
  {
  case 0:exit(0);                   break;
  case 1:intro();                   break;
  case 2:class_object();            break;
  case 3:features();                break;
  case 4:special_fn();              break;
  case 5:access_specifier();        break;
  case 6:operator_overloading();    break;
  case 7:virtual_abstract();        break;
  case 8:virtual_polymorphism();    break;
  default:
     cout<<"\nError Input .Try Again.\n";
     front_page();break;
  }
 };
  //===================INTRODUCTION TO OOP=======================\\
 //----------------------------------------------------------------------\\

 void oop::intro()
    {
        int n;
        cout<<"\tMENU\n\
        1.Intro\n\
        2.POP vs OOP\n\
        3.Applications of OOP\n\
        4.Back to Front Page\n\n\
        \t\**Enter your choice**: ";
        cin>>n;
                switch(n)
                {
                    case 1:
                        cout<<"\n\t\t\tINTRODUCTION TO OOP\n\n\
                        -Object Oriented Programming emphasis on data rather than procedure.\n\
                        -Programs are divided into small parts called object.\n\
                        -Data structures are designed such that they characterized the objects.\n\
                        -Data and related functions stay tied in classes.\n\
                        -Data is secured as they can�t be accessed by external functions.\n\
                        -Objects may communicate with each other through functions.\n\
                        -New data and functions can be added easily whenever necessary.\n\
                        -Follows bottom-up approach in program design.\n\
                        -Using inheritance, a Class can be modified to create another one.\n\
                        -Multiple Programmer System Design is easy by OOP concept.\n\
                        -The complexity can be reduced.\n\
                        -Data Type can be created based on the necessity.\n\n\n";
                        cout<<"**Press any key to go back.**\n\n";
                        getch();
                        intro();
                        break;
                    case 2:
                        cout<<"\n\t\t\tPOP Vs OOP\n\n\
                        Problem decomposition\n\
                        -POP-decompose the main problem in small parts called functions.\n\
                        OOP-decompose the main problem in small parts called objects.\n\n\
                        Connections of parts\n\
                        -POP-connects small parts of the program by passing parameters & using operating system.\n\
                        OOP-connects small parts of the program by passing messages.\n\n\
                        Emphasizing\n\
                        -POP-emphasizes on functions.\n\
                        OOP-emphasizes on data.\n\n\
                        Use of data\n\
                        -POP-in large programs, most functions use global data.\n\
                        OOP-each object controls data under it.\n\n\
                        Passing of data\n\
                        -POP-data may get passed from one function to another.\n\
                        OOP-data never get passed from one object to another.\n\n\
                        Security of data\n\
                        -POP-appropriate & effective techniques are unavailable to secure the data.\n\
                        OOP-data stay secured as no external function can use data of an object.\n\n\
                        Modification of program\n\
                        -POP-modification of a completed program is very difficult and it may affect the whole program.\n\
                        OOP-modifications are easy as objects stay independent to declare and define.\n\n\
                        Designing approach\n\
                        -POP-employs top-down approach for designing programs.\n\
                        OOP-employs bottom-up approach for designing.\n\n\
                        Data identification\n\
                        -POP-in large programs, it is very difficult to find what data has been used by which function.\n\
                        OOP-as data and functions stay close, it is easy to identify data.\n\n\
                        Used languages\n\
                        -POP-languages like C, FORTRAN, COBOL etc. use POP.\n\
                        OOP-languages like C++, JAVA etc. use OOP.\n\n";
                        cout<<"**Press any key to go back.**\n\n";
                        getch();
                        intro();
                        break;
                    case 3:
                        cout<<"\n\t\t\tAPPLICATION OF OOP\n\n\
                        1.Real time system\n\
                        2.Simulation and Modeling\n\
                        3.Object Oriented Database\n\
                        4.Client-Server System\n\
                        5.Hypertext,Hypermedia\n\
                        6.Neural Networking and Parallel Programming\n\
                        7.Office Automation Systems\n\
                        8.CIM/CAD/CAM Systems\n\
                        9.AI and Expert Systems\n\n";
                        cout<<"**Press any key to go back.**\n\n";
                        getch();
                        intro();
                        break;
                    case 4:
                        front_page();
                        break;
                    default:
                        cout<<"Invalid selection. Try again\n\n";
                        intro();
                        break;
                }
    }

 //===================CONCEPT OF CLASS AND OBJECT=======================\\
 //----------------------------------------------------------------------\\

 void oop::class_object()
 {
     int m;
     cout<<"\n\n MENU\n\
     1.What is class\n\
     2.General format\n\
     3.What is object\n\
     4.General format\n\
     5.Example\n\
     6.Back to Front Page\n\n\
     **Enter your choice**: \n";
     cin>>m;
     switch(m)
     {
         case 1:
             cout<<"\n\t\t\tCLASS\n\n\
             A class is a way to bind the data and its associated functions together and allows the data (and function)\n\
             to be hidden, if necessary, from  external use.\n";
             cout<<"\n\t\t\t**Press any key to go back.**\n\n";
             getch();
             class_object();
             break;
        case 2:
          cout<<"\n\t\t\tCLASS DEFINITION\n\n\
          A class specification has two parts:                            \n\t\
          l. Class declaration                                                         \n\t\
          2. Class function definitions                                                \n\t\
          Keyword 'class' is used                                                      \n\n\t\t\
          class class_name                                                             \n\t\t\
          {                                                                           \n\t\t\
          private:                                                                     \n\t\t\
          variable declarations;                                                       \n\t\t\
          public:                                                                       \n\t\t\
          variable declarations;                                                       \n\t\t\
          function declarations;                                                        \n\t\t\
          };";
          cout<<"\n\n\t\t\t**Press any key to go back.**\n\n";
          getch();
          class_object();
          break;
        case 3:
          cout<<"\n\t\t\tOBJECT\n\n\
          Object is created in the Main for function call\n";
          cout<<"\n\n\t\t\t**Press any key to go back.**\n\n";
          getch();
          class_object();
          break;
        case 4:
          cout<<"\n\t\t\tCLASS DEFINITION\n\n\t\
                int main()                                                    \n\t\
                  {                                                                 \n\t\
                    class_name object_name;                                         \n\t\
                    object_name.function_name();  //function call                   \n\t\
                    return 0;                                                       \n\t\
                  }\n";
          cout<<"\n\t\t\t**Press any key to go back.**\n";
          getch();
          class_object();
          break;
        case 5:
           cout<<"\n\t\t\t\EXAMPLE                                                         \n\n\t\
           class person                                                                     \n\t\
                     {                                                                        \n\t\
                        char name[30];                                                         \n\t\
                        int age;                                                                \n\t\
                        public:                                                                  \n\t\
                            void getdata(void)                                                   \n\t\
                            {                                                                    \n\t\
                                cout <<'Enter name:';                                             \n\t\
                                cin >> name;                                                       \n\t\
                                cout << 'Enter age:';                                              \n\t\
                                cin >> age;                                                         \n\t\
                            }                                                                      \n\t\
                           void display(void)                                                      \n\t\
                           {                                                                       \n\t\
                               cout << 'Name: '  << name;                                           \n\t\
                               cout<<'Age: '<< age;                                                 \n\t\
                            }                                                                        \n\t\
                      };                                                                               \n\t\
                      int main()                                                                        \n\t\
                      {                                                                                \n\t\
                          person p;                                                                      \n\t\
                          p.getdata(); //calling a membership function using dot operator                 \n\t\
                          p.display();                                                                     \n\t\
                          return 0;                                                                         \n\t\
                      }\n";
           cout<<"\n\t\t\t**Press any key to go back.**\n\n";
           getch();
           class_object();
           break;
        case 6:
          front_page();
          break;
        default:
            cout<<"\n\t\tInvalid selection. Try again\n\n";
            class_object();
      }
}

 //===================FEATURES OF OOP=======================\\
 //----------------------------------------------------------------------\\

  void oop::features()
 {

  cout<<"\n\n\t\t\t :FEATURES:\
         \n\t\t\t ==========";
  cout<<"\n\n\
               \t 1. Abstraction\n\n\
               \t 2. Encapsulation\n\n\
               \t 3. Inheritance\n\n\
               \t 4. Polymorphism\n\n\
               \t 5. Dynamic binding\n\n\
               \t 6. Message Passing\n\n\
               \t * Press 7 To Return to Front Page. *\n\n\n\
               \t => Enter Your Choice:";
                int a;
               cin>>a;
 switch(a)

  {
   case 1:
      cout<<"\n\n\t\t\t :ABSTRACTION:\n\t\t\t================\n\t\t\
            Abstraction refers to the act of representing essential features without \n\t\
            including the background details or explanations.Classes use the concept\n\t\
            of abstraction and are defined as a list of abstract attributes as size,\n\t\
            weight and cost, and functions to operate on these attributes.\n\n\t\t \
           * Press Any Key To Go Back *";
           getch();
           features();              break;
   case 2:
      cout<<"\n\n\t\t\t :ENCAPSULATION:\n\t\t\t=================\n\t\t\
            Encapsulation is the mechanism that binds together code and the data it\n\t\
            manipulates, and keeps both safe from outside interference and misuse. In\n\t\
            any object the private data and its related function are binded together,\n\t\
            so that nothing from outside can directly access these private members.\n\t\
            Even if one object cannot access or change the internal state of another\n\t\
            object of same class.Only the own methods involving with that object c\n\t\
            an allowed to access or change its internal state.\n\n\t\t\
             * Press Any Key TO Go Back * ";
            getch();
            features();               break;

   case 3: lab:

       cout<<"\n\n\t\t\               INHERITANCE                      \
               \n\n\t\t 1.Single Inheritance                           \
               \n\n\t\t 2.Multiple Inheritance                         \
               \n\n\t\t 3.Multilevel Inheritance                       \
               \n\n\t\t 4.Hierarchical Inheritance                     \
               \n\n\t\t 5.Hybrid Inheritance                           \
               \n\n\t\t 6.Go back                                      \
               \n\n\n\t\t  =>Enter Your Choice:";

               int b;
               cin>>b;

               switch(b)
               {
                   case 1:
                       cout<<"   \n\n\t\t\tSingle Inheritance   \
                                 \n\t\t\t===================\n\t\t\
                                 \n\n\t\t 1.Definition              \
                                 \n\n\t\t 2.Example                 \
                                 \n\n\t\t Enter your choice";
                                 int n;
                                 cin>>n;
                                 switch(n)
                                 {
                                     case 1:cout<<"\n\n\t\t  Single Inheritance : Single base class & a single derived class.";
                                            cout<<"\n\n\t\t *Press any key to go back to inheritance menu*\n ";
                                            getch();
                                            goto lab;
                                            break;
                                     case 2:cout<<"\n\n\t\t\tSingle Inheritance   \
                                                   \n\t\t\t===================\n\t\t\
                                                  \n\n\t\t\
                                                  #include <iostream>                                                              \n\n\t\t\
                                                  using namespace std;                                                              \n\n\t\t\
                                                  class mobile {                                                                    \n\n\t\t\
                                                  public:                                                                            \n\n\t\t\
                                                    mobile()                                                                          \n\n\t\t\
                                                    {                                                                                 \n\n\t\t\
                                                        cout << 'Mobile is the base class' << endl;                                    \n\n\t\t\
                                                    }                                                                                  \n\n\t\t\
                                                   };                                                                                  \n\n\t\t\
                                                  class nokia:public mobile{                                                            \n\n\t\t\
                                                  public:                                                                               \n\n\t\t\
                                                    nokia()                                                                              \n\n\t\t\
                                                    {                                                                                    \n\n\t\t\
                                                        cout<<'Nokia is the derived class of  base class mobile';                        \n\n\t\t\
                                                    }                                                                                    \n\n\t\t\
                                                   };                                                                                    \n\n\t\t\
                                                  int main()                                                                              \n\n\t\t\
                                                  {                                                                                       \n\n\t\t\
                                                    nokia obj;                                                                            \n\n\t\t\
                                                    return 0;                                                                              \n\n\t\t\
                                                  } ";

                                            cout<<"\n\n\n\t\t OUTPUT \t\t";
                                            cout<<"\n\n\n\t\t Mobile is the base class\t\t";
                                            cout<<"\n\n\n\t\t Nokia is the derived class \t\t";
                                            cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                            getch();
                                            goto lab;
                                            break;
                                        default:
                                            cout<<"\nError Input .Try Again.\n";
                                            goto lab;
                                            break;
                                 }


                   case 2:cout<<"\n\n\t\t\tMultiple Inheritance        \
                                 \n\t\t\t====================\n\t\t\
                                 \n\n\t\t  1.Definition                 \
                                  \n\n\t\t 2.Example                    \
                                   \n\n\t\t Enter your choice";
                                 int m;
                                 cin>>m;
                                 switch(m)
                                 {
                                    case 1: cout<<"\n\n\t\t   Multiple Inheritance : Derived class will extend from multiple base classes.";
                                            cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                            getch();
                                            goto lab;
                                            break;
                                     case 2:cout<<"\n\n\t\t\tMultiple Inheritance   \
                                                    \n\t\t\t====================\n\t\t\
                                            \n\n\t\t\
                                            #include<iostream>                                                                  \n\n\t\t\
                                            using namespace std;                                                                 \n\n\t\t\
                                            class brand_1                                                                         \n\n\t\t\
                                            {                                                                                     \n\n\t\t\
                                                public:                                                                            \n\n\t\t\
                                                int k;                                                                              \n\n\t\t\
                                                string w;                                                                           \n\n\t\t\
                                                void get_1()                                                                         \n\n\t\t\
                                                {                                                                                    \n\n\t\t\
                                                    cout<<'Enter brand 1:';                                                           \n\n\t\t\
                                                }                                                                                      \n\n\t\t\
                                                void put_1(void)                                                                        \n\n\t\t\
                                                {                                                                                        \n\n\t\t\
                                                    cin>>w;                                                                               \n\n\t\t\
                                                }                                                                                         \n\n\t\t\
                                            };                                                                                              \n\n\t\t\
                                            class brand_2                                                                                    \n\n\t\t\
                                            {                                                                                                \n\n\t\t\
                                                public:                                                                                        \n\n\t\t\
                                                int l;                                                                                         \n\n\t\t\
                                                string z;                                                                                      \n\n\t\t\
                                                void get_2()                                                                                   \n\n\t\t\
                                                {                                                                                              \n\n\t\t\
                                                    cout<<' Enter brand 2 : ';                                                                  \n\n\t\t\
                                                }                                                                                                \n\n\t\t\
                                                void put_2(void)                                                                                 \n\n\t\t\
                                                {                                                                                               \n\n\t\t\
                                                    cin>>z;                                                                                        \n\n\t\t\
                                                }                                                                                                  \n\n\t\t\
                                            };                                                                                                      \n\n\t\t\
                                           class out : public brand_1, public brand_2                                                              \n\n\t\t\
                                           {                                                                                                    \n\n\t\t\
 	                                       public:                                                                                              \n\n\t\t\
                                                void cost_1()                                                                                    \n\n\t\t\
                                                {                                                                                               \n\n\t\t\
                                                    cout<<' Enter '<<w<< ' price : ';                                                             \n\n\t\t\
                                                    cin>>k;                                                                                        \n\n\t\t\
                                                }                                                                                                \n\n\t\t\
                                                void cost_2()                                                                                    \n\n\t\t\
                                                {                                                                                                 \n\n\t\t\
                                                    cout<<' Enter '<<z<<' price : ';                                                            \n\n\t\t\
                                                    cin>>l;                                                                                    \n\n\t\t\
                                                }                                                                                       \n\n\t\t\
                                                void comp()                                                                              \n\n\t\t\
                                                {                                                                                       \n\n\t\t\
                                                    if(k>l)                                                                              \n\n\t\t\
                                                    {                                                                                     \n\n\t\t\
                                                        cout<<' '<<w<<' costlier than '<<z<<endl;                                         \n\n\t\t\
                                                    }                                                                                      \n\n\t\t\
                                                    else{                                                                                 \n\n\t\t\
                                                        cout<<' '<<z<<' costlier than '<<w<<endl;                                          \n\n\t\t\
                                                    }                                                                                     \n\n\t\t\
                                                }                                                                                          \n\n\t\t\
                                                void display(void)                                                                          \n\n\t\t\
                                                {                                                                                           \n\n\t\t\
                                                    get_1();                                                                              \n\n\t\t\
                                                    put_1();                                                                               \n\n\t\t\
                                                    get_2();                                                                                \n\n\t\t\
                                                    put_2();                                                                               \n\n\t\t\
                                                    cost_1();                                                                              \n\n\t\t\
                                                    cost_2();                                                                              \n\n\t\t\
                                                    cout<<endl<<endl<<endl;                                                                 \n\n\t\t\
                                                    cout<<' Model : '<<w<<endl;                                                             \n\n\t\t\
                                                    cout<<' Model : '<<z<<endl;                                                             \n\n\t\t\
                                                    cout<<endl;                                                                              \n\n\t\t\
                                                }                                                                                            \n\n\t\t\
                                           };                                                                                                \n\n\t\t\
                                           int main()                                                                                        \n\n\t\t\
                                           {                                                                                                 \n\n\t\t\
                                                out obj1;                                                                                    \n\n\t\t\
                                                obj1.display();                                                                              \n\n\t\t\
                                                obj1.comp();                                                                                \n\n\t\t\
                                                return 0;                                                                                   \n\n\t\t\
                                           } " ;

                                           cout<<"\n\n\n\t\t OUTPUT                            \
                                                   \n\n\n\t\t Enter brand 1 : Samsung          \
                                                    \n\n\n\t\t Enter brand 2 : Nokia           \
                                                    \n\n\n\t\t Enter Samsung price : 15000     \
                                                    \n\n\n\t\t Enter Nokia price : 12000       \
                                                    \n\n\n\t\t Model : Samsung                 \
                                                    \n\n\n\t\t Model : Nokia                   \
                                                    \n\n\n\t\t Samsung costlier than Nokia     ";
                                            cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                            getch();
                                            goto lab;
                                            break;
                                        default:
                                            cout<<"\nError Input .Try Again.\n";
                                            goto lab;
                                            break;
                                 }

                   case 3:cout<<"\n\n\t\t\tMultilevel Inheritance";
                          cout<<"\n\t\t\t======================\n\t\t";
                          cout<<"\n\n\t\t  1.Definition ";
                          cout<<"\n\n\t\t  2.Example";
                          cout<<" \n\n\t\t Enter your choice";
                                 int l;
                                 cin>>l;
                                 switch(l)
                                 {
                                     case 1: cout<<"\n\n\t\t   Multilevel Inheritance : More than one single level of derived class.";
                                             cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                             getch();
                                             goto lab;
                                             break;
                                     case 2: cout<<"\n\n\t\t\tMultilevel Inheritance\
                                                     \n\t\t\t=====================\n\t\t\
                                              \n\n\t\t\
                                              #include<iostream>                                        \n\n\t\t\
                                              using namespace std;                                      \n\n\t\t\
                                              class  Mobile                                             \n\n\t\t\
                                              {                                                         \n\n\t\t\
                                                char model[10];                                           \n\n\t\t\
                                                public:                                                   \n\n\t\t\
                                                void getinfo()                                            \n\n\t\t\
                                                {                                                         \n\n\t\t\
                                                    cout<<' Enter model of mobile: ';                         \n\n\t\t\
                                                    cin>>model;                                               \n\n\t\t\
                                                }                                                         \n\n\t\t\
                                                void showinfo()                                           \n\n\t\t\
                                                {                                                         \n\n\t\t\
                                                    cout<<endl<<' Model of mobile : '<<model<<endl;           \n\n\t\t\
                                                }                                                         \n\n\t\t\
                                              };                                                        \n\n\t\t\
                                              class Features : public Mobile                            \n\n\t\t\
                                              {                                                         \n\n\t\t\
                                                int battery;                                              \n\n\t\t\
                                                char camquality[10];                                      \n\n\t\t\
                                                char processor[10];                                       \n\n\t\t\
                                                int storage;                                              \n\n\t\t\
                                                public:                                                   \n\n\t\t\
                                                void getdata()                                            \n\n\t\t\
                                                {                                                         \n\n\t\t\
                                                    getinfo();                                                \n\n\t\t\
                                                    cout<<' Enter  battery capacity  in mAh: ';               \n\n\t\t\
                                                    cin>>battery;                                             \n\n\t\t\
                                                    cout<<' Enter camera quality in MP: ';                    \n\n\t\t\
                                                    cin>>camquality;                                          \n\n\t\t\
                                                    cout<<' Enter processor used: ';                          \n\n\t\t\
                                                    cin>>processor;                                           \n\n\t\t\
                                                    cout<<' Enter storage capability in GB: ';                \n\n\t\t\
                                                    cin>>storage;                                             \n\n\t\t\
                                                }                                                         \n\n\t\t\
                                                void showdata()                                           \n\n\t\t\
                                              {                                                         \n\n\t\t\
                                              showinfo();                                               \n\n\t\t\
                                              cout<<' Battery capacity : '<<battery<<'mAh'<<endl;       \n\n\t\t\
                                              cout<<' Processor used : '<< processor<<endl;             \n\n\t\t\
                                              cout<<' Storage capability : '<<storage<<'GB'<<endl;      \n\n\t\t\
                                              }                                                         \n\n\t\t\
                                              class  Price : public Features                            \n\n\t\t\
                                              {                                                         \n\n\t\t\
                                              int price;                                                \n\n\t\t\
                                              public:                                                   \n\n\t\t\
                                              void get()                                                \n\n\t\t\
                                              {                                                         \n\n\t\t\
                                              getdata();                                                \n\n\t\t\
                                              cout<<' Enter price of model: ';                          \n\n\t\t\
                                              cin>>price;                                               \n\n\t\t\
                                              }                                                         \n\n\t\t\
                                              void show()                                               \n\n\t\t\
                                              {                                                         \n\n\t\t\
                                              showdata();                                               \n\n\t\t\
                                              cout<<' Price of mobile : Rs'<<price<<endl;               \n\n\t\t\
                                              }                                                         \n\n\t\t\
                                              };                                                        \n\n\t\t\
                                              int main()                                                \n\n\t\t\
                                              {                                                         \n\n\t\t\
                                              Price p;                                                  \n\n\t\t\
                                              p.get();                                                  \n\n\t\t\
                                              p.show();                                                 \n\n\t\t\
                                              } ";
                                            cout<<"\n\n\n\t\t OUTPUT                                  \
                                                   \n\n\n\t\tEnter model of mobile: Redmi_note5       \
                                                   \n\n\n\t\tEnter battery capacity in mAH: 4000      \
                                                   \n\n\n\t\tEnter camera quality in MP: 12           \
                                                   \n\n\n\t\tEnter processor used: Octacore           \
                                                   \n\n\n\t\tEnter storage capability in GB: 64       \
                                                   \n\n\n\t\tEnter price of model: 17000              \
                                                   \n\n\n\t\t model of mobile: Redmi_note5            \
                                                   \n\n\n\t\t battery capacity in mAH: 4000           \
                                                   \n\n\n\t\t camera quality in MP: 12                \
                                                   \n\n\n\t\t processor used: Octacore                \
                                                   \n\n\n\t\t storage capability in GB: 64            \
                                                   \n\n\n\t\t price of model: 17000\t\t";
                                            cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                            getch();
                                            goto lab;
                                            break;
                                        default:
                                            cout<<"\nError Input .Try Again.\n";
                                            goto lab;
                                            break;
                                 }

                   case 4:cout<<"\n\n\t\t\tHierarchical Inheritance   \
                                  \n\t\t\t=======================\n\t\t\
                                  \n\n\t\t 1.Definition                 \
                                   \n\n\t\t 2.Example                  \
                                    \n\n\t\t Enter your choice";
                                 int j;
                                 cin>>j;
                                 switch(j)
                                 {
                                     case 1: cout<<"\n\n\t\t          Hierarchical  Inheritance : Multiple derived class would be extended from base class.\
                                                    \n\n\t\t          from base class, which is similar to single level inheritance.";
                                             cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                             getch();
                                             goto lab;break;
                                     case 2: cout<<" \n\n\t\t\tHierarchical Inheritance   \
                                                      \n\t\t\t=======================\n\t\t\
                                              \n\n\t\t\
                                             #include <iostream>                       \n\n\t\t\
                                             using namespace std;                      \n\n\t\t\
                                             class mobile                              \n\n\t\t\
                                             {                                         \n\n\t\t\
                                             public:                                   \n\n\t\t\
                                             mobile(){}                                \n\n\t\t\
                                             };                                        \n\n\t\t\
                                             class brand_1:public mobile               \n\n\t\t\
                                             {                                         \n\n\t\t\
                                             public:                                   \n\n\t\t\
 	                                         string a;                                 \n\n\t\t\
                                             int g1,r1;                                \n\n\t\t\
 	                                         brand_1(){}                               \n\n\t\t\
 	                                         void get_1()                              \n\n\t\t\
                                             {                                         \n\n\t\t\
 	                                         cout<<' Enter brand 1 :';                \n\n\t\t\
 	                                         cin>>a;                                   \n\n\t\t\
 	                                         cout<<' Enter storage(in GB) and price(in RS): ';\n\n\t\t\
 	                                         cin>>g1>>r1;                              \n\n\t\t\
 	                                         }                                         \n\n\t\t\
                                             void disp_1()                             \n\n\t\t\
                                             {                                         \n\n\t\t\
                                             cout<<endl<<'Brand 1: '<<a<<endl;          \n\n\t\t\
                                             cout<<' Storage: '<<g1<<'GB'<<endl;       \n\n\t\t\
                                             cout<<' Price: Rs'<<r1<<'/-'<<endl;       \n\n\t\t\
                                             }                                         \n\n\t\t\
                                             };                                        \n\n\t\t\
                                             class brand_2:public mobile               \n\n\t\t\
                                             {                                         \n\n\t\t\
                                             int g2,r2;                                \n\n\t\t\
                                             public:                                   \n\n\t\t\
                                             string b;                                 \n\n\t\t\
                                             brand_2(){}                               \n\n\t\t\
                                             void get_2()                              \n\n\t\t\
                                             {                                         \n\n\t\t\
                                             cout<<' Enter brand 2 : ';                \n\n\t\t\
                                             cin>>b;                                   \n\n\t\t\
 	                                         cout<<' Enter storage(in GB) and price(in RS): ';\n\n\t\t\
 	                                         cin>>g2>>r2;                              \n\n\t\t\
                                             }                                         \n\n\t\t\
                                             void disp_2()                             \n\n\t\t\
                                             {                                         \n\n\t\t\
                                             cout<<endl<<endl<<'Brand 2: '<<b<<endl;          \n\n\t\t\
                                             cout<<' Storage: '<<g2<<'GB'<<endl;       \n\n\t\t\
                                             cout<<' Price: Rs'<<r2<<'/-'<<endl;       \n\n\t\t\
                                             }                                         \n\n\t\t\
                                             };                                        \n\n\t\t\
                                             int main()                                \n\n\t\t\
                                             {                                         \n\n\t\t\
                                             brand_1 b1;                               \n\n\t\t\
                                             brand_2 b2;                               \n\n\t\t\
                                             b1.get_1();                               \n\n\t\t\
                                             b2.get_2();                               \n\n\t\t\
                                             b1.disp_1();                              \n\n\t\t\
                                             b2.disp_2();                              \n\n\t\t\
                                             return 0;                                 \n\n\t\t\
                                             \n}  ";
                                             cout<<"\n\n\n\t\t OUTPUT                                               \
                                                   \n\n\n\t\t Enter brand 1: Samsung                                \
                                                   \n\n\n\t\t Enter storage(in GB) and price(in Rs): 64 15000       \
                                                   \n\n\n\t\t Enter brand 2: Nokia                                  \
                                                   \n\n\n\t\t Enter storage(in GB) and price(in Rs): 32 10000       \
                                                   \n\n\n\t\t Brand 1: Samsung                                      \
                                                   \n\n\n\t\t Storage: 64GB                                         \
                                                   \n\n\n\t\t Price: Rs15000/-                                      \
                                                   \n\n\n\t\t Brand 2: Nokia                                        \
                                                   \n\n\n\t\t Storage: 32GB                                         \
                                                   \n\n\n\t\t Price: Rs10000/-";
                                            cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                            getch();
                                            goto lab;
                                            break;
                                        default:
                                            cout<<"\nError Input .Try Again.\n";
                                            goto lab;
                                            break;
                                 }


                   case 5:cout<<"\n\n\t\t\t Hybrid Inheritance   \
                                  \n\t\t\t===================\n\t\t\
                                 \n\n\t\t 1.Definition                 \
                                  \n\n\t\t 2.Example                   \
                                   \n\n\t\t Enter your choice";
                                 int k;
                                 cin>>k;
                                 switch(k)
                                 {
                                     case 1: cout<<"\n\n\t\t           Hybrid Inheritance : Single, Multilevel & hierarchal inheritance all\
                                                    \n\n\t\t           together construct a hybrid inheritance.";
                                              cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                              getch();
                                              goto lab;
                                              break;
                                     case 2: cout<<"\n\n\t\t\
                                              \n\n\t\t\t Hybrid Inheritance   \
                                              \n\t\t\t===================\n\t\t\
                                              #include <iostream>\n\n\t\t\
                                              using namespace std;\n\n\t\t\
                                              class mobile\n\n\t\t\
                                              {\n\n\t\t\
                                              public:\n\n\t\t\
                                              mobile(){}\n\n\t\t\
                                              void task()\n\n\t\t\
                                              {\n\n\t\t\
                                              cout<<' To compare 2 brands of mobile phones'<<endl;\n\n\t\t\
                                              }\n\n\t\t\
                                              };\n\n\t\t\
                                              class brand_1:public mobile\n\n\t\t\
                                              {\n\n\t\t\
                                              public:\n\n\t\t\
                                                    int k;\n\n\t\t\
                                                    string a;\n\n\t\t\
 	                                                brand_1(){}\n\n\t\t\
                                                    void get_1()\n\n\t\t\
 	                                                {\n\n\t\t\
 	                                                 cout<<' Enter brand 1 : ';\n\n\t\t\
                                                    }\n\n\t\t\
                                                    void put_1(void)\n\n\t\t\
                                                    {\n\n\t\t\
                                                    cin>>a;\n\n\t\t\
                                                    }\n\n\t\t\
                                              };\n\n\t\t\
                                              class brand_2:public mobile\n\n\t\t\
                                              {\n\n\t\t\
                                              public:\n\n\t\t\
                                                    int l;\n\n\t\t\
                                                    string b;\n\n\t\t\
                                                    brand_2(){}\n\n\t\t\
                                                    void get_2()\n\n\t\t\
                                                    {\n\n\t\t\
                                                    cout<<' Enter brand 2 : ';\n\n\t\t\
                                                    }\n\n\t\t\
                                                    void put_2(void)\n\n\t\t\
 	                                                {\n\n\t\t\
 	                                                cin>>b;\n\n\t\t\
                                                    }\n\n\t\t\
                                              };\n\n\t\t\
                                              class model_1:public brand_1\n\n\t\t\
                                              {\n\n\t\t\
                                              public:\n\n\t\t\
                                                    string w;\n\n\t\t\
                                                    model_1(){}\n\n\t\t\
                                                    void get_3()\n\n\t\t\
                                                    {\n\n\t\t\
                                                    cout<<' Enter model 1(for space use underscore) : ';\n\n\t\t\
                                                    }\n\n\t\t\
                                                    void put_3(void)\n\n\t\t\
                                                    {\n\n\t\t\
                                                    cin>>w;\n\n\t\t\
                                                    }\n\n\t\t\
                                              };\n\n\t\t\
                                             class model_2: public brand_2\n\n\t\t\
                                             {\n\n\t\t\
                                             public:\n\n\t\t\
                                                    string z;\n\n\t\t\
                                                    model_2(){}\n\n\t\t\
                                                    void get_4()\n\n\t\t\
                                                    {\n\n\t\t\
                                                    cout<<' Enter model 2(for space use underscore) : ';\n\n\t\t\
                                                    }\n\n\t\t\
                                                    void put_4(void)\n\n\t\t\
                                                    {\n\n\t\t\
                                                    cin>>z;\n\n\t\t\
                                                    }\n\n\t\t\
                                              };\n\n\t\t\
                                              class out : public model_1, public model_2\n\n\t\t\
                                              {\n\n\t\t\
 	                                          public:\n\n\t\t\
 	                                          void cost_1()\n\n\t\t\
 	                                          {\n\n\t\t\
                                              cout<<' Enter '<<w<< ' price : ';\n\n\t\t\
 	                                          cin>>k;\n\n\t\t\
 	                                          }\n\n\t\t\
 	                                          void cost_2()\n\n\t\t\
 	                                          {\n\n\t\t\
 	                                          cout<<' Enter '<<z<<' price : ';\n\n\t\t\
 	                                          cin>>l;\n\n\t\t\
 	                                          }\n\n\t\t\
 	                                          void comp()\n\n\t\t\
                                              {\n\n\t\t\
 	                                          if(k>l)\n\n\t\t\
                                              {\n\n\t\t\
                                              cout<<' '<<w<<' costlier than '<<z<<endl;\n\n\t\t\
                                              }\n\n\t\t\
                                              else{\n\n\t\t\
                                              cout<<' '<<z<<' costlier than '<<w<<endl;\n\n\t\t\
                                              }\n\n\t\t\
 	                                          }\n\n\t\t\
 	                                          void display(void)\n\n\t\t\
 	                                          {\n\n\t\t\
                                              get_1();\n\n\t\t\
 	                                          put_1();\n\n\t\t\
 	                                          get_2();\n\n\t\t\
 	                                          put_2();\n\n\t\t\
                                              get_3();\n\n\t\t\
 	                                          put_3();\n\n\t\t\
                                              get_4();\n\n\t\t\
 	                                          put_4();\n\n\t\t\
                                              cost_1();\n\n\t\t\
                                              cost_2();\n\n\t\t\
 	                                          cout<<endl<<endl<<endl;\n\n\t\t\
 	                                          cout<<' Brand : '<<a<<endl;\n\n\t\t\
 	                                          cout<<' Model : '<<w<<endl;\n\n\t\t\
 	                                          cout<<' Brand : '<<b<<endl;\n\n\t\t\
                                              cout<<' Model : '<<z<<endl;\n\n\t\t\
                                              cout<<endl;\n\n\t\t\
                                              }\n\n\t\t\
                                              };\n\n\t\t\
                                              int main()\n\n\t\t\
                                              {\n\n\t\t\
                                              mobile mob;\n\n\t\t\
                                              mob.task();\n\n\t\t\
                                              out obj1;\n\n\t\t\
                                              obj1.display();\n\n\t\t\
                                              obj1.comp();\n\n\t\t\
                                              return 0;\n\n\t\t\
                                              } ";
                                              cout<<"\n\n\n\t\t OUTPUT                          \
                                                      \n\n\n\t\t Enter brand 1 : Samsung         \
                                                    \n\n\n\t\t Enter brand 2 : Nokia          \
                                                    \n\n\n\t\t Enter Samsung price : 15000    \
                                                    \n\n\n\t\t Enter Nokia price : 12000      \
                                                    \n\n\n\t\t Model : Samsung                \
                                                    \n\n\n\t\t Model : Nokia                  \
                                                    \n\n\n\t\t Samsung costlier than Nokia    ";
                                              cout<<"\n\n\t\t *Press any key to go back to inheritance menu* \n ";
                                              getch();
                                              goto lab;
                                              break;
                                        default:
                                            cout<<"\nError Input .Try Again.\n";
                                            goto lab;
                                            break;
                                 }


                   case 6:features();
                }

case 4:
      cout<<"\n\n\t\t\t :POLYMORPHISM:\n\t\t\t===================\n\
                   \n\n\t Polymorphism is one of the crucial features of OOP.It simply\
                   \n\t means 'one name, multiple forms'.The concept of polymorphism is implemented\
                   \n\t using the overloaded functions and operators. The overloaded member functions\
                   \n\t are 'selected' for invoking by matching arguments, both type and number.\
                   \n\t There are two types of Polymorphism: Run-time & Compile-time Polymorphism.\
                   \n\n\t *Press any Key To Go Back *";
      getch();
      features();
      break;


case 5:
      cout<<"\n\n\t\t\t :DYNAMIC BINDING:\n\t\t\t===================\n\
                   \tIn object oriented programming it is possible to implement different\n\t\
                   version of a particular function.But it is not known which version of that\n\t\
                   function will call until runtime.This system is called dynamic binding.\n\t\
                   There are two types of binding one is early binding that is not known\n\t\
                   until compile time and another is late binding that is not known until \n\t\
                   runtime.\n\n\t * Press Any Key To Go Back*";
      getch();
      features();
      break;
case 6:
      cout<<"\n\n\t\t\t :MESSAGE PASSING:\n\t\t\t===================\
                   \n\t\t\t Object communicate with one another by sending and receiving information\n\t\
                   to each other.A message for an object is a request for execution of a procedure\n\t\
                   and therefore will invoke a function in the receiving object that generates the \n\t\
                   desired results\n\n\t\* Press Any Key To Go Back*";
      getch();
      features();
      break;
 case 7:front_page();break;
 default:
    cout<<"\nError Input .Try Again.\n";
    features();
    break;
  }

 }
 //===================CONSTRUCTOR AND DESTRUCTOR=======================\\
 //----------------------------------------------------------------------\\

 void oop::special_fn()
    {

     cout<<"\n\n\t\t\t :Special Functions:\
         \n\t\t\t ===================";
     cout<<"\n\n\
               \t 1. Constructor\n\n\
               \t 2. Destructor\n\n\
               \t * Press 3 To Return Front Page. *\n\n\n\
               \t => Enter Your Choice:";
               int c;
               cin>>c;
               switch(c)
                {
                    case 1:
                        cout<<"\n\n\t\t\t :CONSTRUCTOR:\n\n\t\t\t================\n\t\
            •	Constructors are special class functions which performs initialization of every object.\n\t\
            •	The Compiler calls the Constructor whenever an object is created.\n\t\
            •	Constructors initialize values to object members after storage is allocated to the object.\n\t\
            •	Constructors can be defined either inside the class definition or outside class definition\n\t\
                using class name and scope resolution :: operator.\n\t\
                class A{ \n\t\
                int x; \n\t\
                public:\n\t\
                A(); //Constructor\n\t\
                };\n\t\
            * Press Any Key To Go Back *";
            getch();
            special_fn();
            break;
                  case 2:
                      cout<<"\n\n\t\t\t :DESTRUCTOR:\n\t\t\t=================\n\t\
            • used to destroy the objects that have been created by a constructor.\n\t\
            • the destructor is a member function whose name is the same as the \n\t\
              class name but is preceded by a tilde.\n\t\
            • ~ integer() { }\n\t\
            • A destructor never takes any argument nor does it return any value\n\t\
            • invoked implicitly by the compiler upon exit from the program to \n\t\
              clean up storage that is no longer accessible\n\t\
              * Press Any Key TO Go Back * ";
              getch();
              special_fn();
              break;

                  case 3:front_page();break;
                  default:
                      cout<<"\nError Input .Try Again.\n";
                      special_fn();
                      break;
            }
    }


 //===================PUBLIC,PRIVATE & PROTECTED======================\\
 //----------------------------------------------------------------------\\

 void oop::access_specifier()
 {
     int k;
     cout<<"\n\n MENU\n\
     1.Different access specifiers\n\
     2.General format\n\
     3.Example\n\
     4.Back\n\n\
     Enter your choice:\n";
     cin>>k;

      switch(k)
      {
          case 1:
              cout<<"\n\t\tVisibility mode can be:\n\
              1.Private - Member variable or function cannot be accessed outside the class \n\
              2.Public - Member variable or function can be accessed outside the class \n\
              3.Protected - Very similar to a private  member but provides one additional benefit that\n\
              they can be accessed in child classes which are called derived classes\n";
              cout<<"\n\t\t\t**Press any key to go back.**\n\n";
              getch();
              access_specifier();
              break;
          case 2:
              cout<<"\n\t\t\t private: int k               \n\t\
              public: int k                       \n\t\
              protected: int k \n";
              cout<<"\n\t\t\t**Press any key to go back.**\n\n";
              getch();
              access_specifier();
              break;
         case 3:
             cout<<"\n\t\t\tEXAMPLE   \n\n\t\
             class B \n\t\
             {                                                       \n\t\
             int a;                   //private                 \n\t\
             public: \n\t\
              int b;                  //public                         \n\t\
             void get_ab();                                           \n\t\
             int get_a(void);                                           \n\t\
             void show_a(void);\n\t\
             };                                                           \n\t\
             class D: public B      //public derivation                   \n\t\
             {                                                             \n\t\
             int c;                                                         \n\t\
             public:                                                       \n\t\
             void mul(void);                                                 \n\t\
             void display(void);                                                \n\t\
             };\n";
             cout<<"\n\t\t\t**Press any key to go back.**\n\n";
              getch();
              access_specifier();
             break;
        case 4:front_page();
        break;
        default:
            cout<<"Invalid selection. Try again\n\n";
            access_specifier();
            break;
      }
}

 //===================OPERATOR OVERLOADING=======================\\
 //----------------------------------------------------------------------\\

 void oop::operator_overloading()
{
    cout<<"\n\n\t\t\t :OPERATOR OVERLOADING:\
            \n\t\t\t ========================";
    cout<<"\n\n\
               \t 1. What is Operator Overloading ?\n\n\
               \t 2. Why Operator Overloading is used ?\n\n\
               \t 3. General format\n\n\
               \t 4. Rules for Overloading Operators\n\n\
               \t 5. Examples\n\n\
               \t ** Press 6 To Return To Front Page **\n\n\n\
               \t => Enter Your Choice: ";
    int a;
    cin>>a;
    switch(a)
    {
        case 1: cout<<"\n\n\t OPERATOR OVERLOADING:\
                       \n\n\t In C++, we can make operators to work for user defined classes.This means C++\
                       \n\n\t has the ability to provide the operators with a special meaning for a data type,\
                       \n\n\t this ability is known as operator overloading. For example, we can overload '+'\
                       \n\n\t in a class like String so that we can concatenate two strings by just using +.\
                       \n\n\t Almost all operators can be overloaded except the following:\
                       \n\n\t 1. Dot operator (.)\
                       \n\n\t 2. Scope resolution operator (::)\
                       \n\n\t 3. Sizeof operator\
                       \n\n\t 4. Conditional operator (?:)\
                       \n\n\n\t ** Press any Key To Go To Back Page **";
                getch();
                operator_overloading();
                break;

        case 2: cout<<"\n\n\t WHY OPERATOR OVERLOADING IS USED?\
                       \n\n\t Using operator overloading in C++, you can specify more than one meaning for an\
                       \n\n\t operator in one scope. The purpose of operator overloading is to provide a special\
                       \n\n\t meaning of an operator for a user defined data type. With the help of operator\
                       \n\n\t overloading, you can redefine the majority of the C++ operators. You can also use\
                       \n\n\t operator overloading to perform different operations using one operator.\
                       \n\n\n\t ** Press Any Key To Go To Back Page **";
                getch();
                operator_overloading();
                break;

        case 3: cout<<"\n\n\t GENERAL FORMAT:\
                       \n\n\t Steps for overloading operator:\
                       \n\n\t 1. Create a class that defines the data type that is to be used in the overloading\
                       \n\n\t operation.\
                       \n\n\t 2.Declare the operator function operator op() in the public part of the class. It\
                       \n\n\t may be either a member function or a friend function.\
                       \n\n\t 3. Define the operator function to implement the required operations.\
                     \n\n\n\t The general format for operator overloading is shown below:\
                       \n\n\t 1. Defining inside class definition:\
                       \n\n\t\t class class_name \
                       \n\n\t\t {\
                       \n\n\t\t     ........\
                       \n\n\t\t     public:\
                       \n\n\t\t         return_type operator op(argument(s))\
                       \n\n\t\t         {\
                       \n\n\t\t              function body\
                       \n\n\t\t         }\
                       \n\n\t\t         .........\
                       \n\n\t\t };\
                       \n\n\t 2. Defining ouside class definition:\
                       \n\n\t\t return_type class_name::operator op(argument(s)) \
                       \n\n\t\t {                                                \
                       \n\n\t\t     function body                                \
                       \n\n\t\t }\
                       \n\n\t Here is the explanation for above syntax:\
                       \n\n\t 1. The return_type is the return type for the function.\
                       \n\n\t 2. Next, mention the operator keyword.\
                       \n\n\t 3. The symbol denotes the operator symbol to be overloaded.\
                       \n\n\t 4. The argument(s) can be passed to the operator function in the same way as\
                       \n\n\t functions.\
                       \n\n\n\t ** Press Any Key To Go To Back Page **";
                getch();
                operator_overloading();
                break;

        case 4: cout<<"\n\n\t RULES FOR OVERLOADING OPERATORS:\
                       \n\n\t 1. Only existing operators can be overloaded\
                       \n\n\t 2. The overloaded operator must have atleast one operand that is of user defined\
                       \n\n\t type.\
                       \n\n\t 3. We cannot change the basic meaning of an operator.\
                       \n\n\t 4. Overloaded operators follow the syntax rules of the original operators.\
                       \n\n\t 5. There are some operators that cannot be overloaded.\
                       \n\n\t 6. We cannot use friend functions to overload certain operators.\
                       \n\n\t 7. When using binary operators overloaded thruogh a member function,the left hand\
                       \n\n\t operand must be an object of the relevant class.\
                       \n\n\n\t ** Press Any Key To Go To Back Page **";
                getch();
                operator_overloading();
                break;

        case 5: start:
                cout<<"\n\n\t EXAMPLES FOR OPERATOR OVERLOADING:\
                       \n\n\t 1. Overloading Unary Minus\
                       \n\n\t 2. Overloading Binary operator\
                       \n\n\t 3. Overloading operators for String manipulation\
                       \n\n\t ** Enter 4 To Go To Back Page **\
                       \n\n\t => Enter your choice: ";
                int i;
                cin>>i;
                switch(i)
                {
                    case 1: cout<<"\n\n\t Program to overload ~ operator for getting negative of numbers.\
                                  \n\n\t\t #include<iostream> \
	                              \n\n\t\t using namespace std; \
                                  \n\n\t\t class space \
                                  \n\n\t\t { \
                                  \n\n\t\t      int x,y,z; \
	                              \n\n\t\t      public: \
		                          \n\n\t\t          void getdata(int a,int b,int c); \
		                          \n\n\t\t          void display(); \
		                          \n\n\t\t          void operator~();                 // overload unary minus \
	                              \n\n\t\t }; \
                                  \n\n\t\t void space::getdata(int a,int b,int c) \
	                              \n\n\t\t { \
	                              \n\n\t\t      x=a; \
	                              \n\n\t\t      y=b; \
	                              \n\n\t\t      z=c; \
	                              \n\n\t\t } \
                                  \n\n\t\t void space::display() \
	                              \n\n\t\t { \
	                              \n\n\t\t      cout<<x<<" "; \
	                              \n\n\t\t      cout<<y<<" "; \
	                              \n\n\t\t      cout<<z<<endl; \
                                  \n\n\t\t } \
                                  \n\n\t\t void space::operator~() \
                                  \n\n\t\t { \
                                  \n\n\t\t      x=-x; \
                                  \n\n\t\t      y=-y; \
                                  \n\n\t\t      z=-y; \
                                  \n\n\t\t } \
                                  \n\n\t\t int main() \
	                              \n\n\t\t { \
	                              \n\n\t\t      space S; \
	                              \n\n\t\t      S.getdata(10,-20,30); \
	                              \n\n\t\t      cout<<'S: '; \
                                  \n\n\t\t      S.display(); \
	                              \n\n\t\t      -S;            // S.operator~() (activates operator~() function) \
	                              \n\n\t\t      cout<<'S: '; \
	                              \n\n\t\t      S.display(); \
	                              \n\n\t\t      return 0; \
	                              \n\n\t\t }";
	                        cout<<"\n\n\n\t\t ** Enter 1 To Go To Back Page **\
	                                 \n\n\t\t ** Enter 2 to Run the program **\
	                               \n\n\n\t\t => Enter Your Choice: ";
	                        int ch;
	                        cin>>ch;
	                        switch(ch)
	                        {
	                            case 1: goto start;
	                            case 2: cout<<"\n\n\t\t\t OUTPUT\
	                                             \n\t\t\t -------";
	                                    cout<<"\n\n\n\t\t S: 10 -20 30\
	                                               \n\t\t S: -10 20 -30";

	                                    break;
                                 default:
                                     cout<<"\nError Input .Try Again.\n";
	                        }
	                        goto start;
                    case 2: cout<<"\n\n\t Program to overload + operator for adding 2 complex numbers.\
                                   \n\n\t\t #include<iostream> \
	                               \n\n\t\t using namespace std; \
	                               \n\n\t\t class complex \
	                               \n\n\t\t { \
	                               \n\n\t\t     float x;                               // real part \
	                               \n\n\t\t     float y;                               // imaginary part \
	                               \n\n\t\t     public: \
		                           \n\n\t\t         complex(){}                        // constructor 1 \
		                           \n\n\t\t         complex(float real,float imag)     // constructor 2 \
	                               \n\n\t\t        	{ \
		                           \n\n\t\t              x=real; \
		                           \n\n\t\t              y=imag; \
		                           \n\n\t\t         } \
	                               \n\n\t\t     	complex operator+(complex); \
	                               \n\n\t\t      	void display(); \
	                               \n\n\t\t         }; \
                                   \n\n\t\t	complex complex::operator+(complex c) \
	                               \n\n\t\t { \
	                               \n\n\t\t     complex temp;                         // temporary \
                                   \n\n\t\t     temp.x=x+c.x; \
                                   \n\n\t\t     temp.y=y+c.y;                         // float additions \
	                               \n\n\t\t     return(temp); \
	                               \n\n\t\t } \
                                   \n\n\t\t void complex::display() \
	                               \n\n\t\t { \
	                               \n\n\t\t     cout<<x<<'+j'<<y<<endl; \
	                               \n\n\t\t } \
                                   \n\n\t\t int main() \
	                               \n\n\t\t { \
	                               \n\n\t\t     complex C1,C2,C3;                     // invokes constructor 1 \
	                               \n\n\t\t     C1=complex(2.5, 3.5);                 // invokes constructor 2 \
	                               \n\n\t\t     C2=complex(1.6, 2.7); \
                                   \n\n\t\t     C3=C1+C2;                             // C3=C1.operator+(C2) \
	                               \n\n\t\t     cout<<'C1= '; \
	                               \n\n\t\t     C1.display(); \
	                               \n\n\t\t     cout<<'C2= '; \
	                               \n\n\t\t     C2.display(); \
                                   \n\n\t\t     cout<<'C3= '; \
	                               \n\n\t\t     C3.display(); \
	                               \n\n\t\t     return 0; t\
	                               \n\n\t\t }";
	                        cout<<"\n\n\n\t\t ** Enter 1 To Go To Back Page **\
	                                 \n\n\t\t ** Enter 2 to Run the program **\
	                               \n\n\n\t\t => Enter Your Choice: ";
	                        int k;
	                        cin>>k;
	                        switch(k)
	                        {
	                            case 1: goto start;
	                            case 2: cout<<"\n\n\t\t\t OUTPUT\
	                                             \n\t\t\t -------";
	                                    cout<<"\n\n\n\t\t C1= 2.50+j3.50\
	                                               \n\t\t C2= 1.60+j2.70\
	                                               \n\t\t C3= 4.10+j6.20";
	                                    break;
                                 default:
                                     cout<<"\nError Input .Try Again.\n";
                                     break;
	                        }
	                        goto start;
                    case 3: cout<<"\n\n\t Strings can be defined as class objects which can be manipilated like the\
                                   \n\n\t built-in-types. The strings vary greatly in size, we use new to allocate\
                                   \n\n\t memory for each string and a pointer variable to point to the string array.\
                                   \n\n\t\t pointer_variable=new data_type[size];";
                            cout<<"\n\n\t Program to overload + operator to concatenate two strings.";
                            cout<<"\n\n\t\t #include<iostream.h> \
	                               \n\n\t\t #include<string.h> \
	                               \n\n\t\t using namespace std; \
    	                           \n\n\t\t class my_string \
	                               \n\n\t\t { \
	                               \n\n\t\t     char *name; \
	                               \n\n\t\t     int length; \
                                   \n\n\t\t     public: \
                                   \n\n\t\t         my_string()               // constructor \
                                   \n\n\t\t         { \
		                           \n\n\t\t             length=0; \
                                   \n\n\t\t             name=new char[length+1]; \
		                           \n\n\t\t         } \
                                   \n\n\t\t         my_string(char *n)	 // create string from pointer \
		                           \n\n\t\t         { \
		                           \n\n\t\t             length=strlen(n); \
		                           \n\n\t\t             name=new char[length+1]; \
                                   \n\n\t\t             strcpy(name,n); \
		                           \n\n\t\t         } \
                                   \n\n\t\t 		void display() \
		                           \n\n\t\t         { \
		                           \n\n\t\t             cout<<'String: '<<name; \
		                           \n\n\t\t         } \
		                           \n\n\t\t         my_string operator+(my_string s) \
		                           \n\n\t\t         { \
		                           \n\n\t\t             my_string temp; \
		                           \n\n\t\t             strcpy(temp.name,name); \
		                           \n\n\t\t             strcat(temp.name,s.name); \
                                   \n\n\t\t             return temp; \
		                           \n\n\t\t         } \
	                               \n\n\t\t }; \
                                   \n\n\t\t	int main \
	                               \n\n\t\t { \
 	                               \n\n\t\t     my_string s1('Hello'); \
	                               \n\n\t\t     my_string s2('Welcome'); \
                                   \n\n\t\t     my_string s3; \
                                   \n\n\t\t     s1.display(); \
                                   \n\n\t\t     s2.display(); \
                                   \n\n\t\t     s3=s1+s2; \
                                   \n\n\t\t     s3.display(); \
                                   \n\n\t\t     return 0; \
 	                               \n\n\t\t }";
                            cout<<"\n\n\n\t\t ** Enter 1 To Go To Back Page **\
	                                 \n\n\t\t ** Enter 2 to Run the program **\
	                               \n\n\n\t\t => Enter Your Choice: ";
	                        int j;
	                        cin>>j;
	                        switch(j)
	                        {
	                            case 1: goto start;
	                            case 2: cout<<"\n\n\t\t\t OUTPUT\
	                                             \n\t\t\t -------";
	                                    cout<<"\n\n\n\t\t String: Hello\
	                                               \n\t\t String: Welcome\
	                                               \n\t\t String: HelloWelcome";
	                                    break;
                                default:
                                    cout<<"\nError Input .Try Again.\n";
	                        }
	                        goto start;
                            break;
                    case 4: operator_overloading();
                            break;
                }
                break;
        case 6: front_page();  break;
        default:
            cout<<"\nError Input .Try Again.\n";
            operator_overloading();
            break;

    }
}

 //===================VIRTUAL BASE CLASS & ABSTRACT CLASS=======================\\
 //----------------------------------------------------------------------\\

 void oop::virtual_abstract()
 {

  cout<<"\n\n\t\t\t :VIRTUAL BASE CLASS , ABSTRACT CLASS, CONSTRUCTORS IN DERIVED CLASS::\
         \n\t\t\t =====================================================================";
  cout<<"\n\n\
              \t 1. What is Virtual Base class?\n\n\
               \t 2. General format\n\n\
               \t 3. Example.\n\n\
               \t 4. What is abstract class?\n\n\
               \t 5. General format\n\n\
               \t 6. Example.\n\n\
               \t 7. Constructors in derived class\n\n\
               \t 8. Example\n\n\
               \t 9. Nesting of Class\n\n\
               \t 10.Example\n\n\
               \t ** Press 11 To Return Front Page. **\n\n\
               \t => Enter Your Choice:";
  int a;
  cin>>a;
  switch(a)
  {
   case 1:
      cout<<"\n\n\t VIRTUAL BASE CLASS :Virtual base classes are used in virtual inheritance  in a way\
             \n\n\t of preventing multiple “instances” of a given class appearing in an  inheritance\
             \n\n\t hierarchy when using multiple inheritances.Virtual base classes offer a way to save\
             \n\n\t space and avoid ambiguities in class hierarchies that use multiple inheritances. \
             \n\n\t When a base class is specified as a virtual base, it can act as an indirect base more\
             \n\n\t than once without duplication of its data members. A single copy of its data members\
             \n\n\t is shared by all the base classes that use virtual base.\
             \n\n\n\t **Press any Key To Go To Back Page **";
             getch();
             virtual_abstract();          break;

   case 2:
      cout<<"\n\n\t\t\ GENERAL FORMAT :\n\t\t\
                      Syntax 1:                                     \n\n\t\t\
                      class B : virtual public A                     \n\n\t\t\
                      {                                           \n\n\t\t\
                                                                     \n\n\t\t\
                      };                                              \n\n\t\t\
                      Syntax 2:                                      \n\n\t\t\
                      class C : public virtual A                     \n\n\t\t\
                      {                                               \n\n\t\t\
                                                                     \n\n\t\t\
                      };                                             \n\n\t\t\
                     \n\n\n\t * Press Any Key To Go To Back Page *";
                 getch();
                 virtual_abstract();            break;


   case 3:begin1:
         cout<<"\n\n\t\t\
		               #include <iostream>                              \n\n\t\t\
                       using namespace std;                            \n\n\t\t\
                                                                            \n\n\t\t\
                       class A {                                           \n\n\t\t\
                       public:                                              \n\n\t\t\
                       int a;                                                \n\n\t\t\
                       A()                                                  \n\n\t\t\
                       {                                                      \n\n\t\t\
                          a = 10;                                             \n\n\t\t\
                       }                                                       \n\n\t\t\
                       };                                                       \n\n\t\t\
                                                                                 \n\n\t\t\
                       class B : public virtual A {                     \n\n\t\t\
                       };                                                            \n\n\t\t\
                                                                                    \n\n\t\t\
                       class C : public virtual A {                      \n\n\t\t\
                       };                                                             \n\n\t\t\
                                                                                    \n\n\t\t\
                       class D : public B, public C {                               \n\n\t\t\
                       };                                                             \n\n\t\t\
                                                                                       \n\n\t\t\
                       int main()                                                \n\n\t\t\
                       {                                                              \n\n\t\t\
                       D object;                                                \n\n\t\t\
                       cout << a = << object.a << endl;      \n\n\t\t\
                       return 0;                                               \n\n\t\t\
                       } "   ;

      cout<<"\n\n\n\t\t **Enter 1 To Go To Back Page.**\
             \n\n\n\t\t **Enter 2 Output of the program.**\
             \n\n\n\t\t  =>Enter Your Choice:";

               int a;
               cin>>a;
               switch(a)
               {
               case 1:virtual_abstract();
               break;
               case 2:
               cout<<"\n\n\t\t\t OUTPUT\
                       \n\t\t\t---------\n\n\
                        a = 10";
                       cout<<"\n\n\t\t * Press Any Key To Go To Back Page *";
                       getch();
                       goto begin1;
                default:
                    cout<<"\nError Input .Try Again.\n";
                    goto begin1;
                }


   case 4:
	  cout<<"\n\n\t ABSTRACT CLASS \n\
             \n\n\t An abstract class in C++ is a class that has at least one pure virtual function\
			 \n\n\t (i.e., a function that has no definition). The classes inheriting the abstract class\
			 \n\n\t must provide a definition for the pure virtual function; otherwise, the subclass\
			 \n\n\t would become an abstract class itself.You declare a pure virtual function by\
			 \n\n\t using a pure specifier (= 0) in the declaration of a virtual member function in the\
             \n\n\t  class declaration.\
			 \n\n\n\t **Press any Key To Go To Back Page **";
			 getch();
			 virtual_abstract();               break;

   case 5:
      cout<<"\n\n\t GENERAL FORMAT: \n\n\t\t\
                    class AB {                   \n\n\t\t\
                    public:                         \n\n\t\t\
                    virtual void f() = 0;       \n\n\t\t\
                    };\
			  \n\n\n\t **Press any Key To Go To Back Page **";
              getch();
              virtual_abstract();               break;

   case 6:begin2:

      cout<<"\n\n\t #include<iostream>            \n\t\t\
             using namespace std;                 \n\n\t\t\
             class Base                           \n\t\t\
             {                                     \n\t\t\
             int x;                                \n\t\t\
             public:                                \n\t\t\
             virtual void fun() = 0;                \n\t\t\
             int getX() { return x; }               \n\t\t\
             };                                      \n\n\t\t\
             class Derived: public Base              \n\t\t\
             {                                        \n\t\t\
             int y;                                  \n\t\t\
             public:                                  \n\t\t\
             void fun() { cout < fun() called;}    \n\t\t\
             };                                       \n\n\t\t\
             int main(void)                           \n\t\t\
             {                                        \n\t\t\
             Derived d;                               \n\t\t\
             d.fun();                                   \n\t\t\
             return 0;                                  \n\t\t\
             }";



      cout<<"\n\n\n\t\t **Enter 1 To Go To Back Page.**\
             \n\n\n\t\t **Enter 2 Output of the program.**\
             \n\n\n\t\t  =>Enter Your Choice:";

               int b;
               cin>>b;
               switch(b)
               {
               case 1:virtual_abstract();
               break;
               case 2:
               cout<<"\n\n\t\t\t OUTPUT\
                       \n\t\t\t---------\n\n\t\
                       fun() called ";
                       cout<<"\n\n\t\t * Press Any Key To Go To Back Page *";
                       getch();
                       goto begin2;
                default:
                    cout<<"\nError Input .Try Again.\n";
                    goto begin2;
                }
    case 7:
	   cout<<"\n\n\t CONSTRUCTORS IN DERIVED CLASS: The constructor of the derived class receives the \
	          \n\n\t entire list of required values as its argument and passes them on to the base constructor\
			  \n\n\t in the order in which they are declared in the derived class. A base class constructor is\
			  \n\n\t called and executed before executing the statements in the body of the derived class.The\
			  \n\n\t header line of the derived-constructor function contains two parts separated by a colon (:).\
			  \n\n\t The first part provides the declaration of the arguments that are passed to the derived class\
			  \n\n\t constructor and the second part lists the function calls to the base class.\
			  \n\n\n\t **Press any Key To Go To Back Page **";
			  getch();
			   virtual_abstract();               break;

    case 8: begin3:
	  cout<< " \n\n\t\
	              #include <iostream.h>                      \n\n\t\
                  class alpha                                  \n\n\t\
                  {                                            \n\n\t\
                  private:                                    \n\n\t\
                  int x;                                      \n\n\t\
                  public:                                         \n\n\t\
                  alpha(int i)                                   \n\n\t\
                   {                                             \n\n\t\
                    x = i;                                       \n\n\t\
                    cout <<'alpha initialized'<<endl;             \n\n\t\
                   }                                               \n\n\t\
                   void show_x()                                  \n\n\t\
                   {                                                \n\n\t\
                    cout <<' x = '<<x<<endl;                           \n\n\t\
                   }                                                 \n\n\t\
                   };                                                 \n\n\t\
                   class gamma :  public alpha                        \n\n\t\
                  {                                                  \n\n\t\
                   private:                                           \n\n\t\
                   int m;                                             \n\n\t\
                   public:                                              \n\n\t\
                   gamma(int a, int c):: alpha(a)                     \n\n\t\
                   {                                                   \n\n\t\
                     m = c;                                            \n\n\t\
                    cout <<' gamma initialized'<<endl;                   \n\n\t\
                   }                                                     \n\n\t\
                    void show_m()                                            \n\n\t\
                   {                                                        \n\n\t\
                     cout <<' m =' <<m<<endl;                  \n\n\t\
                    }};                                       \n\n\
			  void main()  {                                          \n\n\t\
                    gamma g(5, 30);                                           \n\n\t\
                    cout <<endl;                                          \n\n\t\
                    g.show_x();                                           \n\n\t\
                    g.show_m();                                            \n\n\t\
                   } ";

   	  cout<<"\n\n\n\t\t **Enter 1 To Go To Back Page.**\
             \n\n\n\t\t **Enter 2 Output of the program.**\
             \n\n\n\t\t  =>Enter Your Choice:";

               int c;
               cin>>c;
               switch(c)
               {
               case 1:virtual_abstract();
               break;
               case 2:
               cout<<"\n\n\t\t\t OUTPUT\
                       \n\t\t\t---------\n\n\t\
                        alpha initialized \n\n\
				gamma initialized \n\n\t\
                        x = 5             \n\n\t\
                        m = 30            \n\n\t" ;

                       cout<<"\n\n\t\t * Press Any Key To Go To Back Page *";
                       getch();
                       goto begin3;

                default:
                    cout<<"\nError Input .Try Again.\n";
                    goto begin3;
                }
	case 9:

	  cout<<"\n\n\t NESTING OF CLASSES :A nested class is a class which is declared in another enclosing class.\
	         \n\n\t A nested class is a member and as such has the same access rights as any other member. The\
			 \n\n\t members of an enclosing class have no special access to members of a nested class; the usual\
			 \n\n\t access rules shall be obeyed.\
			 \n\n\n\t **Press any Key To Go To Back Page **";
			 getch();
			 virtual_abstract();               break;

	case 10:  begin4:
	   cout<<"  \n\n\t\
	                   #include<iostream>        \n\n\t\
                       using namespace std;      \n\n\t\
                       class A {                  \n\n\t\
                       public:                     \n\n\t\
                       class B {                   \n\n\t\
                       private:                    \n\n\t\
                       int num;                    \n\n\t\
                       public:                      \n\n\t\
                       void getdata(int n) {         \n\n\t\
                       num = n;                      \n\n\t\
                       }                             \n\n\t\
                       void putdata() {              \n\n\t\
                       cout<<'The number is '<<num;   \n\n\t\
                       }                               \n\n\t\
                       };                              \n\n\t\
                       };                             \n\n\t\
                       int main() {                    \n\n\t\
                       cout<<'Nested classes in C++'<< endl; \n\n\t\
                       A :: B obj;                       \n\n\t\
                       obj.getdata(9);                    \n\n\t\
                       obj.putdata();                     \n\n\t\
                       return 0;                         \n\n\t\
                       }";

	  cout<<"\n\n\n\t\t **Enter 1 To Go To Back Page.**\
             \n\n\n\t\t **Enter 2 Output of the program.**\
             \n\n\n\t\t  =>Enter Your Choice:";

               int d;
               cin>>d;
               switch(d)
               {
               case 1:virtual_abstract();
               break;
               case 2:
               cout<<"\n\n\t\t\t OUTPUT\
                       \n\t\t\t---------\n\n\t\
                        Nested classes in C++ \n\n\t\
                        The number is 9 \n\n\t";

                       cout<<"\n\n\t\t * Press Any Key To Go To Back Page *";
                       getch();
                       goto begin4;
                default:
                    cout<<"\nError Input .Try Again.\n";
                    goto begin4;
                }
	    case 11:
	                front_page();
		            break;
        default:
                    cout<<"\nError Input .Try Again.\n";
                    virtual_abstract();break;
    }
}

 //===================VIRTUAL FUNCTION & POLYMORPHISM=======================\\
 //----------------------------------------------------------------------\\

void test(int i) {
	cout << "\n\t\t\t The int is " << i << endl;
}
void test(double  f) {
	cout << "\n\n\t\t\t The float is " << f << endl;
}
void test(char const *ch) {
	cout << "\n\n\t\t\t The char* is " << ch << endl;
}

 void oop::virtual_polymorphism()
 {

  cout<<"\n\n\t\t\t :POLYMORPHISM & VIRTUAL FUNCTIONS:\
         \n\t\t\t ==================================";
  cout<<"\n\n\
               \t 1. What is Polymorphism?\n\n\
               \t 2. What is Compile-time Polymorphism & Run-time Polymorphism?\n\n\
               \t 3. Example: Compile-time Polymorphism.\n\n\
               \t 4. What are Pointers?\n\n\
               \t 5. Types of Pointers.\n\n\
               \t 6. Example.\n\n\
               \t 7. Virtual Function.\n\n\
               \t 8. Pure Virtual Function.\n\n\
               \t 9. Virtual Constructors and Destructor.\n\n\
               \t ** Press 10 To Return Front Page. **\n\n\n\
               \t => Enter Your Choice:";
  int a;
  cin>>a;
  switch(a)
  {
   case 1:
      cout<<"\n\n\t POLYMORPHISM: Polymorphism is one of the crucial features of OOP.It simply\
             \n\n\t means 'one name, multiple forms'.The concept of polymorphism is implemented\
             \n\n\t using the overloaded functions and operators. The overloaded member functions\
             \n\n\t are 'selected' for invoking by matching arguments, both type and number.\
             \n\n\t There are two types of Polymorphism: Run-time & Compile-time Polymorphism.\
             \n\n\n\t ** Press any Key To Go To Back Page **";
             getch();
             virtual_polymorphism();          break;

   case 2:
      cout<<"\n\n\t COMPILE TIME POLYMORPHISM: \
             \n\t ============================\n\
             \n\n\t Overloaded member functions are selected for invoking by matching arguments,\
             \n\n\t both type and number.This information is known to the compiler at the compile\
             \n\n\t time and therefore,compiler is able to select the appropriate function for a\
             \n\n\t particular call at the time of compilation.This is called “early binding or\
             \n\n\t static binding”.\
             \
             \n\n\n\t RUN TIME POLYMORPHISM: \
             \n\t ==========================\n\
             \n\n\t C++ supports a mechanism known as virtual function to achieve run time polymorphism.\
             \n\n\t At run time, when it is known what class objects are under consideration, the\
             \n\n\t appropriate version of the function is invoked. Since the function is linked with\
             \n\n\t a particular class much later after the compilation, this process is termed as\
             \n\n\t late binding.It is also known as dynamic binding because the selection of the\
             \n\n\t appropriate function is done dynamically at run time.\
             \
             \n\n\n\t ** Press Any Key To Go To Back Page **";
             getch();
             virtual_polymorphism();            break;

   case 3:strt1:

       cout<<"\n\n\t\t\
                     #include<iostream.h>                           \n\n\t\t\
                     using namespace std;                           \n\n\t\t\
                     void test(int i) {                             \n\n\t\t\
                        cout << 'The int is ' << i << endl;         \n\n\t\t\
                     }                                              \n\n\t\t\
                     void test(double  f){                           \n\n\t\t\
                        cout << 'The float is ' << f << endl;      \n\n\t\t\
                     }                                               \n\n\t\t\
                     void test(char const *ch) {                     \n\n\t\t\
                        cout << ' The char* is ' << ch << endl;     \n\n\t\t\
                     }                                               \n\n\t\t\
                     int main()                                      \n\n\t\t\
                     {                                               \n\n\t\t\
                        test(5);                                    \n\n\t\t\
                        test(5.5);                                  \n\n\t\t\
                        test('five');                               \n\n\t\t\
	                    return 0;                                   \n\n\t\t\
                     }";

        cout<<"\n\n\n\t\t ** Enter 1 To Go To Back Page **\
               \n\n\n\t\t ** Enter 2 Run the program **\
               \n\n\n\t\t  =>Enter Your Choice:";

               int a;
               cin>>a;
               switch(a)
               {
                   case 1:virtual_polymorphism();
                   break;
                   case 2:
                       cout<<"\n\n\t\t\t OUTPUT\
                       \n\t\t\t---------\n\n";
                       test(5);
                       test(5.5);
                       test("five");
                       cout<<"\n\n\t\t * Press Any Key To Go To Back Page *";
                       getch();
                       goto strt1;
                }
    case 4: strt2:

         cout<<"\n\n\
               \t 1. Pointers, Indirection operator and Address operator\n\n\
               \t 2. General format\n\n\
               \t 3. Example.\n\n\
               \
               \t ** Press 4 To Return To Polymorphism Page. **\n\n\
               \t ** Press 5 To Return Front Page. **\n\n\
               \t => Enter Your Choice:";


               cin>>a;
               switch(a)
               {
                   case 1:
                      cout<<"\n\n\n\t POINTERS\
                                  \n\t---------\n";
                      cout<<"\n\n\t The variable that stores the address of another variable is called a pointer.\
                             \n\n\t Pointer is a derived data type that refers to another data variable by storing\
                             \n\n\t the variables memory address rather than data.A pointer variable defines where\
                             \n\n\t to get the value of a specific data variable instead of defining actual data.";

                      cout<<"\n\n\n\t INDIRECTION OPERATOR\
                                  \n\t--------------------\n";
                      cout<<"\n\n\t It is a unary operator whose operand must be a pointer value. The result is an\
                             \n\n\t that can be used to access the pointed variable for the purpose of inspection\
                             \n\n\t or alteration.To access a through the pointer p, we simply code *p.";

                      cout<<"\n\n\n\t ADDRESS OPERATOR\
                                  \n\t-----------------\n";
                      cout<<"\n\n\t It is a unary operator that returns the memory address of its operand. For example, if var\
                             \n\n\t is an integer variable, then &var is its address.\
                             \n\n\n\n\t **Press any Key To Go To Back Page **";
                              getch();
                              goto strt2;
                    case 2:

                      cout<<"\n\n\n\t POINTER DECLARATION AND DEFINITION\
                                  \n\t-----------------------------------\n";
                      cout<<"\n\n\t Syntax for pointer declaration: datatype * pointername;\
                             \n\n\t Initialization of pointer variable: int x;\
                             \n\n\t\t\t\t\t\ int* p = &x;\
                             \
                             \n\n\n\t ** Press any Key To Go To Back Page **";
                              getch();
                              goto strt2;

                    case 3:
                        cout<<"\n\n\t\t\
                                #include<iostream.h>                           \n\n\t\t\
                                using namespace std;                           \n\n\t\t\
                                                                               \n\n\t\t\
                                int main()                                      \n\n\t\t\
                               {                                                \n\n\t\t\
                                 int a=14;                                      \n\n\t\t\
                                 int * p;                                     \n\n\t\t\
                                 p = &a;                                     \n\n\t\t\
                                 cout << “Content of a = ” << a << endl;       \n\n\t\t\
                                 cout << “Address of a = ” << &a << endl;       \n\n\t\t\
                                 cout << “Content of a = ” << *p << endl;      \n\n\t\t\
                                 cout << “Address of a = ” << p << endl;        \n\n\t\t\
	                             return 0;                                   \n\n\t\t\
                                }";

                           cout<<"\n\n\n\t\t\ OUTPUT\t\t\
                                         \n\t --------\n\
                                  \n\n\n\t\t Content of a = 14\t\t\
                                  \n\n\t\t Address of a = 0x00135760\t\t\
                                  \n\n\t\t Content of a = 14\t\t\
                                  \n\n\t\t Address of a = 0x00135760\t\t\
                                   \
                                  \n\n\n\t\t ** Press any Key To Go To Back Page **";
                                  getch();
                                  goto strt2;

                        case 4:
                               virtual_polymorphism(); break;
                        case 5:
                               front_page();break;

                        default:
                            cout<<"\nError Input .Try Again.\n";
                            goto strt2;
                   }

    case 5:
        cout<<"\n\n\t POINTERS TO OBJECT: \
                  \n\t -------------------\n\
             \n\n\t A pointer can point to an object created by a class.Object pointers are useful\
             \n\n\t in creating objects at run time. We can also use an object pointer to access \
             \n\n\t the public members of an object.\
             \n\n\t\t Example: item x;\
             \n\n\t\t where item is a class and x is an object defined to be of type item. Similarly\
             \n\n\t\t we can define a pointer it_ptr of type item as follows:\
             \n\n\t\t item *it_ptr;\
             \n\
             \n\n\t We can also create object using pointers and “new” operator as follows.\
             \n\n\t item *ptr = new item ;\
             \n\n\t This statement allocates enough memory for the data members in the object structure\
             \n\n\t and assigns the address of the memory space to ptr. Then ptr can be used to refer to\
             \n\n\t the members as shown:ptr -> show();\
             \n\
             \n\n\t Note: If a class has a constructor with arguments and does not include an empty\
             \n\n\t constructor, then we must supply the arguments when the object is created.\
             \n\
             \n\n\t We can also create an array of objects using pointers as given below,\
             \n\n\t item *ptr = new item[10];\
             \n\n\t This statement creates memory space for an array of 10 objects of item.\
             \n\n\
             \n\n\n\t 'this' POINTER\
                  \n\t ---------------\n\
             \n\n\t C++ uses a keyword called “this” to represent an object that invokes a member function.\
             \n\n\t this is a pointer that points to the object for which this function was called.\
             \n\n\t The function call A.max() will set the pointer this to the address of the object A.\
             \n\n\t The starting address is the same as the address of first variable in the class structure.\
             \n\n\t One important application of the pointer “this” is to return the object it points to.\
             \n\n\t\t return *this; //This statement returns the object that invoked the function.\
             \n\n\t The dereference operator *produces the contents at the address contained I the pointer.\
             \n\n\
             \n\n\n\t POINTERS TO DERIVED CLASS: \
                  \n\t ---------------------------\n\
             \n\n\t We can use pointers not only to the base object but also to the objects of derived classes.\
             \n\n\t A single pointer variable can be made to point to objects belonging to different classes.\n\
             \n\n\t Example:Let “B” be the base class and “D” be the derived class.\
             \n\n\t\t B *cptr; // a pointer to class B type variable\
             \n\n\t\t B b; // base object\
             \n\n\t\t D d; // derived object\
             \n\n\t\t cptr = &b; // cptr points to object b\
             \n\n\t\t We can make cptr to point to the object d as shown below:\
             \n\n\t\t cptr = &d; // cptr points to object d\n\
             \n\n\t This is valid in C++, if D is derived from B.Using cptr, we can access only those members\
             \n\n\t which are inherited from B and not the members that originally belong to D.In case a member\
             \n\n\t of the class D has the same name as one of the member of B, then any reference to that member\
             \n\n\t by cptr will always access the base class member.\
             \
             \n\n\n\t ** Press Any Key To Go To Back Page **";
             getch();
             virtual_polymorphism();            break;

   case 6:strt3:

         cout<<"\n\n\
               \t 1. POINTERS TO OBJECTS\n\n\
               \t 2. THIS POINTER\n\n\
               \t 3. POINTERS TO \n\n\
               \
               \t ** Press 4 To Return Front Page. **\n\n\
               \t => Enter Your Choice:";

               int c;
               cin>>c;
               switch(c)
               {
                   case 1: cout<<"\n\n\n\t\t\EXAMPLE: POINTERS TO OBJECTS\t\t\
                     \n\t --------\\n\
                    \n\n\t\t\
                    #include<iostream.h>                                                       \n\n\t\t\
                    using namespace std;                                                        \n\n\t\t\
                                                                                                  \n\n\t\t\
                    class item{                                                                 \n\n\t\t\
                         int code;                                                                \n\n\t\t\
                         float price;                                                             \n\n\t\t\
                         public:                                                                    \n\n\t\t\
                             void getdata(int a, float b){                                          \n\n\t\t\
                                 code = a;                                                          \n\n\t\t\
                                 price = b;                                                        \n\n\t\t\
                             }                                                                       \n\n\t\t\
                             void show(){                                                               \n\n\t\t\
                                 cout << 'code = '<< code << '  price = '<< price<<endl;}            \n\n\t\t\
                                 };                                                                                   \n\n\t\t\
                    main()                                                                                              \n\n\t\t\
                    {                                                                                                     \n\n\t\t\
                        item x;                                                                                           \n\n\t\t\
                        item *p = &x;                                                                                       \n\n\t\t\
                        p -> getdata(5, 500.75);                                                                             \n\n\t\t\
                        p -> show();                                                                                            \n\n\t\t\
                        item *ptr = new item[2];    // This statement creates a pointer to an array of objects.                  \n\n\t\t\
                        ptr -> getdata(5, 500);    // the pointer ptr points to the first element in the array of objects         \n\n\t\t\
                        ptr ++;                    // the pointer is incremented. i.e. ptr now points to the next(2nd) object in the array         \n\n\t\t\
                        ptr -> getdata(6, 600);    // pointer ptr points to the second element in the array of objects             \n\n\t\t\
                        ptr -> show();                                                                                             \n\n\t\t\
                        ptr --;                                                                                                   \n\n\t\t\
                        ptr -> show();             // ptr points to first element                                                      \n\n\t\t\
                    }";
                    cout<<"\n\n\n\t\t\ OUTPUT\t\t\
                                  \n\t --------\\n\
                                  \n\n\n\t\t code = 5  price = 500.75\t\t\
                                  \n\n\t\t code = 6  price = 600\t\t\
                                  \n\n\t\t code = 5  price = 500\t\t\
                                  \
                                  \n\n\n\t\t ** Press any Key To Go To Back Page **";
                                  getch();
                                  goto strt3;            break;

                  case 2: cout<<"\n\n\n\t\t\EXAMPLE:THIS POINTER \t\t\
                     \n\t --------\\n\
                    \n\n\t\t\
                     #include<iostream.h>                                                       \n\n\t\t\
                     using namespace std;                                                        \n\n\t\t\
                                                                                                  \n\n\t\t\
                     class person{                                                                 \n\n\t\t\
                         string name;                                                                \n\n\t\t\
                         int age;                                                             \n\n\t\t\
                         public:                                                                    \n\n\t\t\
                             person(string n, int a){                                          \n\n\t\t\
                                 name = n;                                                          \n\n\t\t\
                                 age = a;                                                       \n\n\t\t\
                             }                                                                      \n\n\t\t\
                             person & greater(person &x){                                            \n\n\t\t\
                                 if (x.age >= age)                                                  \n\n\t\t\
                                    return x;                                                      \n\n\t\t\
                                 else                                                              \n\n\t\t\
                                    return *this;                                                   \n\n\t\t\
                             }                                                                      \n\n\t\t\
                             void display(){                                                         \n\n\t\t\
                                 cout << “name = ” << name << “, age = ” << age;}                   \n\n\t\t\
                        };                                                                         \n\n\t\t\
                    main()                                                                          \n\n\t\t\
                    {                                                                                \\n\t\t\
                        person p1(“Abc”, 70);                                                         \n\n\t\t\
                        person p2 (“Xyz”, 10);                                                         \n\n\t\t\
                        person p = p1.greater(p2);                                                         \n\n\t\t\
                        cout << “Elder: \n”;                                                                 \n\n\t\t\
                        p.display();    // This statement creates a pointer to an array of objects.          \n\n\t\t\
                    }";

                    cout<<"\n\n\n\t\t\ OUTPUT\t\t\
                                  \n\t --------\\n\
                                  \n\n\n\t\t Elder:\t\t\
                                  \n\n\t\t name = Abc, age = 70\t\t\
                                  \
                                  \n\n\n\t\t ** Press any Key To Go To Back Page **";
                                  getch();
                                  goto strt3;            break;

                   case 3: cout<<"\n\n\n\t\t\POINTERS TO DERIVED CLASS\t\t\
                     \n\t --------\\n\
                    \n\n\t\t\
                     #include<iostream.h>                                                               \n\n\t\t\
                     using namespace std;                                                                \n\n\t\t\
                                                                                                          \n\n\t\t\
                     class BC{                                                                             \n\n\t\t\
                         public:                                                                            \n\n\t\t\
                         int b;                                                                             \n\n\t\t\
                         void show(){                                                                         \n\n\t\t\
                             cout << 'b = '<< b<<endl;}                                                      \n\n\t\t\
                      };                                                                                    \n\n\t\t\
                      class DC : public BC{                                                                \n\n\t\t\
                         public:                                                                         \n\n\t\t\
                             int d;                                                                     \n\n\t\t\
                             void show(){                                                             \n\n\t\t\
                                 cout << 'b = '<< b << '  d = '<< d<<endl;}                          \n\n\t\t\
                      };                                                                              \n\n\t\t\
                    int main()                                                                          \n\n\t\t\
                    {                                                                                     \n\n\t\t\
                        BC *bptr; // base pointer                                                           \n\n\t\t\
                        BC base;                                                                              \n\n\t\t\
                        bptr = &base; // assigns address of base class object to base pointer                   \n\n\t\t\
                        bptr -> b = 100;                                                                    \n\n\t\t\
                        bptr -> show();                                                                    \n\n\t\t\
                        DC derived;                                                                      \n\n\t\t\
                        bptr = &derived // assigns address of derived class object to base pointer       \n\n\t\t\
                        bptr -> b = 200;    // pointer ptr points to the second element in the array of objects                        \n\n\t\t\
                        bptr -> show();             // ptr points to first element                                                      \n\n\t\t\
                        DC *dptr = &derived;                                                                                             \n\n\t\t\
                        dptr -> d = 300;                                                                                                 \n\n\t\t\
                        dptr -> show();             // ptr points to first element                                                       \n\n\t\t\
                    }";
                    cout<<"\n\n\n\t\t\ OUTPUT\t\t\
                                  \n\t --------\\n\
                                  \n\n\n\t\t code = 5  price = 500.75\t\t\
                                  \n\n\t\t code = 6  price = 600\t\t\
                                  \n\n\t\t code = 5  price = 500\t\t\
                                  \
                                  \n\n\n\t\t ** Press any Key To Go To Back Page **";
                                  getch();
                                  goto strt3;            break;
                case 4:
                               front_page(); break;
                default:
                    cout<<"\nError Input .Try Again.\n";
                    goto strt3;
       }
    case 7:
      cout<<"\n\n\n\t\t\ VIRTUAL FUNCTIONS\t\t\
                     \n\t ------------------\
             \n\n\t In the above example we use the pointer to base class to refer to\
             \n\n\t all the derived objects. But a base pointer, even when it is made to contain the address\
             \n\n\t of a derived class, always executes the function in the base class.\
             \n\n\t Compiler simply ignores the contents of the pointer and chooses the member function that\
             \n\n\t matches the type of the pointer.In such a situation polymorphism is achieved using “virtual functions”\
             \n\n\t When we use the same function name in both base and derived classes, the function in base\
             \n\n\t class is declared as virtual, using the keyword “virtual”.\
             \n\n\t When function is made “virtual” then C++ determines which function to use at runtime based\
             \n\n\t on the type of object pointed to by the base pointer, rather than the type of pointer.";
              cout<<"\n\n\n\t\t\ VIRTUAL CONSTRUCTORS AND VIRTUAL DESTRUCTORS \t\t\
                     \n\t ------------------\
             \n\n\t We can have virtual destructor but not virtual constructors.\
             \n\n\n\t\t\EXAMPLE\t\t\
                     \n\t --------\\n\
                    \n\n\t\t\
                     #include<iostream.h>                                                               \n\n\t\t\
                     using namespace std;                                                                \n\n\t\t\
                                                                                                          \n\n\t\t\
                     class Base{                                                                             \n\n\t\t\
                         public:                                                                            \n\n\t\t\
                         void display()                                                                       \n\n\t\t\
                         {                                                                                    \n\n\t\t\
                             cout << “Display function of Base”;}                                            \n\n\t\t\
                         virtual void show()                                                                  \n\n\t\t\
                         {                                                                                     \n\n\t\t\
                             cout << “Show function of Base”;}                                                  \n\n\t\t\
                      };                                                                                       \n\n\t\t\
                       class Derived{                                                                             \n\n\t\t\
                         public:                                                                                \n\n\t\t\
                         void display()                                                                         \n\n\t\t\
                         {                                                                                      \n\n\t\t\
                             cout << “Display function of Derived”;}                                           \n\n\t\t\
                         void show()                                                                             \n\n\t\t\
                         {                                                                                        \n\n\t\t\
                             cout << “Show function of Derived”;}                                                  \n\n\t\t\
                      };                                                                                            \n\n\t\t\
                      main()                                                                                      \n\n\t\t\
                    {                                                                                              \n\n\t\t\
                        Base B;                                                                                   \n\n\t\t\
                        Derived D;                                                                                \n\n\t\t\
                        Base *bptr;                                                                              \n\n\t\t\
                        bptr = &B;                                                                               \n\n\t\t\
                        bptr -> display();                                                                       \n\n\t\t\
                        bptr -> show();                                                                           \n\n\t\t\
                        bptr = &D;                                                                                \n\n\t\t\
                        bptr -> display();                                                                        \n\n\t\t\
                       bptr ->show();                                                                             \n\n\t\t\
                    }";
                    cout<<"\n\n\n\t\t\ OUTPUT\t\t\
                                  \n\t --------\\n\
                                  \n\n\n\t\t Display function of Base\t\t\
                                  \n\n\t\t Show function of Base\t\t\
                                  \n\n\t\t Display function of Base\t\t\
                                  \n\n\t\t Show function of Derived\t\t\
             \
             \n\n\n\t ** Press any Key To Go To Back Page **";
             getch();
             virtual_polymorphism();          break;
    case 8:
      cout<<"\n\n\n\t\t\ PURE VIRTUAL FUNCTIONS\t\t\
                     \n\t -----------------------\
             \n\n\t Pure Virtual Function is a “do – nothing function” defined as:\
             \n\n\t\t\t virtual void display() = 0;\
             \n\n\t Pure Virtual Function is function declared in a base class that has no definition relative to the\
             \n\n\t base class. In such cases, the compiler requires each derived class to either define the\
             \n\n\t function or redeclare it as a pure virtual function.\
             \n\n\t Class containing pure virtual functions cannot be used to declare any object of its own. Such\
             \n\n\t a class is called “Abstract Base Class”.\
             \n\n\t Objective of abstract base class is to provide some traits to the derived classes and to create a\
             \n\n\t base pointer required for achieving runtime polymorphism.\
             \
             \n\n\n\t ** Press any Key To Go To Back Page **";
             getch();
             virtual_polymorphism();          break;
    case 9:
      cout<<"\n\n\n\t\t\ VIRTUAL CONSTRUCTORS AND VIRTUAL DESTRUCTORS \t\t\
                     \n\t ------------------\
             \n\n\t We can have virtual destructor but not virtual constructors.\
             \n\n\n\t\t\PROGRAM TO IMPLEMENT VIRTUAL DESTRUCTOR\t\t\
                     \n\t ---------------------------------------\\n\
                    \n\n\t\t\
                     #include<iostream.h>                                                               \n\n\t\t\
                     using namespace std;                                                                \n\n\t\t\
                                                                                                          \n\n\t\t\
                     class base{                                                                           \n\n\t\t\
                         public:                                                                            \n\n\t\t\
                         base()                                                                             \n\n\t\t\
                         {                                                                                   \n\n\t\t\
                             cout << “Base Constructor”;}                                                     \n\n\t\t\
                         virtual ~base()                                                                       \n\n\t\t\
                         {                                                                                      \n\n\t\t\
                             cout << “Base Destructor”;}                                                          \n\n\t\t\
                      };                                                                                          \n\n\t\t\
                       class derived{                                                                             \n\n\t\t\
                         public:                                                                                  \n\n\t\t\
                         derived()                                                                                \n\n\t\t\
                         {                                                                                      \n\n\t\t\
                             cout << “Derived Constructor”;}                                                     \n\n\t\t\
                         ~derived()                                                                             \n\n\t\t\
                         {                                                                                       \n\n\t\t\
                             cout << “Derived Destructor”;}                                                       \n\n\t\t\
                      };                                                                                            \n\n\t\t\
                      main()                                                                                       \n\n\t\t\
                    {                                                                                              \n\n\t\t\
                        base * baseobj = new derived();                                                           \n\n\t\t\
                        delete baseobj;                                                                            \n\n\t\t\
                    }";
                    cout<<"\n\n\n\t\t\ OUTPUT\t\t\
                                  \n\t --------\\n\
                                  \n\n\n\t\t Base Constructor\t\t\
                                  \n\n\t\t Derived Constructor\t\t\
                                  \n\n\t\t Derived Destructor\t\t\
				  \n\n\t\t Base Destructor\t\t\
                                ";

                    cout<<"\n\n\n\t ** Press any Key To Go To Back Page **";
                            getch();
                            virtual_polymorphism();          break;
    case 10:
       front_page();                   break;
    default:
        cout<<"\nError Input .Try Again.\n";
        virtual_polymorphism();
    }
}

int main(void)
{
  oop p1;
  p1.front_page();
 }
