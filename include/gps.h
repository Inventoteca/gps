/*
 * High level GPS Functions
 *
 *
 */

#ifndef _mgos_gps_h_
#define _mgos_gps_h_

//extern float last_lat;
//extern float last_lon;
//extern float last_speed;

/*
 * Get last location data
 * Returns:
 *  json object with format {lat: \"%f\", lon: \"%f\", sp: \"%f\"}
 */
char *mgos_get_location();

/**
 * @brief MGOS lib init
 */
bool mgos_gps_init(void);

#endif