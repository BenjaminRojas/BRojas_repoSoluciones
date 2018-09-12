M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1


def romano_a_arabigo (romano):

   for romano in numero:         #Hacer un ciclo que compruebe los valores que se establecen en cada posición

    if len(0 < romano <= 9):     #Producto de que el número máximo a ingresar es MMMCMXCIX y tiene 9 carácteres












def arabigo_a_romano (numero):

    if len(0 < numero <= 4):       #Producto de que el número máximo a ingresar es 3999




print(" ")
eleccion=int(input("Si desea transformar de número entero a romano, presione 1"
                   "; si desea transformar de número romano a entero, presione 2: "))

if(eleccion == 1):

    print(" ")
    numero=int(input("Ingrese el número entero el cual desea pasar a número romano: "))
    print(" ")

    if(0 < numero <= 3999):

        print("El número a transformar corresponde a: ", numero)

        print(arabigo_a_romano(numero))

    else:

        print("El número ingresado no es válido, ejecute el programa nuevamente")

if(eleccion == 2):

    print(" ")
    romano=int(input("Ingrese el número romano que desea pasar a número entero: "))
    print("ADVERTENCIA: Este programa solo acepta mayúsculas, debido a que los números romanos se escriben con mayúsculas")
    print(" ")
    print("El número romano a transformar corresponde a: ", romano)

    print(romano_a_arabigo(romano))

else:

    print("Su elección ingresada es inválida, ejecute el programa nuevamente")





