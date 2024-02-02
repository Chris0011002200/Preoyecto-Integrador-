//Algoritmo para calcular la dosis de medicina requerida por cada paciente dependiendo de su sexo, peso, estatura y edad 

#include <iostream>
#include <conio.h>

using namespace std;

//Funcion / Proceso
double calcularDosis(string sexo, double estatura, double peso) {
    if (sexo == "hombre" && estatura >= 1.60 && peso >= 150) {
        return 0.2 * estatura + 0.8 * peso;
    } else if (sexo == "hombre") {
        return 0.3 * estatura + 0.7 * peso;
    } else if (sexo == "mujer" && estatura >= 1.50 && peso >= 130) {
        return 0.25 * estatura + 0.75 * peso;
    } else if (sexo == "mujer") {
        return 0.35 * estatura + 0.65 * peso;
    }

    return 0; 
}

int main() {
    char continuar;

    do {
    	//Entrada
        string sexo;
        double estatura, peso;
        int edad;

        cout << "Ingrese el sexo (hombre/mujer): ";
        cin >> sexo;
        cout << "Ingrese la estatura en metros: ";
        cin >> estatura;
        cout << "Ingrese el peso en libras: ";
        cin >> peso;
        cout << "Ingrese la edad: ";
        cin >> edad;
        //Proceso y Salida 
        if (estatura >= 1.60 && peso >= 150 && sexo == "hombre" && edad >= 18 || estatura >= 1.50 && peso >= 130 && sexo == "mujer" && edad >= 18) {
            double dosis = calcularDosis(sexo, estatura, peso);
            cout << "La dosis recomendada es: " << dosis << " gramos." << endl;
        } else if (estatura < 1.60 && peso < 150 && sexo == "hombre" && edad >= 18 || estatura < 1.50 && peso < 130 && sexo == "mujer" && edad >= 18) {
        	double dosis = calcularDosis(sexo, estatura, peso);
            cout << "La dosis recomendada es: " << dosis << " gramos." << endl;
        } else {
        	cout << "El paceinte es menor de edad, no aplica la dosis";
        }
        

        cout << "¿Desea calcular la dosis para otro paciente? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    getch ();
	return 0;
}

