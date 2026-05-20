#include <SPI.h> // Include la libreria Ethernet per gestire la rete
#include <Ethernet.h> // Include la libreria Ethernet per gestire i protocolli TCP/IP

// Definisce l'indirizzo fisico MAC della scheda di rete Arduino
byte mac[] = { 0x90, 0xA2, 0xDA, 0x0E, 0xD4, 0xB1 };

// Crea un oggetto EthernetServer che ascolta sulla porta 1234
EthernetServer server(1234);

// Funzione di inizializzazione viene eseguita una sola volta all'avvio di Arduino
void setup() 
{
  // Avvia la configurazione di rete passando solo il MAC per richiedere un indirizzo IP
  Ethernet.begin(mac);
  // Inizia la comunicazione con il PC a una velocità di 9600 baud
  Serial.begin(9600);

  // Stampa sul monitor seriale il testo
  Serial.print("Indirizzo ip del server: ");
  // Recupera l'indirizzo IP ottenuto e lo stampa a sul monitor seriale
  Serial.println(Ethernet.localIP());
  // Avvia il server TCP in ascolto sulla porta specificata
  server.begin();

}

// Funzione principale che viene eseguita in loop continuo dopo il setup
void loop() 
{
  // Controlla se un client si è connesso al server
  EthernetClient client = server.available();  
  // Se un client è connesso controlla se ci sono dati disponibili da leggere
  if (client) 
  {
    // Se il client invia dati al server esegue il blocco di codice dentro le graffe
    if (client.available() > 0) 
    {
      // Legge un carattere alla volta dal client e lo converte in una stringa per stamparlo a schermo
      char ch = client.read();
      // Converte il carattere letto in una stringa e la stampa sul monitor seriale
      String str = String(ch);
      // Stampa a schermo il messaggio ricevuto dal client
      Serial.println(str);
    }
  }
}
