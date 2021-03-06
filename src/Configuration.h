#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <Preferences.h>

class Configuration {
private:
  static constexpr char *name_mem = "BLNDR_CNF";
  static constexpr char *ssid_key = "ssid";
  static constexpr char *password_key = "pwd";
  static constexpr char *api_key = "api";
  static constexpr char *status_key = "sts";
  static constexpr char *config_stage_key = "stg";
  static constexpr char *uptime_key = "up";
  static constexpr char *downtime_key = "down";
  String _ssid, _password, _api_key, _status;
  unsigned long int _uptime, _downtime;
  int _stage_config;
  Preferences pref;
  String newKey();

public:
  Configuration();
  void status();
  String getWifiSSID() const;
  String getWifiPassword() const;
  String getApiKey() const;
  String getStatus() const;
  unsigned long int getUpTime() const;
  unsigned long int getDownTime() const;
  int getStage() const;
  void setWifiSSID(const String & ssid);
  void setWifiPassword(const String & pwd);
  void setStatus(const String & status);
  void setNewApiKey();
  void setUpTime(unsigned long int time);
  void setDownTime(unsigned long int time);
  void setStage(int stage);
  void reset();
};
#endif
