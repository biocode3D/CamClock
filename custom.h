/* 
  CogClock values likely to be changed for individual builds
*/

/* Configuration of NTP */
// !!!!! must change for your time zone !!!!!
#define MY_NTP_SERVER "at.pool.ntp.org"
#define MY_TZ "CST6CDT,M3.2.0,M11.1.0"

// servo control constants
// may need adjusting for different servos
const int minPulseWidth = 500;       // Minimum servi pulse width in microseconds
const int maxPulseWidth = 2500;      // Maximum servo pulse width in microseconds
const int pulseTrainDuration = 100;  // number of pulses (100 = 2 sec)

// optionally set network values here
//    not recommended
String ssid = "";
String password = "";
