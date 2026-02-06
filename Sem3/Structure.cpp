#include<iostream>
#include<string>
using namespace std;

const int MAX=100;
 
 struct Producto{
    int codigo;
    string nombre;
    float precio;
    int stock;
 };

 void registrarProductos(Producto productos[], int &n){
    int cantidad;
    cout<<"¿Cuántos productos desea registrar?"<< endl;
    cin>> cantidad;

    for(int i =0; i< cantidad; i++){
        cout<<"\nProducto "<< n+1<< endl;

        cout<<"Código; ";
        cin>> productos[n].codigo;

        cin.ignore();
        cout<<"Nombre: ";
        getline(cin, productos[n].nombre);

        do{
            cout<< "Precio: ";
            cin>> productos[n].precio;
        } while (productos[n].precio <=0);

        do{
            cout<<"Stock: ";
            cin>> productos[n].stock;
        }while(productos[n].stock<0);

        n++;
    }
 }

 void mostrarProductos(Producto productos[], int n){
    if(n==0){
        cout<<"No hay productos registrados.\n";
        return;
    }

    cout<<"\nLISTA DE PRODUCTOS\n";
    for(int i=0; i<n; i++){
        cout<<"Código: "<<productos[i].codigo
            <<" Nombre: "<<productos[i].nombre
            <<" Precio: "<< productos[i].precio
            << "Stock: " <<productos[i].stock<< endl;
    }
 }
void buscarPorCodigo(Producto productos[], int n){
    int codigo;
    cout<<"Ingrese código a buscar: ";
    cin>> codigo;

    for(int i=0; i< n; i++){
        if(productos[i].codigo==codigo){
            cout<<"\nProducto encontrado:\n";
            cout<<"Nombre: "<< productos[i].nombre
            <<"\nPrecio: "<< productos[i].precio
            <<"\nStock: "<< productos[i].stock<< endl;
            return;
        }
    }
    cout<<"No encontrado. \n";
}
void buscarPorNombre(Producto productos[], int n){
    string nombre;
    cin.ignore();
    cout<<"Ingrese nombre a buscar: ";
    getline(cin, nombre);

    for(int i=0; i<n; i++){
        if(productos[i].nombre==nombre){
            cout<<"\nProducto encontrado:\n";
            cout<<"Código: "<< productos[i].codigo
                <<"\nPrecio: "<<productos[i].precio
                <<"\nStock: "<<productos[i].stock<< endl;
            return;
        }
    }
    cout<<"No encontrado.\n";
}

void productoMayorStock(Producto productos[], int n){
    if(n==0) return;

    int pos=0;
    for(int i=1; i<n; i++){
        if (productos[i].stock> productos[pos].stock)
        pos=i;
    }

    cout<<"\nProducto con mayor stick:\n";
    cout<< productos[pos].nombre<<"("<< productos[pos].stock<<"unidades)\n";

}

void productoMascaro(Producto productos[], int n){
    if (n==0) return;

    int pos=0;
    for(int i=1; i<n; i++){
        if (productos[i].precio>productos[pos].precio)
        pos=i;
    }
    
    cout<<"\nProducto más caro:\n";
    cout<<productos[pos].nombre<< "-Precio: "<<productos[pos].precio<< endl;
}

void valorTotalInventario(Producto productos[], int n){
    float total = 0;
    for(int i=0; i<n; i++){
        total+= productos[i].precio * productos[i].stock;
    cout<<"Valor total del inventario: "<<total<< endl;
}
}
void ordenadoPorPrecio(Producto productos[], int n){
    float total=0;
    for(int i=0; i<n; i++){
        total+= productos[i].precio * productos[i].stock;
    }
    cout<<"Valor total del inventario: "<< total << endl;
}

void ordenarPorPrecio(Producto productos[], int n){
    Producto aux;
    for(int i =0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(productos[i].precio<productos[j].precio){
                aux= productos[i];
                productos[i]= productos[j];
                productos[j];
            }
        }
    }
    cout<<"Productos ordenados por precio(mayor a menor).\n";
}

void ordenarPorNombre(Producto productos[], int n){
    Producto aux;
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n; j++){
            if(productos[i].nombre> productos[j].nombre){
                aux=productos[i];
                productos[i]=productos[j];
                productos[j]=aux;
            }
        }
    }
    cout<<"Productos ordenados por nombre(A-Z).\n";
}

int main(){
    Producto productos[MAX];
    int n=0;
    int opcion;
    do{
        cout << "\n--- MINI SISTEMA DE TIENDA ---\n";
        cout << "1. Registrar productos\n";
        cout << "2. Mostrar productos\n";
        cout << "3. Buscar producto por codigo\n";
        cout << "4. Buscar producto por nombre\n";
        cout << "5. Mostrar producto con mayor stock\n";
        cout << "6. Mostrar producto más caro\n";
        cout << "7. Calcular valor total del inventario\n";
        cout << "8. Salir\n";
        cout << "9. Ordenar por precio (mayor a menor)\n";
        cout << "10. Ordenar por nombre (A-Z)\n";
        cout << "Opcion: ";
        cin >> opcion;

         switch (opcion) {
            case 1: registrarProductos(productos, n); break;
            case 2: mostrarProductos(productos, n); break;
            case 3: buscarPorCodigo(productos, n); break;
            case 4: buscarPorNombre(productos, n); break;
            case 5: productoMayorStock(productos, n); break;
            case 6: productoMascaro(productos, n); break;
            case 7: valorTotalInventario(productos, n); break;
            case 9: ordenarPorPrecio(productos, n); break;
            case 10: ordenarPorNombre(productos, n); break;
            case 8: cout << "Saliendo...\n"; break;
            default: cout << "Opción inválida.\n";
         }
    } while(opcion=8);

    return 0;
}