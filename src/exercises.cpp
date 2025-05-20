
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  for (int i=0; i < s1.length(); i++) {
        if (s1[i] == ' ') {
            cout << i << endl;
        }
    }
    cout << s1.length() << endl;
}

void exercise_2(string s1, string s2) {
  for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == ' ') {
            if (s2.length() > 0) { 
                cout << '[' << s2 << ']' << endl;
                s2 = "";  
            }
        } else {
            s2 += s1[i];  
        }
    }
   
    if (s2.length() > 0) {
        cout << '[' << s2 << ']' << endl;
    }
}

void exercise_3(int valor) {
  int visitas = 0;
  cout << "Ingrese las visitas al refrigerador tomando en cuenta esto: (1 = hay torta, 0 = no hay): " << endl;
    while (visitas < 10 && cin >> valor) {
        visitas ++;
        if (valor == 1) {
            cout << "Om-nom-nom :P" << endl;
        } else {
            cout << "No cake :(" << endl;
            break;
        }
    }
}

void exercise_4(int n) {
  if (n < 0) {
           cout << "El nùmero es negativo. Intentelo de nuevo" << endl;
           return;
       }
       
   if (n > 14) {
       cout << "El nùmero es muy grande. Intentelo de nuevo" << endl;
       return;
   }
   
   long long factorial = 1;
   for (int i=1; i <= n; i++) {
           factorial = factorial * i;

   }   cout << "El factorial del número es: " << factorial << endl;
}

void exercise_5(int n, int k) {
  if (n < 1 || n > 7) {
        cout << "El día que ingresó no es válido" << endl;
        return;
    }
    if (k< 1 || k > 99) {
        cout << "El número de días ingresado no es válido" << endl;
        return;
    }   
        cout << endl << "L  M  X  J  V  S  D" << endl;
        cout << "---------------------" << endl;
        
        for (int i = 1; i < n; ++i) {
            cout << "   ";
        }
        for (int dia = 1; dia <= k; ++dia) {
            if (dia < 10) {
                cout << " ";
            }
            cout << dia << " ";
            if ((n - 1 + dia) % 7 == 0) {
                cout << endl;
            }
        }
}

int exercise_6(int n) {
  int sum = 0;
    while (n > 0) {
        sum = sum + n%10;
        n = n/10;
    }

  return sum;
}

void exercise_7(int n) {
  double suma = 0.0;
    for (int i = 1; i <= n; ++i) {

        double termino = (i % 2 == 1) ? 1.0 : -1.0;
        termino /= i;
        suma += termino;
    }
    cout.precision(10); 
    cout << "La aproximacion de ln(2) con " << n << " terminos es: " << suma << endl;
    cout << "Valor real de ln(2): " << log(2) << endl; 

}

bool exercise_8(const string& cadena) {
  int izquierda = 0;
    int derecha = cadena.length() - 1;
    while (izquierda < derecha) {
        while (izquierda < derecha && cadena[izquierda] == ' ') {
            izquierda++;
        }
        while (izquierda < derecha && cadena[derecha] == ' ') {
            derecha--;
        }
        if (tolower(cadena[izquierda]) != tolower(cadena[derecha])) {
            return false;
        }
        izquierda++;
        derecha--;
    }
    return true;
}

int exercise_9(const string& cadena) {
    int primeraPos = -1;
    int segundaPos = -1;
    int contador = 0;
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == 'f' || cadena[i] == 'F') { 
            contador++;
            if (contador == 1) {
                primeraPos = i;
            } else if (contador == 2) {
                segundaPos = i;
                break; 
            }
        }
    }

    if (contador == 0) {
        return -2; 
    } else if (contador == 1) {
        return -1; 
    } else {
        return segundaPos; 
    }
}

int exercise_10(int a, int b) {
  bool MCD = false;
    if (a > 0 && b > 0 && a != b) {
        if (a>b) {
         int aux = a;
         a = b;
         b = aux; 
        }
        int i = a;
        while (!MCD && i >= 1) {
            if (a % i == 0 && b % i == 0) {
                cout << "El mcd es: " << i << endl;
                MCD = true;
            }
            else {
                i--;
            }
        }
    }
    else {
        if (a == b) {
            cout << "Ingresó numeros iguales" << endl;
        }
        else {
            cout << "Ingresó números incorrectos" << endl;
        }
    }
  return 0;
}

void exercise_11() {
  for (int n=1; n<=10; ++n) {
       double U = 1.0;
       cout << "U0 = 1" << endl;
       U = U / n;
       cout << "U" << n << " = " << scientific << setprecision(6) << U << endl;
   }
}

void exercise_12() {
  const int TERMINOS = 10;
    double U = 1.0; 
    double V = U;   
    cout << fixed << setprecision(6);
    cout << "n\tUₙ\t\tVₙ\t\tDiferencia con e\n";
    cout << "0\t" << U << "\t\t" << V << "\t\t" << exp(1) - V << endl;
    for (int n = 1; n <= TERMINOS; ++n) {
        U = U / n;         
        V += U;            
        cout << n << "\t" << U << "\t" << V << "\t" << exp(1) - V << endl;
    }

    cout << "\nValor real de e: " << exp(1) << endl;
}

long exercise_13(int n, int k) {
  if (n <= 0) {
        cout << "Su número debe ser positivo" << endl;
        return 1;
    }
    long long R = 0;
    for (int i = 1; i <= n; ++i) {
         R += pow(i, k);
    }
    cout << "La suma de 1**" << k << " + 2**" << k << " + ... + " << n << "**" << k << " es: " << R << endl;

  return R;
}

string exercise14(int numero) {
    int original = abs(numero); 
    int inverso = 0;
    int temp = original;
    
    while(temp > 0) {
        inverso = inverso * 10 + temp % 10;
        temp /= 10;
    }
    
    
    if(original == inverso) {
        return to_string(numero) + " ES palindromo";
    } else {
        return to_string(numero) + " NO es palindromo";
    }
}

void exercise_15(int decimal) {
  if (decimal == 0) {
        cout << "0 en binario es: 0" << endl;
        return 0;
    }

    int binario[32]; 
    int i = 0;

    while (decimal > 0) {
        binario[i] = decimal % 2; 
        decimal = decimal/ 2;
        i++;
    }

    cout << "El número en binario es: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }
    cout << endl;
}

void exercise_16(int divident, int divider) {
  int cociente = 0;
  if (divider != 0) {
      
    while (divident>=divider) {
        divident = divident - divider;
        cociente++;
    } cout << "El residuo es: " << divident << endl;
    cout << "El cociente es: " << cociente << endl;
  } else {
      cout << "No se puede dividir por 0" << endl;
  }
}

void exercise_17(int n) {
  if (n <= 1) return false;
    if (n== 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void exercise_18_19(int debut, int fin) {
  if (debut <= 0) {
        cout << "El numero debe de ser positivo y mayor a cero" << endl;
        return 0;
    }
    if (fin < debut) {
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
        return 0;
    }

    for (int i = debut; i <= fin; i++) {
        int n = i;
        int contador = 0;

        while (n > 0) {
            if (n % 3 == 0) {
                n += 4;
            } else if (n % 3 != 0 && n % 4 == 0) {
                n /= 2;
            } else {
                n -= 1;
            }
            contador++;
        }

        cout << i << " --> " << contador << endl;
    }
}