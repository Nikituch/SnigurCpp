#include <iostream>
#include <string>
#include <cstdlib>

 using namespace std;
 	enum Error{
 		ex1,
 		ex2
	};
	
// Печатает ошибку в консоль
	void printInfo(int ex)
	{
 		switch (ex)
 		{
 		case 1:
			cout << "Ви помилились, введiть лише одне цiле число ... "<< endl; 
 			break;
 		case 2:
 			cout <<"Ви помилились, спробуйте ще раз " << endl;
			cout<<"Для продовження  натиснiть - 1 "<<endl;
			cout<<"Якщо ви хочете вийти натиснiть - 0 "<<endl; 
			break;
 		default:
			cout << "Ви помилились, спробуйте ще раз ... " << endl;
 			break;
 		}	
 	}
 	
//Подщёт парных елементов масива
 	int foomassp(int* arr){
 		int p = 0;
 		

    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 == 0) 
             	p++;
     	}
		return p;
     	
 		}
//Подщёт непарных елементов масива
 		int foomassnp(int* arr){
 		int np = 0;
 		
    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 != 0) 
             	np++;
     	}

     	return np;
     	
 		}
//Проверка на ввод(только числа)
		bool fooCheck(char* p){
			
			while(*p)
	   			if(!isdigit(*p++) || *p == '-' )
        			return false;	
    			
   	
    		return true;
		}
//Проверка на ввод(числа со знаком минус)
				bool fooCheck2(char* p){
				
	   			if(*p == '-' )
        			return true;	
    	
    		return true;
		}
//Проверка на ввод(без пробела)
				bool fooCheck3(char* p){
			while(*p)
	   			if(*p++ == ' '){
        			return false;	
    			}
   	
    		return true;
		}
//Проверка на ввод(числа со знаком минус)
				bool fooCheck4(char* p){
			
			while(*p)
	   			if(*p++ == '-'){
        			return false;	
    			}
   	
    		return true;
		}
//Проверка на ввод(только 1 или 0)
		bool fooNumberCheck(int digit){
								
			if(digit == 1 || digit == 0)
				return false;
	
				cout <<"Ви помилились, спробуйте ще раз " << endl;
				cout<<"Для продовження  натиснiть - 1 "<<endl;
				cout<<"Якщо ви хочете вийти натиснiть - 0 "<<endl; 
				return true;
					
				
		}
		
			bool fooCheckExit(int exit){
								
				if(exit == 1)
				return true;

				return false;
						
			}
			
			void fooCheckMass(int p, int np){
				
				cout<<"Парних елементiв - "<< p <<endl;
    			cout<<"Непарних елементiв - "<< np <<endl;
    			
				if(p>np){
					
					cout<<"Парних елементiв бiльше"<<endl;
					
				}else if(p == np){
					
					cout<<"Кiлькiсть  елементiв однакова"<<endl;
					
				}else
				
					cout<<"Непарних елементiв бiльше"<<endl;
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
 			cout<<"Введiть елементи масива (цiлiчисла)"<<endl;
 				
				for(int i = 0; i<20; i++){
 					cout<<i+1<<") = ";
					gets(str);
						if(fooCheck(p) && fooCheck3(p) && fooCheck2(p) )
							*(arr+i) = atoi(str);
						else {
						error = 1;
						printInfo(error);
						i--;
						}
     			}
     			

    			fooCheckMass(foomassp(arr),foomassnp(arr));		
     			
 			cout<<"Якщо ви хочете продовжити  натиснiть - 1 "<<endl;
 			cout<<"Якщо ви хочете вийти натиснiть - 0 "<<endl;
 		

			while(isd){
	
				gets(str);
    		
					if(fooCheck2(p) && fooCheck3(p)){
		
						isd = fooNumberCheck(atoi(str));
							if(!isd)
								exit = fooCheckExit(atoi(str));
					
					}else{
						error = 2;
						printInfo(error);
						isd = true;
					}
					
					
        	}  		    	     								
    							
 		}	
 		system("pause");
 		return 0;
 }
