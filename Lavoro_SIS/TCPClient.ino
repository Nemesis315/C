#include <SPI.h> //Includere la libreria SPI per la comunicazione con il modulo Ethernet DHCPClient
#include <Ethernet.h> //Include la libreria Ethernet.h per la gestione la connesione Ethernet

byte mac[] = {0x90, 0xAE, 0xA2, 0x01, 0x02, 0x03}; //Indirizzo MAC del client in esadecimale
byte server[] = {192, 168, 1, 147}; //Indirizzo IP del server a cui il client si connetterà

EthernetClient client;

void setup() 
{
  Serial.begin(9600);
  Ethernet.begin(mac); //Inizializza la connessione Ethernet con l'indirizzo MAC del Client
  Serial.print("Indirizzo IP del client: ");
  Serial.println(Ethernet.localIP());

  if (client.connect(server, 1234)) 
  {
    Serial.println("connesso");
  }
}


int n = 0;
void loop() 
{
  if (client.connected()) 
  {
    client.write(n);
    delay(1000);

    if (n == 100) 
    {
      client.stop();  
    }
    n++;
  }   
}