#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "rlutil.h"
#include "funciones.h"


using namespace std;

//SISTEMA DE DADOS
void generarNumerosAleatorios(int numerosAleatorios[], int tam) {
//Toma como parametro un vector y un tam (los numeros que se tienen que generar)
    srand(static_cast<unsigned>(time(0))); //Inicializamos una semilla que cambia con el tiempo,genera numeros mas aleatorio

    for (int i = 0; i < tam; i++) { //Aca ponemos el limite de tam(6) y va a tomar valores del 0 al 5 (despues sumamos +1 para completar el rango de 1 a 6)
        numerosAleatorios[i] = rand() % 6 + 1;  //Por cada iteracion se genera un numero nuevo y se guarda en el vector
    }
}
void dibujarCuadrado(int posx, int posy) {
    for (int y = 0; y < 7; y++) {
        rlutil::locate(posx, posy + y);
        rlutil::setBackgroundColor(15);
        for (int x = 0; x < 13; x++) {
            cout << " ";
        }
    }
}
void dibujarSombra(int posx, int posy, int ancho, int alto) {
    for (int y = 0; y < alto; y++) {
        rlutil::locate(posx + 1, posy + y + 1);
        rlutil::setBackgroundColor(8);
        for (int x = 0; x < ancho; x++) {
            cout << " ";
        }
    }
}
void dibujarDado(int posx, int posy, int num) {
    dibujarCuadrado(posx, posy);


    for (int y = 0; y < 5; y++) {
        rlutil::locate(posx, posy + y);
        rlutil::setColor(0);
        for (int x = 0; x < 10; x++) {
            cout << " ";
        }
    }

    // Dibuja los puntos en el dado según el número
    switch (num) {
    case 1:
        rlutil::locate(posx + 6, posy + 3);
        cout << (char)254; // Punto en el centro
        break;
    case 2:
        rlutil::locate(posx + 2, posy + 1);
        cout << (char)254; // Punto arriba izquierda
        rlutil::locate(posx + 10, posy + 5);
        cout << (char)254; // Punto abajo derecha
        break;
    case 3:
        rlutil::locate(posx + 2, posy + 1);
        cout << (char)254; // Punto arriba izquierda
        rlutil::locate(posx + 6, posy + 3);
        cout << (char)254; // Punto en el centro
        rlutil::locate(posx + 10, posy + 5);
        cout << (char)254; // Punto abajo derecha
        break;
    case 4:
        rlutil::locate(posx + 3, posy + 1);
        cout << (char)254; // Punto arriba izquierda
        rlutil::locate(posx + 9, posy + 1);
        cout << (char)254; // Punto arriba derecha
        rlutil::locate(posx + 3, posy + 5);
        cout << (char)254; // Punto abajo izquierda
        rlutil::locate(posx + 9, posy + 5);
        cout << (char)254; // Punto abajo derecha
        break;
    case 5:
        rlutil::locate(posx + 3, posy + 1);
        cout << (char)254; // Punto arriba izquierda
        rlutil::locate(posx + 9, posy + 1);
        cout << (char)254; // Punto arriba derecha
        rlutil::locate(posx + 6, posy + 3);
        cout << (char)254; // Punto en el centro
        rlutil::locate(posx + 3, posy + 5);
        cout << (char)254; // Punto abajo izquierda
        rlutil::locate(posx + 9, posy + 5);
        cout << (char)254; // Punto abajo derecha
        break;
    case 6:
        rlutil::locate(posx + 3, posy + 1);
        cout << (char)254; // Punto arriba izquierda
        rlutil::locate(posx + 9, posy + 1);
        cout << (char)254; // Punto arriba derecha
        rlutil::locate(posx + 3, posy + 3);
        cout << (char)254; // Punto en medio izquierda
        rlutil::locate(posx + 9, posy + 3);
        cout << (char)254; // Punto en medio derecha
        rlutil::locate(posx + 3, posy + 5);
        cout << (char)254; // Punto abajo izquierda
        rlutil::locate(posx + 9, posy + 5);
        cout << (char)254; // Punto abajo derecha
        break;
    }
}
//FIN SISTEMA DE DADOS


//GRAFICOS
void AnimacionVictoriaConEscalera(const char nombreJugador[], int PuntajeTotal, int PuntajeMaximo) {
    rlutil::setBackgroundColor(0);
    rlutil::cls();
    srand(time(NULL));


            int colorTexto = rand() % 16;
            rlutil::setColor(colorTexto);



            rlutil::cls();


            rlutil::locate(27, 8);
            cout << "- - - - - - - - - - - - - FIN DE LA PARTIDA - - - - - - - - - - - - -" << endl;
            rlutil::locate(44, 12);
            cout << "!GANASTE CONSIGUIENDO UNA ESCALERA! ";
            rlutil::locate(55, 15);
            cout << "JUGADOR: " <<nombreJugador;
            rlutil::locate(49, 18);
            cout << "PUNTAJE TOTAL OBTENIDO: " << PuntajeTotal;
            rlutil::locate(27, 22);
            cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;



    rlutil::setColor(rlutil::GREY);
    rlutil::locate(40, 29);
    cout << ">> Toca cualquier letra para continuar << " << endl;
    rlutil::anykey();
    rlutil::cls();
    rlutil::setColor(rlutil::WHITE);

    rlutil::anykey();
    rlutil::setBackgroundColor(0);
    rlutil::cls();
}
void Titulo(){

    rlutil::setColor(rlutil::COLOR::WHITE); // COLOR TEXTO MENU

    rlutil::hidecursor(); // Sin Cursor

    rlutil::cls(); //Limpiar Consola

    rlutil::setColor(rlutil::COLOR::DARKGREY);
    rlutil::locate(5, 2);
    cout << " ::::::::  :::    ::: ::::::::::: ::::    ::: ::::::::::: :::::::::: ::::    ::: ::::::::::: ::::::::   ::::::::  ";
    rlutil::locate(5, 3);
    cout << ":+:    :+: :+:    :+:     :+:     :+:+:   :+:     :+:     :+:        :+:+:   :+:     :+:    :+:    :+: :+:    :+: ";
    rlutil::locate(5, 4);
    cout << "+:+    +:+ +:+    +:+     +:+     :+:+:+  +:+     +:+     +:+        :+:+:+  +:+     +:+    +:+    +:+ +:+        ";
    rlutil::locate(5, 5);
    cout << "+#+    +:+ +#+    +:+     +#+     +#+ +:+ +#+     +#+     +#++:++#   +#+ +:+ +#+     +#+    +#+    +:+ +#++:++#++ ";
    rlutil::locate(5, 6);
    cout << "+#+  # +#+ +#+    +#+     +#+     +#+  +#+#+#     +#+     +#+        +#+  +#+#+#     +#+    +#+    +#+        +#+ ";
    rlutil::locate(5, 7);
    cout << "#+#   +#+  #+#    #+#     #+#     #+#   #+#+#     #+#     #+#        #+#   #+#+#     #+#    #+#    #+# #+#    #+# ";
    rlutil::locate(5, 8);
    cout << " ###### ### ########  ########### ###    #### ########### ########## ###    ####     ###     ########   ########  ";

}
void TituloModoUnJugador(){

    rlutil::cls();
    rlutil::setColor(rlutil::COLOR::DARKGREY);
    rlutil::locate(40, 2);
    cout << "::::    ::::   ::::::::  :::::::::   ::::::::  ";
    rlutil::locate(40, 3);
    cout << "+:+:+: :+:+:+ :+:    :+: :+:    :+: :+:    :+: ";
    rlutil::locate(40, 4);
    cout << "+:+ +:+:+ +:+ +:+    +:+ +:+    +:+ +:+    +:+ ";
    rlutil::locate(40, 5);
    cout << "+#+  +:+  +#+ +#+    +:+ +#+    +:+ +#+    +:+ ";
    rlutil::locate(40, 6);
    cout << "+#+       +#+ +#+    +#+ +#+    +#+ +#+    +#+ ";
    rlutil::locate(40, 7);
    cout << "#+#       #+# #+#    #+# #+#    #+# #+#    #+# ";
    rlutil::locate(40, 8);
    cout << "###       ###  ########  #########   ########  ";

    rlutil::msleep(1000);

    rlutil::cls();

    rlutil::locate(50, 2);
    cout << ":::    ::: ::::    ::: ";
    rlutil::locate(50, 3);
    cout << ":+:    :+: :+:+:   :+: ";
    rlutil::locate(50, 4);
    cout << "+:+    +:+ :+:+:+  +:+ ";
    rlutil::locate(50, 5);
    cout << "+#+    +:+ +#+ +:+ +#+ ";
    rlutil::locate(50, 6);
    cout << "+#+    +#+ +#+  +#+#+# ";
    rlutil::locate(50, 7);
    cout << "#+#    #+# #+#   #+#+# ";
    rlutil::locate(50, 8);
    cout << " ########  ###    #### ";

    rlutil::msleep(1000);

    rlutil::cls();

    rlutil::locate(22, 2);
    cout << "::::::::::: :::    :::  ::::::::      :::     :::::::::   ::::::::  :::::::::  ";
    rlutil::locate(22, 3);
    cout << "    :+:     :+:    :+: :+:    :+:   :+: :+:   :+:    :+: :+:    :+: :+:    :+: ";
    rlutil::locate(22, 4);
    cout << "    +:+     +:+    +:+ +:+         +:+   +:+  +:+    +:+ +:+    +:+ +:+    +:+ ";
    rlutil::locate(22, 5);
    cout << "    +#+     +#+    +:+ :#:        +#++:++#++: +#+    +:+ +#+    +:+ +#++:++#:  ";
    rlutil::locate(22, 6);
    cout << "    +#+     +#+    +#+ +#+   +#+# +#+     +#+ +#+    +#+ +#+    +#+ +#+    +#+ ";
    rlutil::locate(22, 7);
    cout << "#+# #+#     #+#    #+# #+#    #+# #+#     #+# #+#    #+# #+#    #+# #+#    #+# ";
    rlutil::locate(22, 8);
    cout << " #####       ########   ########  ###     ### #########   ########  ###    ### ";

    rlutil::msleep(1000);
    rlutil::cls();
}
void AnimacionNombre (){

    rlutil::locate(50, 14);
    cout << "Ingresar tu Nombre";

    rlutil::locate(49, 18);
    cout<< "____________________";

    for (int i = 0; i < 2; i++)
    {
        rlutil::locate(47, 18);
        std::cout << char(175);
        rlutil::locate(70, 18);
        std::cout << char(174);
        rlutil::msleep(250);

        rlutil::locate(47, 18);
        std::cout << ' ';
        rlutil::locate(70, 18);
        std::cout << ' ';
        rlutil::msleep(250);
    }

    rlutil::locate(47, 18);
    std::cout << char(175);
    rlutil::locate(70, 18);
    std::cout << char(174);
    rlutil::msleep(500);
}
void DibujarLineas(int x1, int y1, int x2, int y2, char symbol) {
    //Genera Lineas, siendo x1 La linea principal del Eje X
	for (int x = x1; x <= x2; x++) {//x2 Siendo el punto final de la linea x1
		for (int y = y1; y <= y2; y++) { //y1 Seria La linea del eje Y
			rlutil::locate(x, y);//y2 Siendo el punto final de la linea y2
			std::cout << symbol;//DIbujando el caracter seleccionado
		}
	}
}
void PantallaFinalEmpate (const char Nombre[], int puntaje, int Lanzamientos) {

    rlutil::locate(28, 8);
    cout << "- - - - - - - - - - - FIN DE LA PARTIDA - - - - - - - - - - -" << endl;

    rlutil::locate(55, 10);
    cout << "EMPATE! ";
    rlutil::locate(38, 12);
    cout<<Nombre<<" Gana por menor cantidad de lanzamientos.";
    rlutil::locate(47, 15);
    cout << "REALIZASTE: " << Lanzamientos<<" LANZAMIENTOS!";
    rlutil::locate(47, 18);
    cout << "PUNTAJE TOTAL OBTENIDO : " << puntaje;

    rlutil::locate(29, 22);
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;


}
void Empate(char Jugador1[], char Jugador2[], int puntaje1, int puntaje2) {

    rlutil::locate(28, 8);
    cout << "- - - - - - - - - - - FIN DE LA PARTIDA - - - - - - - - - - -" << endl;

    rlutil::locate(55, 10);
    cout << "EMPATE! ";
    rlutil::locate(38, 12);
    cout << "Se termino la partida con la misma puntuacion! " ;
    rlutil::locate(47, 15);
    cout << "Puntos: " << puntaje1 << " Del Jugador: " << Jugador1;
    rlutil::locate(47, 17);
    cout << "Puntos: " << puntaje2 << " Del Jugador: " << Jugador2;


    rlutil::locate(29, 22);
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;


}
void PantallaVictoria(const char Ganador[], const char Perdedor[], int PuntajeP1, int PuntajePerdedor, int ContR) {


    rlutil::locate(28, 8);
    cout << "- - - - - - - - - - - FIN DE LA PARTIDA - - - - - - - - - - -" << endl;
    rlutil::locate(55, 11);
    cout << "VICTORIA!";

    rlutil::locate(44, 13);
    cout << Ganador << " Gana!"<<" Con "<<PuntajeP1<<" PUNTOS!";

    rlutil::locate(44, 15);
    cout << Perdedor << " Pierde! "<<" Con "<<PuntajePerdedor<<" Puntos.";

    rlutil::locate(53, 17);
    cout << "En: " << ContR<<" Rondas !";

    rlutil::locate(46, 19);
    cout << "PUNTAJE TOTAL OBTENIDO : " << PuntajeP1;


    rlutil::locate(29, 22);
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
}
void CargarPrimerNombre(char* NombreJugador1){
     system("cls");
    int x;
    char Caracter;

    rlutil::cls();
    rlutil::setColor(rlutil::COLOR::DARKGREY);

    rlutil::locate(14, 2);
    cout << " ::::    :::  ::::::::  ::::    ::::  :::::::::  :::::::::  ::::::::::        :::   ::::::::: ";
    rlutil::locate(14, 3);
    cout << " :+:+:   :+: :+:    :+: +:+:+: :+:+:+ :+:    :+: :+:    :+: :+:             :+:+:   :+:    :+: ";
    rlutil::locate(14, 4);
    cout << " :+:+:+  +:+ +:+    +:+ +:+ +:+:+ +:+ +:+    +:+ +:+    +:+ +:+               +:+   +:+    +:+ ";
    rlutil::locate(14, 5);
    cout << " +#+ +:+ +#+ +#+    +:+ +#+  +:+  +#+ +#++:++#+  +#++:++#:  +#++:++#          +#+   +#++:++#+ ";
    rlutil::locate(14, 6);
    cout << " +#+  +#+#+# +#+    +#+ +#+       +#+ +#+    +#+ +#+    +#+ +#+               +#+   +#+ ";
    rlutil::locate(14, 7);
    cout << " #+#   #+#+# #+#    #+# #+#       #+# #+#    #+# #+#    #+# #+#               #+#   #+# ";
    rlutil::locate(14, 8);
    cout << " ###    ####  ########  ###       ### #########  ###    ### ##########      ####### ### ";

    rlutil::setColor(rlutil::COLOR::WHITE);

    AnimacionNombre ();

    rlutil::locate(50, 30);
    rlutil::setColor(rlutil::COLOR::LIGHTRED);
    cout << "Enter para Empezar.";
    rlutil::setColor(rlutil::COLOR::WHITE);


    for (x=0; x<20; x++)
    {
        rlutil::locate(49, 18);
        cin.get (Caracter);

        if (Caracter == '\n' )
        {
            NombreJugador1[x]='\0';
            break;
        }
        NombreJugador1[x]=Caracter;

    }
    system("cls");

}
void CargarSegundoNombre(char* NombreJugador2){
     system("cls");
    int x;
    char Caracter;

    rlutil::cls();
    rlutil::setColor(rlutil::COLOR::DARKGREY);

    rlutil::locate(14, 2);
    cout << " ::::    :::  ::::::::  ::::    ::::  :::::::::  :::::::::  ::::::::::     ::::::   ::::::::: ";
    rlutil::locate(14, 3);
    cout << " :+:+:   :+: :+:    :+: +:+:+: :+:+:+ :+:    :+: :+:    :+: :+:           +:+  +:+   :+:    :+: ";
    rlutil::locate(14, 4);
    cout << " :+:+:+  +:+ +:+    +:+ +:+ +:+:+ +:+ +:+    +:+ +:+    +:+ +:+                 +:+ +:+    +:+ ";
    rlutil::locate(14, 5);
    cout << " +#+ +:+ +#+ +#+    +:+ +#+  +:+  +#+ +#++:++#+  +#++:++#:  +#++:++#           +#+  +#++:++#+ ";
    rlutil::locate(14, 6);
    cout << " +#+  +#+#+# +#+    +#+ +#+       +#+ +#+    +#+ +#+    +#+ +#+              +#+    +#+ ";
    rlutil::locate(14, 7);
    cout << " #+#   #+#+# #+#    #+# #+#       #+# #+#    #+# #+#    #+# #+#            #+#      #+# ";
    rlutil::locate(14, 8);
    cout << " ###    ####  ########  ###       ### #########  ###    ### ##########    ######### ### ";

    rlutil::setColor(rlutil::COLOR::WHITE);

    AnimacionNombre ();

    rlutil::locate(50, 30);
    rlutil::setColor(rlutil::COLOR::LIGHTRED);
    cout << "Enter para Empezar.";
    rlutil::setColor(rlutil::COLOR::WHITE);


    for (x=0; x<20; x++)
    {
        rlutil::locate(49, 18);
        cin.get (Caracter);

        if (Caracter == '\n' )
        {
            NombreJugador2[x]='\0';
            break;
        }
        NombreJugador2[x]=Caracter;

    }
    system("cls");

}
void CargarNombre(char* Nombre){
    system("cls");
    int x;
    char Caracter;


    rlutil::locate(14, 2);
    cout << " ::::    :::  ::::::::  ::::    ::::  :::::::::  :::::::::  ::::::::::        :::   ::::::::: ";
    rlutil::locate(14, 3);
    cout << " :+:+:   :+: :+:    :+: +:+:+: :+:+:+ :+:    :+: :+:    :+: :+:             :+:+:   :+:    :+: ";
    rlutil::locate(14, 4);
    cout << " :+:+:+  +:+ +:+    +:+ +:+ +:+:+ +:+ +:+    +:+ +:+    +:+ +:+               +:+   +:+    +:+ ";
    rlutil::locate(14, 5);
    cout << " +#+ +:+ +#+ +#+    +:+ +#+  +:+  +#+ +#++:++#+  +#++:++#:  +#++:++#          +#+   +#++:++#+ ";
    rlutil::locate(14, 6);
    cout << " +#+  +#+#+# +#+    +#+ +#+       +#+ +#+    +#+ +#+    +#+ +#+               +#+   +#+ ";
    rlutil::locate(14, 7);
    cout << " #+#   #+#+# #+#    #+# #+#       #+# #+#    #+# #+#    #+# #+#               #+#   #+# ";
    rlutil::locate(14, 8);
    cout << " ###    ####  ########  ###       ### #########  ###    ### ##########      ####### ### ";

    rlutil::setColor(rlutil::COLOR::WHITE);

    AnimacionNombre ();

    rlutil::locate(50, 30);
    rlutil::setColor(rlutil::COLOR::LIGHTRED);
    cout << "Enter para Empezar.";
    rlutil::setColor(rlutil::COLOR::WHITE);


    for (x=0; x<20; x++)
    {
        rlutil::locate(49, 18);
        cin.get  (Caracter);

        if (Caracter == '\n' )
        {
            Nombre[x]='\0';
            break;
        }
        Nombre[x]=Caracter;

    }
    system("cls");
}
//FIN GRAFICOS

//PANTALLAS MENU
void ModoUnJugador(int &MaximoPuntajeObetenido, char NombreJugadorRecordP1[]){

    char Nombre[20];

    int numeros[6];

    int Lanzamientos = 0;
    int NumRonda = 0;

    int puntajeTemp = 0;
    int PuntajeTotal = 0;
    int MaximoPuntaje = 0;

    bool Finalizado = false;
    bool escaleraTocada = false;
    bool PerdidaDePuntos = false;
    bool Continuar = true;

     TituloModoUnJugador();
    CargarNombre(Nombre);

    rlutil::cls();

    while (NumRonda < 3 && PuntajeTotal <= 500 && !Finalizado) {
        NumRonda++;
        Lanzamientos = 0;
         int puntajeMaximoRonda = 0;


         while (Lanzamientos < 3 && Continuar) {
            Lanzamientos++;
            puntajeTemp = 0;
            MaximoPuntaje= 0;
            int PuntajeTotalRonda =0;

            rlutil::locate(5, 3);
            cout << "TURNO DE: " << Nombre << endl;
            rlutil::locate(46, 3);
            cout << "RONDA NUMERO: " << NumRonda << endl;
            rlutil::locate(91, 3);
            cout << "PUNTUAJE TOTAL: " << PuntajeTotal << endl;
            rlutil::locate(46, 6);
            cout << "LANZAMIENTO: " << Lanzamientos << endl;
            rlutil::locate(86, 6);
            cout << "MAXIMO PUNTAJE DE LA RONDA: " << puntajeMaximoRonda << endl;

            generarNumerosAleatorios(numeros, 6);

            dibujarSombra(5, 12, 13, 7);
            dibujarSombra(25, 12, 13, 7);
            dibujarSombra(45, 12, 13, 7);
            dibujarSombra(65, 12, 13, 7);
            dibujarSombra(85, 12, 13, 7);
            dibujarSombra(105, 12, 13, 7);

            for (int i = 0; i < 6; i++) {
                dibujarDado(5 + i * 20, 12, numeros[i]);
                cout << endl;
            }

            //Modo Prueba
          /*for (int i = 0; i < 6; i++) {
            cout << "INGRESA LAS CARAS DEL DADO : " << i + 1 << ": ";
            cin >> numeros[i];
            }*/

            // ESCALERA
            if (!escaleraTocada) {
            if (esEscalera(numeros, 6)) {
            escaleraTocada = true;
            rlutil::cls();
            rlutil::locate(50, 24);
            cout << " ¡ESCALERA! ¡GANASTE LA PARTIDA! " << endl;
            PuntajeTotal =+ 500;
            AnimacionVictoriaConEscalera(Nombre,PuntajeTotal,MaximoPuntaje);
            Finalizado = true;
            Continuar=false;
            break;
            }
            }

            // SEXTETO6
            PerdidaDePuntos = Sexteto6(numeros, 6);
            if (PerdidaDePuntos) {
                rlutil::locate(50, 24);
            rlutil::setBackgroundColor(15);
            rlutil::setColor(0);
                cout << "SEIS 6! PERDISTE TODOS LOS PUNTOS!!";
            rlutil::setBackgroundColor(0);
            rlutil::setColor(0);
                puntajeTemp = 0;
            }

            if (!escaleraTocada) {
            int resultadoCombinacion = SumaDados(numeros, 6);
            if (resultadoCombinacion > 0) {

            rlutil::locate(50, 24);
            rlutil::setBackgroundColor(15);
            rlutil::setColor(0);
            cout << " SUMA DE DADOS! " << resultadoCombinacion;
            rlutil::setBackgroundColor(0);
            puntajeTemp += resultadoCombinacion;
            }
            }

            // TRIO X
            int resultadoTrio = Trio(numeros, 6);
            if (resultadoTrio > 0) {
                rlutil::setBackgroundColor(15);
                rlutil::setColor(0);
                rlutil::locate(50, 24);
                cout << " TRIO! " << resultadoTrio;
                rlutil::setBackgroundColor(0);
                rlutil::setColor(0);
                puntajeTemp += resultadoTrio;
            }

            // SEXTETO
            int resultadoSexteto = SextetoX(numeros, 6);
            if (resultadoSexteto > 0) {
                rlutil::locate(50, 24);
                rlutil::setBackgroundColor(15);
                rlutil::setColor(0);
                cout << " SEXTETO X! " << resultadoSexteto;
                rlutil::setBackgroundColor(0);
                rlutil::setColor(0);
                puntajeTemp += resultadoSexteto;
            }

            rlutil::setBackgroundColor(0);
            rlutil::setColor(rlutil::GREY);
            rlutil::locate(35, 29);
            cout << ">> Presionar cualquier tecla para tirar los dados << " << endl;
            rlutil::anykey();
            rlutil::setColor(rlutil::WHITE);
            rlutil::cls();


            //PuntajeTotal += MaximoPuntaje;

            if (puntajeTemp > puntajeMaximoRonda) {
            puntajeMaximoRonda = puntajeTemp;
            }



            if (PerdidaDePuntos) {
                PuntajeTotal = 0;
                MaximoPuntaje = 0;
            }
        rlutil::setBackgroundColor(0);
}

        PuntajeTotal += puntajeMaximoRonda;

        rlutil::locate(28, 8);
        cout << "- - - - - - - - - - - RESUMEN DE LA RONDA - - - - - - - - - - -" << endl;
        rlutil::locate(44, 12);
        cout << "PUNTUAJE MAXIMO DE LA RONDA: " << puntajeMaximoRonda;
        rlutil::locate(51, 15);
        cout << "PUNTAJE TOTAL: " << PuntajeTotal;
        rlutil::locate(51, 18);
        cout << "PROXIMA RONDA: " << NumRonda + 1;
        rlutil::locate(29, 22);
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        rlutil::setColor(rlutil::GREY);
        rlutil::locate(40, 29);
        cout << ">> Toca cualquier letra para continuar << " << endl;
        rlutil::anykey();
        rlutil::cls();
        rlutil::setColor(rlutil::WHITE);
    }


        rlutil::setBackgroundColor(0);
        rlutil::locate(28, 8);
        cout << "- - - - - - - - - - - FIN DE LA PARTIDA - - - - - - - - - - -" << endl;
        rlutil::locate(47, 12);
        cout << "PUNTUAJE MAXIMO OBTENIDO : "<<MaximoPuntaje;;
        rlutil::locate(48, 15);
        cout << "PUNTAJE TOTAL OBTENIDO : "<<PuntajeTotal;


        if (PuntajeTotal >= 500) {
            rlutil::locate(42, 18);
            cout << "GANASTE LA PARTIDA CON: " << PuntajeTotal<< " PUNTOS!!";

           }
        else {
            int puntosFaltantes = 500 - PuntajeTotal;
            rlutil::locate(40, 18);
            cout << "NO LLEGASTE !! TE FALTARON: " << puntosFaltantes << " PUNTOS!!";

        }
        rlutil::locate(29, 22);
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        rlutil::setColor(rlutil::GREY);
        rlutil::locate(40, 29);
        cout << ">> Toca cualquier letra para continuar << " << endl;
        rlutil::anykey();
        rlutil::cls();
        rlutil::setColor(rlutil::WHITE);

        //MaximaPuntuacion
        if (PuntajeTotal > MaximoPuntajeObetenido) {
        MaximoPuntajeObetenido = PuntajeTotal;
        for (int i = 0; i < 20; i++) {
        NombreJugadorRecordP1[i] = Nombre[i];
        }
    }


}
void ModoDosJugadores(int &MaximoPuntajeObetenidoEntreLosDosJugadadores, char NombreJugadorRecord[]) {
    char NombreJugador1[20];
    char NombreJugador2[20];

    int Lanzamientos = 0;
    int NumRonda=0;
    int numeros[6];
    int Limite;

    int PuntajeTempP1 = 0;
    int PuntajeTempP2 = 0;

    int PuntajeTotalP1 = 0;
    int PuntajeTotalP2 = 0;

    int PuntajeMaximoP1 = 0;
    int PuntajeMaximoP2 = 0;

    bool Finalizado = false;
    bool escaleraTocada = false;

    bool Continuar = true;

    bool PerdidaDePuntos = false;

    bool PerdidaDePuntosP1 = false;
    bool PerdidaDePuntosP2 = false;

    int LanzamientosP2=0;
    int LanzamientosP1=0;

    int ContRP1 = 0;
    int ContRP2 = 0;

    CargarPrimerNombre(NombreJugador1);
    CargarSegundoNombre(NombreJugador2);

    rlutil::cls();

    rlutil::locate(60, 2);
    cout << "|";

    rlutil::locate(30, 4);
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
    rlutil::locate(30, 6);
    cout << "|     Seleccionar la cantidad de Rondas (0 = 3 Rondas)      |";
    rlutil::locate(30, 8);
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
    rlutil::locate(58, 11);
    cout << char(175);
    rlutil::locate(63, 11);
    cout << char(174);
    rlutil::locate(60, 11);
    cout << "__";
    rlutil::setColor(rlutil::RED);
    rlutil::locate(58, 14);
    cout << "|ENTER|";
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(60, 11);
    cin >> Limite;

    rlutil::setColor(rlutil::GREY);
    rlutil::locate(40, 29);
    cout << ">> Toca cualquier letra para continuar << " << endl;
    rlutil::anykey();
    rlutil::cls();
    rlutil::setColor(rlutil::WHITE);

    if (Limite == 0) {
        Limite = 3;
    }

    bool TurnoJugador1 = true;
        PuntajeMaximoP1 = 0;
        PuntajeMaximoP2 = 0;


    while ( NumRonda< Limite*2   && !Finalizado) { ///LIMITE *2. Para que haga para ambos jugadores.
            NumRonda++;
            int puntajeMaximoRondaP1 = 0;
            int puntajeMaximoRondaP2 = 0;


            Lanzamientos = 0;
            PuntajeMaximoP1 = 0;
            PuntajeMaximoP2 = 0;

            while (Lanzamientos < 3 && Continuar) {
            Lanzamientos++;
            PuntajeTempP1 = 0;
            PuntajeTempP2 = 0;

            if (TurnoJugador1) {
            LanzamientosP1 ++;
            } else {
            LanzamientosP2 ++;
            }


            if (TurnoJugador1) {
                rlutil::locate(5, 3);
                cout << "TURNO DE: " << NombreJugador1 << endl;
            } else {
                rlutil::locate(5, 3);
                cout << "TURNO DE: " << NombreJugador2 << endl;
            }

            rlutil::locate(46, 3);
            cout << "RONDA NUMERO: " << NumRonda << endl;

            if (TurnoJugador1) {
                rlutil::locate(91, 3);
                cout << "PUNTUAJE TOTAL: " << PuntajeTotalP1 << endl;
            } else {
                rlutil::locate(91, 3);
                cout << "PUNTUAJE TOTAL: " << PuntajeTotalP2 << endl;
            }

            rlutil::locate(46, 6);
            cout << "LANZAMIENTO: " << Lanzamientos << endl;

            if (TurnoJugador1) {
                rlutil::locate(86, 6);
                cout << "MAXIMO PUNTAJE DE LA RONDA: " << puntajeMaximoRondaP1 << endl;
            } else {
                rlutil::locate(86, 6);
                cout << "MAXIMO PUNTAJE DE LA RONDA: " << puntajeMaximoRondaP2 << endl;
            }

            generarNumerosAleatorios(numeros, 6);

            dibujarSombra(5, 12, 13, 7);
            dibujarSombra(25, 12, 13, 7);
            dibujarSombra(45, 12, 13, 7);
            dibujarSombra(65, 12, 13, 7);
            dibujarSombra(85, 12, 13, 7);
            dibujarSombra(105, 12, 13, 7);

           /* for (int i = 0; i < 6; i++) {
                cin >> numeros[i];
            dibujarDado(5 + i * 20, 12, numeros[i]);
            }*/


            for (int i = 0; i < 6; i++) {
                dibujarDado(5 + i * 20, 12, numeros[i]);
                cout << endl;
            }

            // ESCALERA
            if (!escaleraTocada) {
                if (esEscalera(numeros, 6)) {
                    escaleraTocada = true;
                    rlutil::cls();
                    rlutil::locate(50, 24);
                    cout << " ¡ESCALERA! ¡GANASTE LA PARTIDA! " << endl;

                    if (TurnoJugador1) {
                        AnimacionVictoriaConEscalera(NombreJugador1, PuntajeTotalP1, PuntajeMaximoP1);
                        PuntajeTotalP1 =+ 500;
                    } else {
                        AnimacionVictoriaConEscalera(NombreJugador2, PuntajeTotalP2, PuntajeMaximoP2);
                        PuntajeTotalP2 =+ 500;
                    }

                    Finalizado = true;
                    Continuar = false;
                    break;
                }
            }

            // SEXTETO6
            PerdidaDePuntos = Sexteto6(numeros, 6);
            if (PerdidaDePuntos) {
                rlutil::locate(50, 24);
                cout << "SEIS 6! PERDISTE TODOS LOS PUNTOS!!";

                // Determina cuál jugador perdió puntos y actualiza su puntaje
                if (TurnoJugador1) {
                    PuntajeTempP1 = 0;
                    rlutil::locate(60, 24);
                    PerdidaDePuntosP1 = true;
                } else {
                    PuntajeTempP2 = 0;
                    rlutil::locate(60, 24);
                    PerdidaDePuntosP2 = true;
                }
            }


            if (!escaleraTocada) {
            int resultadoCombinacion = SumaDados(numeros, 6);

            if (resultadoCombinacion > 0) {
            rlutil::locate(50, 24);
            cout << " SUMA DE DADOS! " << resultadoCombinacion;

            // Actualiza el puntaje temporal del jugador actual
            if (TurnoJugador1) {
            PuntajeTempP1 += resultadoCombinacion;
            } else {
            PuntajeTempP2 += resultadoCombinacion;
            }
            }
            }


            // TRIO X
            int resultadoTrio = Trio(numeros, 6);
            if (resultadoTrio > 0) {
            rlutil::locate(50, 24);
            cout << " TRIO! " << resultadoTrio;

            // Actualiza el puntaje temporal del jugador actual
            if (TurnoJugador1) {
            PuntajeTempP1 += resultadoTrio;
            } else {
            PuntajeTempP2 += resultadoTrio; } }



            // SEXTETO
            int resultadoSexteto = SextetoX(numeros, 6);

            if (resultadoSexteto > 0) {
            rlutil::locate(50, 24);
            cout << " SEXTETO X! " << resultadoSexteto;

            // Actualiza el puntaje temporal del jugador actual
            if (TurnoJugador1) {
            PuntajeTempP1 += resultadoSexteto;
            } else {
            PuntajeTempP2 += resultadoSexteto;}}

            rlutil::setBackgroundColor(0);
            rlutil::setColor(rlutil::GREY);
            rlutil::locate(35, 29);
            cout << ">> Presionar cualquier tecla para tirar los dados << " << endl;
            rlutil::anykey();
            rlutil::setColor(rlutil::WHITE);
            rlutil::cls();

                if (PuntajeTempP1 > puntajeMaximoRondaP1) {
            puntajeMaximoRondaP1 = PuntajeTempP1;
            }

                if (PuntajeTempP2 > puntajeMaximoRondaP2) {
            puntajeMaximoRondaP2 = PuntajeTempP2;
            }

            //Perdidas de puntos por Seis6
            if(PerdidaDePuntosP1){
                PuntajeTempP1=0;
                PuntajeTotalP1=0;}

            if(PerdidaDePuntosP2){
                PuntajeTempP2=0;
                PuntajeTotalP2=0; }
                //Perdidas de puntos por Seis6

        }//Fin Lanzamientos
        //Asignacion de puntuacion
            PuntajeTotalP1+= puntajeMaximoRondaP1;
            PuntajeTotalP2+= puntajeMaximoRondaP2;



            rlutil::locate(28, 8);
            cout << "- - - - - - - - - - - RESUMEN DE LA RONDA - - - - - - - - - - -" << endl;
            rlutil::locate(56, 10);
            cout << "RONDA: "<<NumRonda;

            if(TurnoJugador1){
            rlutil::locate(51, 13);
            cout << "PROXIMO TURNO: "<<NombreJugador2;
            } else {
            rlutil::locate(51, 13);
            cout << "PROXIMO TURNO: "<<NombreJugador1;
            }

            rlutil::locate(42, 15);
            cout << "PUNTAJE " <<NombreJugador1<<": "<<PuntajeTotalP1 << " PUNTOS";

            rlutil::locate(42, 17);
            cout << "PUNTAJE " <<NombreJugador2<<": "<<PuntajeTotalP2 << " PUNTOS";

            rlutil::locate(51, 20);
            cout << "PROXIMA RONDA: " << NumRonda + 1;


            rlutil::locate(29, 22);
            cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

            rlutil::setColor(rlutil::GREY);
            rlutil::locate(40, 29);
            cout << ">> Toca cualquier letra para continuar << " << endl;
            rlutil::anykey();
            rlutil::cls();
            rlutil::setColor(rlutil::WHITE);

            if (TurnoJugador1){
                ContRP1++;
            } else{
                ContRP2++;
            }

            TurnoJugador1 = !TurnoJugador1;


            if (PuntajeTotalP1 > PuntajeTotalP2){
               MaximoPuntajeObetenidoEntreLosDosJugadadores=PuntajeTotalP1;

               for (int i=0 ; i < 20; i++){

               NombreJugadorRecord[i] = NombreJugador1[i];
            }
            }
            else{
               MaximoPuntajeObetenidoEntreLosDosJugadadores=PuntajeTotalP2;

               for (int i=0;i < 20; i++){

               NombreJugadorRecord[i] = NombreJugador2[i];

            }
            }

 }//Fin Rondas



            // EMPATE VICTORIOSO

            if (PuntajeTotalP1 > 500 && PuntajeTotalP2 > 500 && PuntajeTotalP1 == PuntajeTotalP2) {
            if (LanzamientosP1 < LanzamientosP2) {
                    PantallaFinalEmpate(NombreJugador1,PuntajeTotalP1,LanzamientosP1);
           }else {
                    PantallaFinalEmpate(NombreJugador2,PuntajeTotalP2,LanzamientosP2);
           }
            }


            //VICTORIA

                else  if (PuntajeTotalP1 >= 500) {
                PantallaVictoria(NombreJugador1, NombreJugador2, PuntajeTotalP1, PuntajeTotalP2, ContRP1);
            } else if (PuntajeTotalP2 >= 500) {
                PantallaVictoria(NombreJugador2, NombreJugador1, PuntajeTotalP2, PuntajeTotalP1, ContRP2);
            }


             //Victoria de un jugador

             if (PuntajeTotalP1 > PuntajeTotalP2) {
                PantallaVictoria(NombreJugador1, NombreJugador2, PuntajeTotalP1, PuntajeTotalP2, ContRP1);

            } else if (PuntajeTotalP2 > PuntajeTotalP1) {
                PantallaVictoria(NombreJugador2, NombreJugador1, PuntajeTotalP2, PuntajeTotalP1, ContRP2);

               //Empate con puntajes menores a 500 y iguales:

            } else if (PuntajeTotalP1<500 && PuntajeTotalP2 < 500 && PuntajeTotalP1==PuntajeTotalP2){
                Empate(NombreJugador1,NombreJugador2,PuntajeTotalP1,PuntajeTotalP2);

            }


            rlutil::anykey();

}//Fin Funcion
void ComoSeJuega(){

        rlutil::cls();

        rlutil::locate(50,1);
        rlutil::setBackgroundColor(rlutil::COLOR::WHITE);
        rlutil::setColor(rlutil::COLOR::BLACK);
        cout<<" REGLAS DE QUINIENTOS ";
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
        rlutil::setColor(rlutil::COLOR::GREY);


        rlutil::locate(1,3);
        rlutil::setBackgroundColor(rlutil::COLOR::WHITE);
        rlutil::setColor(rlutil::COLOR::BLACK);
        cout<<" Como se juega a Quinientos o Escalera ";
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
        rlutil::setColor(rlutil::COLOR::GREY);


        rlutil::locate(1,5);
        cout << "Es un juego de dados que se puede disfrutar en solitario o con un amigo. El objetivo del juego es alcanzar al menos 500";
        rlutil::locate(1,6);
        cout << "puntos en la menor cantidad posible de rondas o lograr una escalera en un solo lanzamiento.";
        rlutil::locate(1,7);
        cout << "Aca te explicaremos las reglas, las formas de jugar y como ganar:";

        rlutil::locate(1,9);
        rlutil::setBackgroundColor(rlutil::COLOR::WHITE);
        rlutil::setColor(rlutil::COLOR::BLACK);
        cout<<" Reglas del Juego: ";
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
        rlutil::setColor(rlutil::COLOR::GREY);

        rlutil::locate(1,11);
        cout << " 1. El juego se juega con seis dados y se divide en rondas. Cada ronda consta de 3 lanzamientos de los dados.";

        rlutil::locate(1,13);
        cout << " 2. El puntaje de cada lanzamiento se determina segun las combinaciones ganadoras de los dados, que son las siguientes:";
        rlutil::locate(1,14);
        cout << " Suma de Dados, TRIO X++, Sexteto X, Escalera, Sexteto+-- ";

        rlutil::locate(1,16);
        cout << " 3. Para ganar el juego, un jugador debe alcanzar al menos 500 puntos en el menor numero de rondas posible o lograr una";
        rlutil::locate(1,17);
        cout << " escalera en un solo lanzamiento.";

        rlutil::locate(1,19);
        rlutil::setBackgroundColor(rlutil::COLOR::WHITE);
        rlutil::setColor(rlutil::COLOR::BLACK);
        cout<<" MODOS: ";
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
        rlutil::setColor(rlutil::COLOR::GREY);

        rlutil::locate(1,21);
        cout << "Modo Un Jugador: En este modo podras jugar una partida en Solitario, Antes de empezar te pedira tu nombre, al final";
        rlutil::locate(1,22);
        cout << "te mostrara tu nombre y tu puntaje obtenido.";

        rlutil::locate(1,24);
        cout << "Modo Dos Jugadores: En este modo ambos jugadores podran jugar por turnos de 3 Lanzamientos! al finalizar se mostrara";
        rlutil::locate(1,25);
        cout << "el ganador con el puntaje obtenido!";

        //Salir
        rlutil::setColor(rlutil::RED);
        rlutil::locate(40, 29);
        cout << ">> Presionar cualquier tecla para volver << " << endl;
}
void PantallaPuntuacion() {
    rlutil::cls();

    //Lado un Jugador
    DibujarLineas(60, 1, 60, 30, char(179));
    rlutil::locate(8, 2);
    cout << "----------------------------------------------" << endl;
    rlutil::locate(8, 3);
    cout << "|   PUNTAJE MAS ALTO EN EL MODO UN JUGADOR   |" << endl;
    rlutil::locate(8, 4);
    cout << "----------------------------------------------" << endl;



    //Lado Dos Jugadores
    rlutil::locate(67, 2);
    cout << "-------------------------------------------------" << endl;
    rlutil::locate(67, 3);
    cout << "|   PUNTAJE MAS ALTO EN EL MODO DOS JUGADORES   |" << endl;
    rlutil::locate(67, 4);
    cout << "-------------------------------------------------" << endl;




}
void CombinacionesGanadoras(){

        rlutil::cls();

        rlutil::locate(50,1);
        rlutil::setBackgroundColor(rlutil::COLOR::WHITE);
        rlutil::setColor(rlutil::COLOR::BLACK);
        cout<<" COMBINACIONES GANADORAS ";
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
        rlutil::setColor(rlutil::COLOR::GREY);

        rlutil::locate(8,3);
        cout<<"Combinacion";
        rlutil::locate(52,3);
        cout << "Nombre Jugada";
        rlutil::locate(92,3);
        cout << "Puntaje Otorgado";

        DibujarLineas(1,2,120,2,char(205));
        DibujarLineas(1,18,120,18,char(205));
        DibujarLineas(1,15,120,15,char(205));
        DibujarLineas(1,22,120,22,char(205));
        DibujarLineas(1,4,120,4,char(205));
        DibujarLineas(1,8,120,8,char(205));
        DibujarLineas(1,24,120,24,char(205));

        //Combinacion.1
        rlutil::locate(1,5);
        cout<<"Menos de 3 dados con valores";
        rlutil::locate(1,6);
        cout<<"iguales (cualquier combinacion)";
        rlutil::locate(1,7);
        cout<<"Ejemplo: 6,5,5,2,2,1";


        //Combinacion.2
        rlutil::locate(1,10);
        cout<<"3 dados o mas con el mismo valor";
        rlutil::locate(1,11);
        cout<<"(hasta 5 iguales).";
        rlutil::locate(1,12);
        cout<<"Ejemplo: 5, 5, 5,1,2,3.";

        //Combinacion.3
        rlutil::locate(1,16);
        cout << "6 dados iguales (menos para el";
        rlutil::locate(1,17);
        cout << "numero 6)";

        //Combinacion.4
        rlutil::locate(1,19);
        cout << "Escalera";
        rlutil::locate(1,20);
        cout << "(1, 2, 3, 4, 5, 6) - En cualquier";
        rlutil::locate(1,21);
        cout << "orden";

        //Combinacion.5
        rlutil::locate(1,23);
        cout << "Seis 6";


        //NombreJugada.1
        rlutil::locate(52,5);
        cout << "Suma de dados";


        //NombreJugada.2
        rlutil::locate(52,10);
        cout << "Trio X++";
        rlutil::locate(52,11);
        cout << "(X es el num del dado)";

        //NombreJugada.3
        rlutil::locate(52,16);
        cout << "Sexteto X";
        rlutil::locate(52,17);
        cout << "(X es el num del dado)";

        //NombreJugada.4
        rlutil::locate(52,20);
        cout << "Escalera";

        //NombreJugada.5
        rlutil::locate(52,23);
        cout << "Sexteto6-- ";


        //PuntajeOtorgado.1
         rlutil::locate(82,5);
        cout << "Suma de los valores de todos los dados";
         rlutil::locate(82,6);
        cout << "Para el ejemplo seria";
         rlutil::locate(82,7);
        cout << "6+5+5+2+2+1=21";


        //PuntajeOtorgado.2
         rlutil::locate(82,9);
        cout << "Para el ejemplo seroa 5*10=50";
         rlutil::locate(82,10);
        cout << "En el caso que haya 2 ternas de dados";
         rlutil::locate(82,11);
        cout << "se debe elegir la que otorgue el";
        rlutil::locate(82,12);
        cout << "puntaje mayor.";
        rlutil::locate(82,13);
        cout << "Ejemplo: 1,1,1,2,2,2";
        rlutil::locate(82,14);
        cout << "Se debe otorgar 2*10=20 puntos";

        //PuntajeOtorgado.3
         rlutil::locate(82,16);
        cout << "X*50 puntos";

        //PuntajeOtorgado.4
         rlutil::locate(82,20);
        cout << "Gana la partida en esa ronda";

        //PuntajeOtorgado.5
         rlutil::locate(82,23);
        cout << "Resetea el puntaje total a 0 ";


        //Salir
        rlutil::setColor(rlutil::RED);
        rlutil::locate(40, 29);
        cout << ">> Presionar cualquier tecla para volver << " << endl;
}
//FIN PANTALLAS MENU

//FUNCIONES PARA LAS COMBINACIONES GANADORAS
int contarNumerosRepetidos(int v[], int numero, int tam) {
    int cant = 0;
    for (int i = 0; i < tam; i++) {
        if (v[i] == numero) {
            cant++;
        }
    }
    return cant;
}
void ordenarVector(int v[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (v[j] < v[i]) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}
///FUNCION ESCALERA
bool esEscalera(int v[], int tam){
    int i,j;

    for (i= 0; i < tam - 1; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (v[i] == v[j])
            {
                return false;
            }
        }
    }
    return true;
}
///FUNCION TRIO
int Trio(int v[], int tam) {
    int maxTrio = 0;
    for (int i = 1; i <= 6; i++) {
        int repeticiones = contarNumerosRepetidos(v, i, tam);
        if (repeticiones >= 3 && repeticiones < 6) { // Modificamos la condición para no contar un sexteto
            int triouno = i * 10;
            if (triouno > maxTrio) {
                maxTrio = triouno;
            }
        }
    }
    return maxTrio;
}
///FUNCION SUMA DADOS:
int SumaDados(int v[], int tam) {
    int contador[6] = { 0 }; // Arreglo para contar la cantidad de veces que aparece cada número
    int suma = 0;
    bool combinacionValida = true;

    for (int i = 0; i < tam; i++) {
        contador[v[i] - 1]++; // Restamos 1 para ajustar el índice al rango [0, 5]

        if (contador[v[i] - 1] > 2) {
            // Si hay más de 2 dados con el mismo valor, marcar la combinación como inválida
            combinacionValida = false;
            break; // Salir del bucle
        }
    }

    if (combinacionValida) {
        for (int i = 0; i < tam; i++) {
            suma += v[i];
        }
        return suma;
    }

    // Si la combinación no es válida, retorna 0
    return 0;
}
///FUNCION SEXTETO
int SextetoX(int v[], int tam) {
    int sextetoNumero = -1;
        for (int i = 1; i <= 5; i++) {
    int repeticiones = 0;

        for (int j = 0; j < tam; j++) {
            if (v[j] == i) {
                repeticiones++;
            }
        }


        if (repeticiones >= 6) {
            sextetoNumero = i;
            break;
        }
    }
    if (sextetoNumero != -1) {
        return sextetoNumero * 50;
    } else {
        return 0;
    }
}
///FUNSION SEXTETO DE SEIS.
bool Sexteto6(int v[], int tam){
    int i ;
    for (i = 0; i < tam; i++)
    {
        if (v[i] != 6)
        {
            return false;
        }
    }
    return true;
}
//FIN FUNCIONES PARA LAS COMBINACIONES GANADORAS.



















