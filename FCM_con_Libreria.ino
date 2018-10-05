
#include <ESP8266WiFi.h>
#include <FCM.h>

#define SSID "*******"
#define PASS "*******"

#define TOKEN "***************************"
#define SERVER "***************************"

FCM FCM;


void setup() {
  // CONECTA A LA RED 
   pinMode(0, INPUT);
    Serial.begin(9600);
    WiFi.begin(SSID, PASS);
      while (WiFi.status() != WL_CONNECTED)
      {
        Serial.print(".\n");
        delay(100);
      }
      Serial.print("CONECTADO... ");
      Serial.println(WiFi.localIP());
      
}

void loop() {
  //Al precionar el Boton conectado al pin 0 Envia el Mensaje
  if(digitalRead(0)== LOW)
    {
        Serial.println("COMIENZO DEL MENSAJE");
        FCM.enviarMensaje(TOKEN, "Titulo", "Cuerpo de la Notificacion", SERVER);
      
    }

}
