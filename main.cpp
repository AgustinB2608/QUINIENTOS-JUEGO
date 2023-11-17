#include <iostream>
#include "rlutil.h"
#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

#include "funciones.h"

int MaximoPuntajeObetenido=0;
int MaximoPuntajeObetenidoEntreLosDosJugadadores= 0;
char NombreJugadorRecord[20];
char NombreJugadorRecordP1[20];





int main(){

    //system("mode con cols=118 lines=104");

    int opcion = 1, y = -2;


    do
    {

        Titulo();

        //El ? es el operador ternario y la estructura es asi -si y(cursor) esta en-2 (arriba de MODO UN JUGADOR) ? Se cambia a gris : si esta abajo o arriba de -2 se pone en blanco
        rlutil::setColor(y == -2 ? rlutil::COLOR::DARKGREY : rlutil::COLOR::WHITE);
        rlutil::locate(50, 13);
        cout << "MODO UN JUGADOR" << endl;


        rlutil::setColor(y == 0 ? rlutil::COLOR::DARKGREY : rlutil::COLOR::WHITE);
        rlutil::locate(50, 15);
        cout << "MODO DOS JUGADORES" << endl;


        rlutil::setColor(y == 2 ? rlutil::COLOR::DARKGREY : rlutil::COLOR::WHITE);
        rlutil::locate(50, 17);
        cout << "PUNTUACION MAS ALTA" << endl;


        rlutil::setColor(y == 4 ? rlutil::COLOR::DARKGREY : rlutil::COLOR::WHITE);
        rlutil::locate(50, 19);
        cout << "COMO SE JUEGA" << endl;

        rlutil::setColor(y == 6 ? rlutil::COLOR::DARKGREY : rlutil::COLOR::WHITE);
        rlutil::locate(50, 21);
        cout << "COMBINACIONES GANADORAS" << endl;


        rlutil::setColor(y == 8 ? rlutil::COLOR::DARKGREY : rlutil::COLOR::WHITE);
        rlutil::locate(50, 23);
        cout << "SALIR DEL JUEGO" << endl;

        rlutil::setColor(rlutil::COLOR::GREY);
        rlutil::locate(1, 30);
        cout << "Gustavo Fernandez";

        rlutil::setColor(rlutil::COLOR::GREY);
        rlutil::locate(52, 30);
        cout << "Agustin Bernal";

        rlutil::setColor(rlutil::COLOR::GREY);
        rlutil::locate(104, 30);
        cout << "Rosaura Limache ";

        int Key = rlutil::getkey();

        switch (Key)
        {

        case rlutil::KEY_UP:
            // Navegar hacia arriba
            y -= 2;
            if (y < -2)
            {
                y = -2;
            }
            break;
        case rlutil::KEY_DOWN:
            // Navegar hacia abajo
            y += 2;
            if (y > 8)
            {
                y = 8;
            }
            break;
        case rlutil::KEY_ENTER:
            // Presionar Enter


            switch (y)
            {

            case -2:
                ModoUnJugador(MaximoPuntajeObetenido,NombreJugadorRecordP1);

                break;



            case 0:
                ModoDosJugadores(MaximoPuntajeObetenidoEntreLosDosJugadadores, NombreJugadorRecord);
                break;
            case 2:

            PantallaPuntuacion();

            //IF MODO P1
            if (MaximoPuntajeObetenido > 0) {
            rlutil::locate(9, 7);
            cout << "--------------------------------------------" << endl;
            rlutil::locate(23, 8);
            cout <<NombreJugadorRecordP1;
            rlutil::locate(22, 10);
            cout << "CON EL PUNTAJE...";
            rlutil::locate(25, 12);
            cout <<MaximoPuntajeObetenido<<" PUNTOS.";
            rlutil::locate(9, 13);
            cout << "--------------------------------------------" << endl;
            }
            else {
            rlutil::locate(11, 6);
            cout << "Sin partidas jugadas! Nada para mostrar.";
            }


            //FIN IF MODO P1
            if(MaximoPuntajeObetenidoEntreLosDosJugadadores > 0){
            rlutil::locate(68, 7);
            cout << "-----------------------------------------------" << endl;
            rlutil::locate(84, 8);
            cout <<NombreJugadorRecord ;
            rlutil::locate(83, 10);
            cout << "CON EL PUNTAJE...";
            rlutil::locate(86, 12);
            cout <<MaximoPuntajeObetenidoEntreLosDosJugadadores<<" PUNTOS.";
            rlutil::locate(68, 13);
            cout << "-----------------------------------------------" << endl;
            }
            else{
            rlutil::locate(71, 6);
            cout << "Sin partidas jugadas! Nada para mostrar.";
            }


                rlutil::anykey();
                break;
            case 4:

                ComoSeJuega();
                rlutil::anykey();

                break;
            case 6:

                CombinacionesGanadoras();
                rlutil::anykey();

                break;
            case 8:
                // SALIR DEL JUEGO
                opcion = 0; // Terminar el programa
                break;
            }
            break;
        default:
            break;
        }

    }
    while (opcion != 0);


    return 0;
}

///Agustin Bernal

///Gustavo Fernandez

///Rosaura Limache

///17/11/2023
