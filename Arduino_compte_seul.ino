const int CONNEXION = 13;
const int UN_HERTZ = 1000;
int compteurDeBoucle;
int clignotement;
boolean affichage;



void setup(){
  Serial.begin(9600); //On initialise la communication
  pinMode(CONNEXION, OUTPUT);
  Serial.println("***** START !!! *****");
  affichage = true;
}

void loop(){
  if (affichage){
    for (compteurDeBoucle = 1 ; compteurDeBoucle < 21 ; compteurDeBoucle ++){
      Serial.println(compteurDeBoucle);
      for (clignotement = 0; clignotement < compteurDeBoucle ; clignotement++){
        digitalWrite(CONNEXION, LOW);
        delay(UN_HERTZ/compteurDeBoucle);
        digitalWrite(CONNEXION, HIGH);
        delay(UN_HERTZ/compteurDeBoucle);
      }
      delay(1000);
    }
    Serial.println("Ahoy!!!!");
    affichage = false;
  }
}
