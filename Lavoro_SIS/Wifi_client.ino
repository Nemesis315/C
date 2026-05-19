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
    // ...proviamo a connetterci all'IP e alla porta del server.
    // Il '!' davanti significa "Se la connessione FALLISCE..."
    if (!client.connect(host, port)) 
    {
      Serial.println("Connection failed"); // Ci stampiamo l'errore in faccia
      delay(5000); // Aspettiamo 5 secondi prima di riprovare, per non mandare in crash tutto
      return; // "Raga, fermi tutti": stoppa il loop qui e ricomincia dall'inizio della funzione loop()
    }
  }
  
  // Se il codice è arrivato qui, significa che siamo connessi. Mandiamo un messaggio al server
  client.print("Hello from ESP32");
  
  // Finché il server ci sta rispondendo e ci sono dati pronti da leggere nel buffer...
  while (client.available()) 
  {
    // ...leggiamo la risposta una riga alla volta, fermandoci quando finisce il testo ('\r')
    String line = client.readStringUntil('\r');
    // Stampiamo quello che ci ha risposto il server sul monitor seriale del PC
    Serial.println(line);
  }
  
  // Aspettiamo 10 secondi prima di ripartire dall'inizio del loop e rimandare il messaggio 
  // Altrimenti spammiamo il server e ci banna l'IP!
  delay(10000);
}