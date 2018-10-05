/*
  FCM.h - Libreria que envia mensajes por Firebase Cloud Messangin
  Creado por Gonzalo Dutra, 4 de Octubre, 2018.
  Libreria de uso interno
*/
#ifndef FCM_h
#define FCM_h
 
#include "Arduino.h"
#include "ESP8266WiFi.h"
 
class FCM
{
  public:
    FCM();
    void enviarMensaje(String idToken, String titulo, String cuerpo, String idServer);
  private:
    String _data;
};
 
#endif