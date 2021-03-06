#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED



#endif // OPERACIONES_H_INCLUDED

/** \brief se pide el ingreso de un numero
 *
 * \param num1 int operando a evaluar
 * \return int devuelve el numero
 *
 */
int pedirnumeros(int num1);

/** \brief Realiza la suma entre dos numeros enteros
 *
 * \param a int primer operando
 * \param b int segundo operando
 * \return la suma de dos numeros enteros
 *
 */
 int sumar(int a , int b);

/** \brief Realiza la divisi?n entre dos enteros
 *
 * \param a dividendo de la operaci?n
 * \param b divisor de la operaci?n
 * \param float* resultado puntero
 * \return 1 si la divisi?n se logr? o 0 si no se pudo lograr
 *
 */
 int dividir (int a, int b, float* resultado);


/** \brief Me va a restar dos numeros enteros
 *
 * \param a int primero operando
 * \param b int segundo operando
 * \return resultado de la resta de los dos operandos
 *
 */
int resta(int a, int b);

/** \brief multiplica dos numeros enteros
 *
 * \param a primer operando
 * \param b segundo operando
 * \return la multiplicaci?n de un numero entero
 *
 */
int multiplicacion (int a, int b);

/** \brief Toma un numero
 *
 * \param num int numero a calcular
 * \return float devuelve su factorial
 *
 */
float factorial(int num);

/** \brief muestra el men? de opciones
 *
 * \return char devuelve la opci?n seleccionada
 *
 */
int menu();


void menuParametros(int a, int b, int flagPrimerOperando, int flagSegundoOperando);
