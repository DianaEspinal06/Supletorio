#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int ar=10;
	string articulos[10];
	float precio[10];
	float total,subtotal=0,iva,descuento;

cout<<"**************FACTURACION DE PRODUCTOS DE COMPRAR**************\n\n";	
	for(int i=0;i<ar;i++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(i+1)<<":\n";
        cout<<"Nombre: "; getline(cin,articulos[i]);
		cout<<"Precio: "; cin>>precio[i];
		cin.ignore();
		cout<<endl;
    }
    
    cout<<"***********SU FACTURA***********\n\n";
    for(int i=0;i<ar;i++)
    {
    	subtotal=subtotal+precio[i];
    	iva=subtotal*0.12;	
	    descuento=subtotal*0.10;
    	total=subtotal+iva-descuento;
	}
	for(int i=0;i<ar;i++)
	{
		cout<<i+1<<".-     "<<articulos[i]<<"\t\t"<<precio[i]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<subtotal<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<descuento<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
cout<<"****************GRACIAS POR SU COMPRA****************";
getch ();
return 0;
}