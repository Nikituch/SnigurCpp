#include <iostream>
#include <string>
using namespace std;
	enum Error{
		ex1,
		ex2,
		ex3
	};
	
	void printInfo(int ex)
	{
		switch (ex)
		{
		case 1:
			cout << "¬и помилились, спробуйте ще раз asd... "<< endl; 
			break;
		default:
			cout << "¬и помилились, спробуйте ще раз sdf ... " << endl;
			break;
		}	
	}
	
	int foomassp(int* arr){
		int p = 0;
		
    	for (int i = 0; i < 10; i++) {
        	if (*(arr+i)%2 == 0) 
            	p++;
    	}
    	
    	return p;
    	
	}
	
		int foomassnp(int* arr){
		int np = 0;
		
    	for (int i = 0; i < 10; i++) {
        	if (*(arr+i)%2 != 0) 
            	np++;
    	}
    	
    	return np;
    	
	}

	int main(){
		
		setlocale(LC_ALL, "Russian");
		Error last = ex1;
		int error = last;
		int exit = 1;
		int arr[10] ;
		int a = 0;
		
		while(exit){
			cout<<"¬ведiть елементи масива (цiлiчисла)"<<endl;
				
				for(int i = 0; i<10; i++){
					cout<<i+1<<") = ";
					cin >> arr[i];
						
					while (!(cin.good())){
						error = 1;        
        				printInfo(error);
						cout<<i+1<<") ";       
        				cin.clear();                
        				fflush(stdin);            
    				}
    				
    			}
    			
    			cout<<"ѕарних елементiв - "<< foomassp(arr) <<endl;
    			cout<<"Ќепарних елементiв - "<< foomassnp(arr) <<endl;
    			
				if(foomassp(arr)>foomassnp(arr)){
					cout<<"ѕарних елементiв бiльше"<<endl;
				}else if(foomassp(arr) == foomassnp(arr)){
					cout<<" iлькiсть  елементiв однакова"<<endl;
				}else
					cout<<"Ќепарних елементiв бiльше"<<endl;
				
    			
			cout<<"якщо ви хочете продовжити  натиснiть - 1 "<<endl;
			cout<<"якщо ви хочете вийти натиснiть - 0 "<<endl;
		
			while (!(cin >> exit)){  

        	cout <<"¬и помилились, спробуйте ще раз " << endl;
			cout<<"ƒл€ продовженн€  натиснiть - 1 "<<endl;
			cout<<"якщо ви хочете вийти натиснiть - 0 "<<endl;          
        	cin.clear();                
        	fflush(stdin); 
			
    		}					
		}	
		system("pause");
		return 0;
	}
