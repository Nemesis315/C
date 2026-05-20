// Include la libreria SPI.h che viene usata da Arduino per dialogare con il chip Ethernet
#include <SPI.h> 

// Include la libreria Ethernet per gestire la rete e i protocolli TCP/IP
#include <Ethernet.h> 

// Definisce l'indirizzo fisico MAC della scheda di rete Arduino
byte mac[] = {0x90, 0xAE, 0xA2, 0x01, 0x02, 0x03}; 

// Definisce l'indirizzo IP del server di destinazione
byte server[] = {192, 168, 1, 147}; 

// Crea un oggetto EthernetClient chiamata "client"
EthernetClient client;

// Funzione di inizializzazione, eseguita una sola volta all'avvio di Arduino
void setup() 
{
  // Inizia la comunicazione con il PC a una velocità di 9600 baud
  Serial.begin(9600);
  
  // Avvia la configurazione di rete passando solo il MAC per richiedere un indirizzo IP automatico
  Ethernet.begin(mac); 
  
  // Stampa sul monitor seriale il testo
  Serial.print("Indirizzo IP del client: ");
  
  // Recupera l'indirizzo IP ottenuto e lo stampa a sul monitor seriale
  Serial.println(Ethernet.localIP());

  // Prova a stabilire una connessione TCP con il server indicato sulla porta 1234
  if (client.connect(server, 1234)) 
  {
    // Se la connessione va a buon fine stampa a schermo il messaggio connesso
    Serial.println("connesso");
  }
}

// Dichiarazione di una variabile n intera inizializzata a 0
int n = 0;

// Funzione principale che viene eseguita in loop continuo dopo il setup
void loop() 
{
  // Controlla se il client è connesso al server
  if (client.connected()) 
  {
    // Invia il valore numerico della variabile n al server
    client.write(n);
    
    // Ferma l'esecuzione del programma per 1000 millisecondi
    delay(1000);

    // Controlla se n ha raggiunto il valore 100
    if (n == 100) 
    {
      // Chiude la connessione TCP con il server
      client.stop();  
    }
    
    // Incrementa il valore di n di 1
    n++;
  }   
}