#include <WiFi.h> // Includiamo la libreria per il Wi-Fi

const char* ssid = "YOUR_SSID"; // Credenziali del Wi-Fi
const char* password = "YOUR_PASSWORD";
const char* host = "192.168.1.xxx"; // L'IP del server a cui vogliamo collegarci
const uint16_t port = 80; // La porta su cui il server è in ascolto

WiFiClient client; // Creiamo l'oggetto "client" che ci servirà per mandare e ricevere dati

void setup() 
{
  Serial.begin(115200); //Il comando Serial.begin() serve per settare la velocità di comunicazione della porta seriale a 115220 baud
  WiFi.begin(ssid, password); // Funzione della liberia WiFi.h serve per inizializzare le impostazioni del WiFi chiedendo 2 parametri: l'SSID e la password
  
  // Questo ciclo while serve per aspettere finchè un dispositivo non si connette alla rete WiFi, controllando se il WiFi e acceso e se ci sono dispositivi connessi aspettando un delay di 500 millisecondi
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
  }
  
  // Se la Connesione avviene con successo il server manda un ACK al client per confermare la ricezione del messaggio
  Serial.println("Connected to WiFi");
}

void loop() 
{
  // Controllo di sicurezza: se NON siamo già connessi al server
  if (!client.connected()) 
  {
    if (!client.connect(host, port)) //Prviamo una richiesta di connessione al server, se fallisce esegue il blocco di codice dentro le graffe
    {
      Serial.println("Connection failed"); // Stampa a schermo "Connection failed" se la connessione al server fallisce
      delay(5000); // Aspettiamo 5 secondi prima di riprovare
      return; //Esce dalla funzione loop() e ricomincia da capo, tornando a controllare se siamo connessi al server o meno
    }
  }
  
  // Mandiamo un messaggio al server quindi la connessione è avvenuta con successo
  client.print("Hello from ESP32");
  
  // Finché il server ci risponde
  while (client.available()) 
  {
    //Leggiamo le risposte del server fino a quando non incontriamo il caratter "\r"
    String line = client.readStringUntil('\r');
    // Stampiamo quello che ci ha risposto il server sul monitor seriale del PC
    Serial.println(line);
  }
  
  // Aspettiamo 10 secondi prima di ripartire dall'inizio del loop e rimandare il messaggio al server
  delay(10000);
}