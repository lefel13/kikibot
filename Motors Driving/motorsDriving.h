/**
 * \file motorsDriving.h
 * \brief Fonctions de pilotage moteurs.
 * \author lefel13
 * \version 0.0.1
 * \date 08/01/2017
 *
 * Header des fonctions de pilotage des moteurs du robot.
 *
 */

#ifndef _MOTORS_DRIVING_H_
#define _MOTORS_DRIVING_H_

/* Pins definition */
/* Note : identification des broches selon connecteur P1 de la RPI */
#define PIN_LED			18
#define PIN_ENABLE_1	4
#define PIN_INPUT_1		17
#define PIN_INPUT_2		22
#define PIN_ENABLE_2	23
#define PIN_INPUT_3		24
#define PIN_INPUT_4		25


/**
 * \fn void motors_init(void)
 * \brief Fonction d'initialisation des moteurs.
 * \param Aucun.
 * \return Aucun.
 */
extern void motors_init(void);

/**
 * \fn void motors_moveForward(void)
 * \brief Cette fonction fait avancer le robot.
 * \param Aucun.
 * \return Aucun.
 */
extern void motors_moveForward(void);

/**
 * \fn void motors_moveBack(void)
 * \brief Cette fonction fait reculer le robot.
 * \param Aucun.
 * \return Aucun.
 */
extern void motors_moveBack(void);

/**
 * \fn void motors_moveRight(void)
 * \brief Cette fonction fait tourner le robot à droite.
 * \param Aucun.
 * \return Aucun.
 */
extern void motors_moveRight(void);

/**
 * \fn void motors_moveLeft(void)
 * \brief Cette fonction fait tourner le robot à gauche.
 * \param Aucun.
 * \return Aucun.
 */
extern void motors_moveLeft(void);

/**
 * \fn void motors_stop(void)
 * \brief Cette fonction arrète le mouvement du robot.
 * \param Aucun.
 * \return Aucun.
 */
extern void motors_stop(void);

#endif /* _MOTORS_DRIVING_H_ */