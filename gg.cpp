#include <iostream>
#include <string>
#include <cstdlib>

 using namespace std;
 	enum Error{
 		ex1,
 		ex2
	};
	
// �������� ������ � �������
	void printInfo(int ex)
	{
 		switch (ex)
 		{
 		case 1:
			cout << "�� ����������, ����i�� ���� ���� �i�� ����� ... "<< endl; 
 			break;
 		case 2:
 			cout <<"�� ����������, ��������� �� ��� " << endl;
			cout<<"��� �����������  ������i�� - 1 "<<endl;
			cout<<"���� �� ������ ����� ������i�� - 0 "<<endl; 
			break;
 		default:
			cout << "�� ����������, ��������� �� ��� ... " << endl;
 			break;
 		}	
 	}
 	
//������ ������ ��������� ������
 	int foomassp(int* arr){
 		int p = 0;
 		

    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 == 0) 
             	p++;
     	}
		return p;
     	
 		}
//������ �������� ��������� ������
 		int foomassnp(int* arr){
 		int np = 0;
 		
    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 != 0) 
             	np++;
     	}

     	return np;
     	
 		}
//�������� �� ����(������ �����)
		bool fooCheck(char* p){
			
			while(*p)
	   			if(!isdigit(*p++) || *p == '-' )
        			return false;	
    			
   	
    		return true;
		}
//�������� �� ����(����� �� ������ �����)
				bool fooCheck2(char* p){
				
	   			if(*p == '-' )
        			return true;	
    	
    		return true;
		}
//�������� �� ����(��� �������)
				bool fooCheck3(char* p){
			while(*p)
	   			if(*p++ == ' '){
        			return false;	
    			}
   	
    		return true;
		}
//�������� �� ����(����� �� ������ �����)
				bool fooCheck4(char* p){
			
			while(*p)
	   			if(*p++ == '-'){
        			return false;	
    			}
   	
    		return true;
		}
//�������� �� ����(������ 1 ��� 0)
		bool fooNumberCheck(int digit){
								
			if(digit == 1 || digit == 0)
				return false;
	
				cout <<"�� ����������, ��������� �� ��� " << endl;
				cout<<"��� �����������  ������i�� - 1 "<<endl;
				cout<<"���� �� ������ ����� ������i�� - 0 "<<endl; 
				return true;
					
				
		}
		
			bool fooCheckExit(int exit){
								
				if(exit == 1)
				return true;

				return false;
						
			}
			
			void fooCheckMass(int p, int np){
				
				cout<<"������ �������i� - "<< p <<endl;
    			cout<<"�������� �������i� - "<< np <<endl;
    			
				if(p>np){
					
					cout<<"������ �������i� �i����"<<endl;
					
				}else if(p == np){
					
					cout<<"�i���i���  �������i� ��������"<<endl;
					
				}else
				
					cout<<"�������� �������i� �i����"<<endl;
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
 			cout<<"����i�� �������� ������ (�i�i�����)"<<endl;
 				
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
     			
 			cout<<"���� �� ������ ����������  ������i�� - 1 "<<endl;
 			cout<<"���� �� ������ ����� ������i�� - 0 "<<endl;
 		

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
