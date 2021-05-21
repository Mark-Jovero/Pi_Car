/*****************************************************************************
* Author: Mark Jovero
* Filename: lidar_data.h
* Description: This stores the struct for lidar data storage.
******************************************************************************/

struct lidar_data {
		volatile float theta;
		volatile float distance;
		volatile float quality;
};
