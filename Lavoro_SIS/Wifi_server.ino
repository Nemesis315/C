#include <WiFi.h> // Includere la libreria WiFi per la connessione wireless

// Credenziali di rete WiFi
const char* ssid = "YOUR_SSID";           // Questo comando serve per creare una costante di tipo char* per memorizzare l'SSID della rete WiFi a cui connettersi
const char* password = "YOUR_PASSWORD";   // Questo comando serve per creare una costante di tipo char* per memorizzare la password della rete WiFi a cui connettersi

WiFiServer wifiServer(80); // Questo comando serve per creare un server WiFi sulla porta 80

void setup() // Funzione di configurazione di arduino - Viene eseguita una sola volta all'avvio del programma
{
  Serial.begin(115200); //Il comando Serial.begin() serve per settare la velocità di comunicazione della porta seriale a 115220 baud
  WiFi.begin(ssid, password); // Funzione della liberia WiFi.h serve per inizializzare le impostazioni del WiFi chiedendo 2 parametri: l'SSID e la password
  while (WiFi.status() != WL_CONNECTED) delay(500); // Questo ciclo while serve per aspettere finchè un dispositivo non si connette alla rete WiFi, controllando se il WiFi e acceso e se ci sono dispositivi connessi aspettando un delay di 500 millisecondi
  Serial.println(WiFi.localIP()); // Stampa l'indirizzo Ip locale sul monitor seriale quando un dispositivo si connette al WiFi
  wifiServer.begin(); // Avvia il server WiFi dopo i controlli per permettere la connesione di eventuali client
}

void loop() // Funzione principale di arduino - viene eseguita continuamente dopo il void setup()
{
  WiFiClient client = wifiServer.available(); // Controlla se un client si è connesso al server e in caso affermativo accetta la connesione
  if (client) // Controlla se il client e connesso
  {
    while (client.connected()) // Se il client e connesso continua a eseguire il codice che viene dopo
    {
      while (client.available() > 0) // Controlla che il client invii effetivamente dei dati
      {
        char c = client.read(); // Crea una variabile di tipo char per memorizzare il carettere in lettura del client WiFi
        Serial.write(c); // Visualizza sul monitor seriale il carettere contenuto nella variabile c
      }
      client.println("Message received"); // Invia un ACK al client per confermare la ricezione del messaggio
      delay(10); // Aspetta un breve periodo di tempo dopo l'invio dell' ACK
    }
    client.stop(); // Chiudere la connessione con il client una volta che quest'ultimo ha terminato di inviare dati
  }
}