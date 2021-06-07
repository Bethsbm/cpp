#include <iostream>
#include <string>

using namespace std;

string productos [5][3] = 
{
    {"001", "iPhone X", "0"},
    {"002", "Laptop Dell", "5"},
    {"003", "Monitor Samsung", "2"},
    {"004", "Mouse", "100"},
    {"005", "Headset", "25"}
};

    void listarProductos(){
        system("cls");
        cout << "\nListado de productos"<< endl;
        cout << "********************"<< endl;
        cout << "Codigo | Descripcion | Existencia" << endl;
        for (int i=0; i < 5; i++)
        {
            cout << productos[i][0] << " | " << productos [i][1] << " | " << productos [i][2] << endl;
        }
    }

    void movimientoInventario(string codigo, int cantidad, string tipoMovimiento){
        for (int i = 0; i < 5; i++)
        {
            if (productos [i][0]==codigo)
            {
                if(tipoMovimiento == "+")
                    productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
                else
                    productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
            }
        }
    }

    void ingresoDeInventario(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout << "\nIngreso de productos al inventario"<<endl;
        cout << "**********************************"<<endl;
        cout << "Ingrese el codigo del producto: ";
        cin >> codigo;
        cout << "\nIngrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "+");
    }

    void salidaDeInventario(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout << "\nSalida de productos del inventario"<<endl;
        cout << "**********************************"<<endl;
        cout << "Ingrese el codigo del producto: ";
        cin >> codigo;
        cout << "\nIngrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "-");
    }

    void ajusteInventarioPositivo(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout << "\nAjustes positivos de productos al inventario"<<endl;
        cout << "**********************************************"<<endl;
        cout << "Ingrese el codigo del producto: ";
        cin >> codigo;
        cout << "\nIngrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "+");
    }

    void ajusteInventarioNegativo(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout << "\nAjustes negativos de productos al inventario"<<endl;
        cout << "**********************************************"<<endl;
        cout << "Ingrese el codigo del producto: ";
        cin >> codigo;
        cout << "\nIngrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "-");
    }

int main(int argc, char const *argv[])
{ 
    int opcion = 0;

    while (true){
        system ("cls"); //Para limpiar pantalla
        cout << "Sistema de inventario" << endl;
        cout << "*********************" << endl;
        cout << "1. Productos" << endl;
        cout << "2. Ingreso de inventario" << endl;
        cout << "3. Salida de inventario" << endl;
        cout << "4. Ajuste positivo de inventario" << endl; 
        cout << "5. Ajuste negativo de inventario" << endl;
        cout << "0. Salir" << endl;
        cout << "\nIngrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                listarProductos();
                break;

            case 2:
                ingresoDeInventario();
                break;

            case 3:
                salidaDeInventario();
                break;
            
            case 4:
                ajusteInventarioPositivo();
                break;
            
            case 5:
                ajusteInventarioNegativo();
                break;

            default:
                break;
        }

        system("pause");
        cout << endl;

        if (opcion == 0)
            break;        
    }
}