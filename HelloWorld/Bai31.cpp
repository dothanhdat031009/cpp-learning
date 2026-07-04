#include <iostream>
#include <string>

using namespace std ;

int canh ;
int tam_giac(int x)
{
    string tam_giac_ben_trai = "                                                                                *";
    string tam_giac_ben_phai = "*                                                                                 ";
    
    cout << "                                                                                *                                                                                 "
         << "\n";
    tam_giac_ben_trai.erase(0 , 2) ;
    tam_giac_ben_trai = tam_giac_ben_trai + "  ";
    tam_giac_ben_phai = "  " + tam_giac_ben_phai ;
    tam_giac_ben_phai.erase(0 , 1);
    cout << tam_giac_ben_trai + tam_giac_ben_phai
         << "\n";
    x++ ;
    while (x < canh - 1)
    {
        tam_giac_ben_trai.erase(0 , 2) ;
        tam_giac_ben_trai = tam_giac_ben_trai + "  ";
        tam_giac_ben_phai = "  " + tam_giac_ben_phai ;
        cout << tam_giac_ben_trai + tam_giac_ben_phai 
             << "\n";
        x++ ;
    }
    tam_giac_ben_trai.erase(0 , 2);
    tam_giac_ben_trai.erase(tam_giac_ben_trai.length() - 2 * (x - 1), 2 * (x - 1));
    
    for(int N = 1 ; N <= (x - 4) / 2 + 1 ; N++ )
    {
        tam_giac_ben_trai = tam_giac_ben_trai + "   *" ;   
    }

    tam_giac_ben_phai.erase(tam_giac_ben_phai.length() - 2 , 2);
    tam_giac_ben_phai.erase(0, 2 * (x - 1) - 1);

    for(int n = 1 ; n <= (x - 4) / 2 + 1 ; n++)
    {
        tam_giac_ben_phai = "*   " + tam_giac_ben_phai ;
    }
    if (canh > 2 && canh % 2 == 0)
    {
        cout << tam_giac_ben_trai + "   *   *   " + tam_giac_ben_phai ;
    }    
    else if (canh > 2 && canh % 2 != 0)
    {
        cout << tam_giac_ben_trai + "   *   " + tam_giac_ben_phai ;
    }
    else if (canh == 2)
    {
        cout << "                                                                               *   *                                                                                ";
    }
    return 0;
}
int thoi(int x)
{

    return 0 ;
}

int main()
{
    string hinh ;
    cout << "Bạn muốn hình tam giác đều có độ dài cạnh bao nhiêu ?"
         << "\n"
         << "=> ";
    cin >> canh ;
    cout << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n" ;
    tam_giac(1);
    cout << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "                                                                   ----- Hình của bạn đó -----                                         ";
    return 0 ;
}