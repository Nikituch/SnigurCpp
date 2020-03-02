#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

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
			cout<<"Якщо ви хочете вийти натиснiть - 2 "<<endl; 
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
		 int GetInt(){
   			int k, n = 0, flgS = 0, c = 0, q = 0;
 
    			while (1)
   			{
 
        			k = getch();
 
        			if ((k == '-') && (c == 0) && (flgS == 0)) 
       			{
          			flgS = -1;
          			putch('-');
          			c++;
       			}
 
       			if ((k >= '0') && (k <= '9')) 
       			{
           			printf("%c",k);
           			n = n*10 + k-'0';
           			c++;
           			q++;
       			}
     
       			if (k == 8)
       			{
           			putch(8);
           			putch(' ');
           			putch(8);
           			n = n / 10;
           			q--;
           			if (q < 0) q=0;
           			c--;
           			if (c == 0) flgS=0;
       			}
 
       			if ((k == 13) && (c != 0) && (q != 0)) break;
 
    		}
 
    			if (flgS == -1) n = -n;
    	return n;
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
		
 		while(exit){
			cout<<endl;
 			cout<<"Введiть елементи масива (цiлiчисла)"<<endl;
 				
				for(int i = 0; i<20; i++){
					
 					cout<<i+1<<") = ";
					*(arr+i) = GetInt();
					cout<<endl;	
     			}
     			

    			fooCheckMass(foomassp(arr),foomassnp(arr));		
     			
 			cout<<"Якщо ви хочете продовжити  натиснiть - 1 "<<endl;
 			cout<<"Якщо ви хочете вийти натиснiть - 2 "<<endl;
 		

			while(1){
				int ex ;
				ex = GetInt();
				if( ex == 1){
					exit = true;
					break;
				}else if(ex == 2){
					exit = false;
					break;
				}else{
					cout<<endl;
					error = 2;
					printInfo(error);
				}
					
					
        	} 		    	     								
    							
 		}
		 cout<<endl;	
 		system("pause");
 		return 0;
 }
