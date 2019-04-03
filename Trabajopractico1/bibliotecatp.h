#ifndef BIBLIOTECATP_H_INCLUDED
#define BIBLIOTECATP_H_INCLUDED

/** \brief Funcion para el menu de opciones
 *
 * \param texto[] char
 * \return int
 *
 */
int Menuopciones(char texto[]);



/** \brief Funcion para el ingreso de primer operando 'x'
 *
 * \return float
 *
 */
float primerOperando();



/** \brief Funcion para el ingreso del segundo operando 'y'
 *
 * \return float
 *
 */
float segundoOperando();



/** \brief Es la funcion que suma los 2 operandos ingresados
 *
 * \param num1
 * \param num2
 * \return El resultado de la suma de los operando en float
 *
 */
float suma (float num1 , float num2);

/** \brief Es la funcion que resta los 2 operandos ingresados
 *
 * \param num1
 * \param num2
 * \return El resultado de la resta de los operando en float
 *
 */
float resta (float num1 , float num2);

/** \brief Es la funcion que multiplica los 2 operandos ingresados
 *
 * \param num1
 * \param num2
 * \return El resultado de la multiplicacion de los operando en float
 *
 */
float multiplicacion (float num1 , float num2);

/** \brief Es la funcion que divide los 2 operandos ingresados
 * Siempre y cuando el divisor sea distinto de 0 (no se puede dividir por 0)
 * \param num1 float
 * \param num2 float
 * \return float resultado de la division || math 3rrror no se puede dividir por cero
 *
 */
float division( float num1 , float num2);

/** \brief El factorial de los operadores
 * Siempre y cuando el numero sea positivo (como explico el profe el viernes)
 * \param num1 float
 * \param num2 float
 * \return float
 *
 */
float funfactorial(float num1 , float num2);











#endif // BIBLIOTECATP_H_INCLUDED
