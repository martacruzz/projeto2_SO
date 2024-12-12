/**
 *  \file probConst.h (interface file)
 *
 *  \brief Problem name: SoccerGame
 *
 *  Problem simulation parameters.
 *
 *  \author Nuno Lau - December 2024
 */

#ifndef PROBCONST_H_
#define PROBCONST_H_

/* Generic parameters */
 
/** \brief total number of players */
#define  NUMPLAYERS       10
/** \brief total number of goalies */
#define  NUMGOALIES        3
/** \brief total number of referees */
#define  NUMREFEREES       1

/** \brief number of players in each team */
#define  NUMTEAMPLAYERS     4
/** \brief number of goalies in teach team */
#define  NUMTEAMGOALIES     1


/* Player/Goalie state constants */

/** \brief player/goalie initial state, arriving */
#define  ARRIVING          'A'
/** \brief player/goalie waiting to constitute team */
#define  WAITING_TEAM      'W'
/** \brief player/goalie waiting to constitute team */
#define  FORMING_TEAM      'F'
/** \brief player/goalie waiting for referee to start game in team 1 */
#define  WAITING_START_1   's'
/** \brief player/goalie waiting for referee to start game in team 2 */
#define  WAITING_START_2   'S'
/** \brief player/goalie playing in team 1 */
#define  PLAYING_1         'p'
/** \brief player/goalie playing in team 2 */
#define  PLAYING_2         'P'
/** \brief player/goalie playing */
#define  LATE              'L'

/* Referee state constants */

/** \brief referee initial state, arriving  */
#define  ARRIVINGR         'A'
/** \brief referee waiting for both teams  */
#define  WAITING_TEAMS     'W'
/** \brief referee starting game  */
#define  STARTING_GAME     'S'
/** \brief referee refereeing  */
#define  REFEREEING        'R'
/** \brief referee ending game  */
#define  ENDING_GAME       'E'


#endif /* PROBCONST_H_ */
