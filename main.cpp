
using namespace std;

// Se usa cin.fail() para verificar si la entrada es válida y cin.clear() junto con cin.ignore() para manejar errores.

int main() {

    int edad;

    cout << "Ingrese su edad: ";

    while (!(cin>>edad) or edad < 0) { // Verifica que la entrada sea numérica y positiva
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Ingrese su edad: ";
    }

    if (edad < 18) {
        cout << "No es mayor de edad.";
    }
    else {
        cout << "Es mayor de edad.";
    }
    return 0;

}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.