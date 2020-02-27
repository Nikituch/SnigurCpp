#include <iostream>
#include <string>
#include <cstdlib>

 using namespace std;
 	enum Error{
 		ex1,
 		ex2
	};
	
	void printInfo(int ex)
	{
 		switch (ex)
 		{
 		case 1:
			cout << "¬и помилились, введiть цiле число ... "<< endl; 
 			break;
 		default:
			cout << "¬и помилились, спробуйте ще раз ... " << endl;
 			break;
 		}	
 	}

 	int foomassp(int* arr){
 		int p = 0;
 		

    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 == 0) 
             	p++;
     	}
		return p;
     	
 		}

 		int foomassnp(int* arr){
 		int np = 0;
 		
    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 != 0) 
             	np++;
     	}

     	return np;
     	
 		}
	
		bool fooCheck(char* p){
			
			while(*p)
				
	   			if(!isdigit(*p++) && *p =='-' ){
        			return false;	
    			}
   	
    		return true;
		}
		
				bool fooCheck2(char* p){
			
			while(*p)
				
	   			if(!isdigit(*p++) ){
        			return false;	
    			}
   	
    		return true;
		}
		
		bool fooNumberCheck(int digit){
								
			if(digit == 1 || digit == 0)
				return false;
	
				cout <<"¬и помилились, спробуйте ще раз " << endl;
				cout<<"ƒл€ продовженн€  натиснiть - 1 "<<endl;
				cout<<"якщо ви хочете вийти натиснiть - 0 "<<endl; 
				return true;
					
				
		}
		
			bool fooCheckExit(int exit){
								
				if(exit == 1)
				return true;

				return false;
						
			}
			
			void fooCheckMass(int p, int np){
				
				cout<<"ѕарних елементiв - "<< p <<endl;
    			cout<<"Ќепарних елементiв - "<< np <<endl;
    			
				if(p>np){
					
					cout<<"ѕарних елементiв бiльше"<<endl;
					
				}else if(p == np){
					
					cout<<" iлькiсть  елементiв однакова"<<endl;
					
				}else
				
					cout<<"Ќепарних елементiв бiльше"<<endl;
			}
		
		
 
 	int main(){
 		
 		setlocale(LC_ALL, "Russian");
 		Error last = ex1;
 		int error = last;
		bool exit = true, isd = true;
		int arr[20] ;	
		char str[256], *p = str;
		
 		
 		while(exit){
			isd = true;
 			cout<<"¬ведiть елементи масива (цiлiчисла)"<<endl;
 				

				for(int i = 0; i<20; i++){
 					cout<<i+1<<") = ";
					cin >> str;
						if(fooCheck(p))
							*(arr+i) = atoi(str);
						else{
 						
						error = 1;
						printInfo(error);
						i--;
						}
     			}
     			

    			fooCheckMass(foomassp(arr),foomassnp(arr));		
     			
 			cout<<"якщо ви хочете продовжити  натиснiть - 1 "<<endl;
 			cout<<"якщо ви хочете вийти натиснiть - 0 "<<endl;
 		

			while(isd){
	
				cin >> str;
    		
					if(fooCheck2(p) ){
		
						isd = fooNumberCheck(atoi(str));
							if(!isd)
								exit = fooCheckExit(atoi(str));
					
					}else{
						cout <<"¬и помилились, спробуйте ще раз " << endl;
						cout<<"ƒл€ продовженн€  натиснiть - 1 "<<endl;
						cout<<"якщо ви хочете вийти натиснiть - 0 "<<endl; 
						isd = true;
					}
					
					
        	}  		    	     								
    							
 		}	
 		system("pause");
 		return 0;
 }
