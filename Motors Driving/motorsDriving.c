/**
 * \file motorsDriving.c
 * \brief Fonctions de pilotage moteurs.
 * \author lefel13
 * \version 0.0.1
 * \date 08/01/2017
 *
 * Source des fonctions de pilotage des moteurs du robot.
 *
 */

#include <stdio.h>

#include "motorsDriving.h"
#include "wiringPi.h"

#define PWM_STOP		0
#define PWM_FULL		1024
#define PWM_MID			(PWM_FULL / 2)

void motors_init(void)
{
	/* 
	 * Initialisation de la librairie wiringPi pour utilisation du GPIO
	 * Utilisation de la méthode wiringPiSetupPhys 
	 * pour utiliser les numéros de broches du connecteur P1
	 */
	wiringPiSetupPhys();
	
	/* Configuration des pins */
	pinMode(PIN_LED, OUTPUT);
	pinMode(PIN_ENABLE_1, PWM_OUTPUT); 		//Note : à vérifier compatibilité PWM
	pinMode(PIN_INPUT_1, OUTPUT);
	pinMode(PIN_INPUT_2, OUTPUT);
	pinMode(PIN_ENABLE_2, PWM_OUTPUT); 		//Note : à vérifier compatibilité PWM
	pinMode(PIN_INPUT_3, OUTPUT);
	pinMode(PIN_INPUT_4, OUTPUT);
	
	/* Allumage LED pour signaler présence d'activité */
	digitalWrite(PIN_LED, HIGH);
	
	/* Mise à l'arrêt de toutes les sorties */
	digitalWrite(PIN_INPUT_1, LOW);
	digitalWrite(PIN_INPUT_2, LOW);
	digitalWrite(PIN_INPUT_3, LOW);
	digitalWrite(PIN_INPUT_4, LOW);
	pwmWrite(PIN_ENABLE_1, PWM_STOP);
	pwmWrite(PIN_ENABLE_2, PWM_STOP);
	
	/* Temporisation (ms) */
	delay(500);
	
	/* Extinction LED pour signaler fin d'activité */
	digitalWrite(PIN_LED, LOW);
}

void motors_moveForward(void)
{
	/* Moteur 1 = Moteur gauche */
	digitalWrite(PIN_INPUT_1, HIGH);
	digitalWrite(PIN_INPUT_2, LOW);
	/* Moteur 2 = Moteur droite */
	digitalWrite(PIN_INPUT_3, HIGH);
	digitalWrite(PIN_INPUT_4, LOW);
	
	pwmWrite(PIN_ENABLE_1, PWM_FULL);	/* Démarrage moteur 1 */
	pwmWrite(PIN_ENABLE_2, PWM_FULL);	/* Démarrage moteur 2 */
}

void motors_moveBack(void)
{
	/* Moteur 1 = Moteur gauche */
	digitalWrite(PIN_INPUT_1, LOW);
	digitalWrite(PIN_INPUT_2, HIGH);
	/* Moteur 2 = Moteur droite */
	digitalWrite(PIN_INPUT_3, LOW);
	digitalWrite(PIN_INPUT_4, HIGH);
	
	pwmWrite(PIN_ENABLE_1, PWM_FULL);	/* Démarrage moteur 1 */
	pwmWrite(PIN_ENABLE_2, PWM_FULL);	/* Démarrage moteur 2 */
}

void motors_moveRight(void)
{
	/* Moteur 1 = Moteur gauche */
	digitalWrite(PIN_INPUT_1, HIGH);
	digitalWrite(PIN_INPUT_2, LOW);
	/* Moteur 2 = Moteur droite */
	digitalWrite(PIN_INPUT_3, HIGH);
	digitalWrite(PIN_INPUT_4, LOW);
	
	pwmWrite(PIN_ENABLE_1, PWM_FULL);	/* Démarrage moteur 1 */
	pwmWrite(PIN_ENABLE_2, PWM_MID);	/* Démarrage moteur 2 */
}

void motors_moveLeft(void)
{
	/* Moteur 1 = Moteur gauche */
	digitalWrite(PIN_INPUT_1, HIGH);
	digitalWrite(PIN_INPUT_2, LOW);
	/* Moteur 2 = Moteur droite */
	digitalWrite(PIN_INPUT_3, HIGH);
	digitalWrite(PIN_INPUT_4, LOW);
	
	pwmWrite(PIN_ENABLE_1, PWM_MID);	/* Démarrage moteur 1 */
	pwmWrite(PIN_ENABLE_2, PWM_FULL);	/* Démarrage moteur 2 */
}

void motors_stop(void)
{
	/* Moteur 1 = Moteur gauche */
	digitalWrite(PIN_INPUT_1, LOW);
	digitalWrite(PIN_INPUT_2, LOW);
	/* Moteur 2 = Moteur droite */
	digitalWrite(PIN_INPUT_3, LOW);
	digitalWrite(PIN_INPUT_4, LOW);
	
	pwmWrite(PIN_ENABLE_1, PWM_STOP);	/* Arret moteur 1 */
	pwmWrite(PIN_ENABLE_2, PWM_STOP);	/* Arret moteur 2 */
}