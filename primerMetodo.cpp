#include <iostream>
#include <string.h>
#include <string>
#include <bitset>

using namespace std; 
 
void convertToASCII(string letter);
int convertToBinary(string str);
int main() {
int metodo; 
int n; 

//string text; 
///////////////////////////////////////////////////
/*cout<<"ingrese letras: ";
cin>> text; 

convertToASCII(text);*/
////////////////////////////////////////////////


//PASAR DE CARACTERES A BINARIO
string caracteres; 
cout<<"ingrese una cadena de caracteres: "; 
cin>>caracteres;  
convertToBinary(caracteres);



return 0; 
}



void convertToASCII(string letter)
{
    for(int i=0; i<letter.length(); i++){

char x=   letter.at(i); 
cout<<int(x)<<endl; 
}
}

int convertToBinary(string str){

for(int i = 0; i <str.size(); i ++ ){
    bitset<8> bs4(str[i]);
    cout<<bs4;
   

    if (i%6 == 0 && i!=0){
        cout<<endl; 

    }
    cout<<" "; 
    
}
 
}