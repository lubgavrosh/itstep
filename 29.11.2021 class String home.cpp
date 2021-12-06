#include <iostream>
#include <string>
#include<cstring>
#include<Windows.h>
using namespace std;

class String
{
private:
    char* ch;
    char* s;
 
    string d;
    string j;
    string e=" ";
    string a;
    const int SIZE = 80;
public:
    String() 
    {
       
        ch= new char[SIZE];
        s = new char [SIZE];
     
      
    }
    String(char* ch,char*s)
    {
       ch = new char;
       s = new char;
    }

    String(const String& ch, const String &s)
    {}
    
    void Initialization()
    {
       
       
        cout << "Enter first string: ";
        cin.getline(ch, 80);
        cout<< endl;
        cout << "Enter second string: ";
        cin.getline(s, 80);
       
    }
    void Show() const
    {
        cout << "String1: " << ch<< endl;
        cout << "String2: " << s << endl;
    }
    void association()
    {
       
        cout << "Association String(1&2): ";
         strcat_s(ch, 80,s);
        cout << ch << endl;
        Sleep(2000);
        
     }
    void cross()
    {
        system("cls");
        cout << "Enter  first string:";
        cin >> d;
        cout << endl;
        cout << "Enter second string: ";
        cin >> j;
        int count=0;
        char a1, a2='0';
      
        for ( int i = 0; i <= j.length();i++)
        {
            for (int x = 0; x < d.length(); x++)
            {
                if (j[i] == d[x])
                {
                    
                        a1 = j[i];
                        if (a1 != a2 )
                        {
                            a2 = a1;
                         
                                    e.push_back(a1);
                                
                           
                         
                        }
                    
                }
            }

        }
        int n,m;
        for ( n=0; n < e.size(); n++)
        {
            if (e[n] == e[n + 1])
            {
                e.erase(n, 1);
            }
        }
        a = e;
        for (n = 0; n < e.size(); n++)
        {
            for (m=n+1 ; m < a.size()+1; m++)
            {
                if (e[n] == a[m])
                {
                    a.erase(m, 1);
                }
            }
        }
        cout << "The same letter of String 1 & 2: "<<a;
 }
    
    ~String()
    {
        delete[] ch;
        delete[] s;
       
    }
};

void main()
{
    String s;
    s.Initialization();
    s.Show();
    s.association();
    s.cross();
    



    

}




