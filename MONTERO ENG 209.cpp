#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main ()
{
	int m, d, y;
	bool stop = false;
	string invd;
	
	invd = "\nInvalid Date!";
	
	do
	{
		cout << "Enter Month: \n";
		cin >> m;
		
		cout << "Enter Day: \n";
		cin >> d;
		
		cout << "Enter Year: \n";
		cin >> y;
		
		if (m == 0 || m >= 13 || d == 0 || d >= 32 || y == 0 || m == 2 && d >= 29 || m == 1 && m == 3 && m == 5 && m == 7 && m == 8 && m == 10 && m == 12 && d >=31 || m == 4 && m == 6 && m == 9 && m == 11 && d >= 30)
		{
			cout << invd << endl;
			break;
		}
		
   switch(m)
   {
   	case 1: 
  		cout<< "\nJANUARY " << d << " " << y << endl;	
    	break;
 
   case 2:
		cout<< "\nFEBRUARY " << d << " " << y << endl;
		break;
		
	case 3:
		cout<< "\nMARCH " << d << " " << y << endl;
		break;
		
	case 4: 
  		cout<< "\nAPRIL " << d << " " << y << endl;
		break;

	case 5: 
   		cout<< "\nMAY " << d << " " << y << endl;
		break;

	case 6: 
   		cout<< "\nJUNE " << d << " " << y << endl;
		break;

	case 7: 
   		cout<< "\nJULY " << d << " " << y << endl;
		break;
		
	case 8: 
   		cout<< "\nAUGUST " << d << " " << y << endl;
		break;
		
	case 9: 
   		cout<< "\nSEPTEMBER " << d << " " << y << endl;
		break;

	case 10: 
   		cout<< "\nOCTOBER " << d << " " << y << endl;
		break;

	case 11: 
   		cout<< "\nNOVEMBER " << d << " " << y << endl;
	break;

	case 12:
   		cout<< "\nDECEMBER " << d << " " << y << endl;
		break;
	}		

	
	
	} while (!stop);

   return 0;
}
