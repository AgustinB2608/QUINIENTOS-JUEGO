#ifndef FUNCIONES_H
#define FUNCIONES_H

//GRAFICOS Y ANIMACIONES//
void Titulo();

void TituloModoUnJugador();

void AnimacionNombre () ;

void DibujarLineas(int x1, int y1, int x2, int y2, char symbol) ;

void PantallaJuego(char* Nombre);

void CargarPrimerNombre(char* NombreJugador1);

void CargarSegundoNombre(char* NombreJugador2);

void TituloModoDosJugadores();

void CargarNombre(char* Nombre);
//FIN GRAFICOS Y ANIMACIONES//


//PANTALLAS//
void ModoUnJugador(int &MaximoPuntajeObetenido, char NombreJugadorRecordP1[]);

void ModoDosJugadores(int &MaximoPuntajeObetenidoEntreLosDosJugadadores, char NombreJugadorRecord[]);

void CombinacionesGanadoras();

void ComoSeJuega();

void PantallaPuntuacion();

void PANTALLARESUMEN (char* Nombre);

void Empate(char Jugador1[], char Jugador2[], int puntaje1, int puntaje2);
//FIN PANTALLAS//


//SISTEMA DE DADOS Y DISEÑO//
void DibujarResultados(int resultados[6]);
void LanzarDados(int resultados[6]);
int SeisNumeros(int min, int max);
bool esEscalera(int v[], int tam);
int contarNumerosRepetidos(int v[], int numero, int tam);
int Trio(int v[], int tam);
int SumaDados(int v[], int tam);
int SextetoX(int v[], int tam);
void ordenarVector(int v[], int tam);
bool Sexteto6(int v[], int tam);

void generarNumerosAleatorios(int numerosAleatorios[], int tam);

void dibujarDado(int posx, int posy, int num);

void dibujarCuadrado(int posx, int posy);
//FIN DE SISTEMA DE DADOS Y DISEÑO.//
int ObtenerPuntajeMaximo( int MaximoPuntaje );


#endif
