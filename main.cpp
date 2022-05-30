//
//  main.cpp
//
//
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    
    int Bil[6]={0, 0, 0, 0, 0, 0};
    int count=0;
    
    while (Bil[0]<10)
    {
        while (Bil[1]<10)
        {
            while (Bil[2]<10)
            {
                while (Bil[3]<10)
                {
                    while (Bil[4]<10)
                    {
                        while (Bil[5]<10)
                        {
                            if (Bil[0]+Bil[1]+Bil[2]==Bil[3]+Bil[4]+Bil[5]) count++;
                            
                            Bil[5]++;
                        }
                        Bil[5]=0;
                        Bil[4]++;
                    }
                    Bil[4]=0;
                    Bil[3]++;
                }
                Bil[3]=0;
                Bil[2]++;
            }
            Bil[2]=0;
            Bil[1]++;
        }
        Bil[1]=0;
        Bil[0]++;
    }
    
    cout << count;
    
    
    return 0;
}
