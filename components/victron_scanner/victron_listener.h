#pragma once

#include "esphome/core/component.h"
#include "esphome/components/esp32_ble_tracker/esp32_ble_tracker.h"

#ifdef USE_ESP32

namespace esphome {
namespace victron_scanner {

enum class VICTRON_PRODUCT_ID : u_int16_t {
  // BMV-700
  BMV_700 = 0x0203,
  // BMV-702
  BMV_702 = 0x0204,
  // BMV-700H
  BMV_700H = 0x0205,
  // BlueSolar MPPT 75|15
  BlueSolar_MPPT_75_15 = 0xA042,
  // BlueSolar MPPT 100|15
  BlueSolar_MPPT_100_15 = 0xA043,
  // BlueSolar MPPT 150|70
  BlueSolar_MPPT_150_70 = 0xA046,
  // BlueSolar MPPT 150|100
  BlueSolar_MPPT_150_100 = 0xA047,
  // BlueSolar MPPT 100|50 rev2
  BlueSolar_MPPT_100_50_REV2 = 0xA049,
  // BlueSolar MPPT 100|30 rev2
  BlueSolar_MPPT_100_30_REV2 = 0xA04A,
  // BlueSolar MPPT 150|35 rev2
  BlueSolar_MPPT_150_35_REV2 = 0xA04B,
  // BlueSolar MPPT 75|10
  BlueSolar_MPPT_75_10 = 0xA04C,
  // BlueSolar MPPT 150|45
  BlueSolar_MPPT_150_45 = 0xA04D,
  // BlueSolar MPPT 150|60
  BlueSolar_MPPT_150_60 = 0xA04E,
  // BlueSolar MPPT 150|85
  BlueSolar_MPPT_150_85 = 0xA04F,
  // SmartSolar MPPT 250|100
  SmartSolar_MPPT_250_100 = 0xA050,
  // SmartSolar MPPT 75|15
  SmartSolar_MPPT_75_15 = 0xA053,
  // SmartSolar MPPT 75|10
  SmartSolar_MPPT_75_10 = 0xA054,
  // SmartSolar MPPT 100|15
  SmartSolar_MPPT_100_15 = 0xA055,
  // SmartSolar MPPT 100|30
  SmartSolar_MPPT_100_30 = 0xA056,
  // SmartSolar MPPT 100|50
  SmartSolar_MPPT_100_50 = 0xA057,
  // SmartSolar MPPT 150|35
  SmartSolar_MPPT_150_35 = 0xA058,
  // SmartSolar MPPT 150|100 rev2
  SmartSolar_MPPT_150_100_REV2 = 0xA059,
  // SmartSolar MPPT 150|85 rev2
  SmartSolar_MPPT_150_85_REV2 = 0xA05A,
  // SmartSolar MPPT 250|70
  SmartSolar_MPPT_250_70 = 0xA05B,
  // SmartSolar MPPT 250|85
  SmartSolar_MPPT_250_85 = 0xA05C,
  // SmartSolar MPPT 250|60
  SmartSolar_MPPT_250_60 = 0xA05D,
  // SmartSolar MPPT 250|45
  SmartSolar_MPPT_250_45 = 0xA05E,
  // SmartSolar MPPT 100|20
  SmartSolar_MPPT_100_20 = 0xA05F,
  // SmartSolar MPPT 100|20 48V
  SmartSolar_MPPT_100_20_48V = 0xA060,
  // SmartSolar MPPT 150|45
  SmartSolar_MPPT_150_45 = 0xA061,
  // SmartSolar MPPT 150|60
  SmartSolar_MPPT_150_60 = 0xA062,
  // SmartSolar MPPT 150|70
  SmartSolar_MPPT_150_70 = 0xA063,
  // SmartSolar MPPT 250|85 rev2
  SmartSolar_MPPT_250_85_REV2 = 0xA064,
  // SmartSolar MPPT 250|100 rev2
  SmartSolar_MPPT_250_100_REV2 = 0xA065,
  // BlueSolar MPPT 100|20
  BlueSolar_MPPT_100_20 = 0xA066,
  // BlueSolar MPPT 100|20 48V
  BlueSolar_MPPT_100_20_48V = 0xA067,
  // SmartSolar MPPT 250|60 rev2
  SmartSolar_MPPT_250_60_REV2 = 0xA068,
  // SmartSolar MPPT 250|70 rev2
  SmartSolar_MPPT_250_70_REV2 = 0xA069,
  // SmartSolar MPPT 150|45 rev2
  SmartSolar_MPPT_150_45_REV2 = 0xA06A,
  // SmartSolar MPPT 150|60 rev2
  SmartSolar_MPPT_150_60_REV2 = 0xA06B,
  // SmartSolar MPPT 150|70 rev2
  SmartSolar_MPPT_150_70_REV2 = 0xA06C,
  // SmartSolar MPPT 150|85 rev3
  SmartSolar_MPPT_150_85_REV3 = 0xA06D,
  // SmartSolar MPPT 150|100 rev3
  SmartSolar_MPPT_150_100_REV3 = 0xA06E,
  // BlueSolar MPPT 150|45 rev2
  BlueSolar_MPPT_150_45_REV2 = 0xA06F,
  // BlueSolar MPPT 150|60 rev2
  BlueSolar_MPPT_150_60_REV2 = 0xA070,
  // BlueSolar MPPT 150|70 rev2
  BlueSolar_MPPT_150_70_REV2 = 0xA071,
  // SmartSolar MPPT VE.Can 150/70
  SmartSolar_MPPT_VE_CAN_150_70 = 0xA102,
  // SmartSolar MPPT VE.Can 150/45
  SmartSolar_MPPT_VE_CAN_150_45 = 0xA103,
  // SmartSolar MPPT VE.Can 150/60
  SmartSolar_MPPT_VE_CAN_150_60 = 0xA104,
  // SmartSolar MPPT VE.Can 150/85
  SmartSolar_MPPT_VE_CAN_150_85 = 0xA105,
  // SmartSolar MPPT VE.Can 150/100
  SmartSolar_MPPT_VE_CAN_150_100 = 0xA106,
  // SmartSolar MPPT VE.Can 250/45
  SmartSolar_MPPT_VE_CAN_250_45 = 0xA107,
  // SmartSolar MPPT VE.Can 250/60
  SmartSolar_MPPT_VE_CAN_250_60 = 0xA108,
  // SmartSolar MPPT VE.Can 250/70
  SmartSolar_MPPT_VE_CAN_250_70 = 0xA109,
  // SmartSolar MPPT VE.Can 250/85
  SmartSolar_MPPT_VE_CAN_250_85 = 0xA10A,
  // SmartSolar MPPT VE.Can 250/100
  SmartSolar_MPPT_VE_CAN_250_100 = 0xA10B,
  // SmartSolar MPPT VE.Can 150/70 rev2
  SmartSolar_MPPT_VE_CAN_150_70_REV2 = 0xA10C,
  // SmartSolar MPPT VE.Can 150/85 rev2
  SmartSolar_MPPT_VE_CAN_150_85_REV2 = 0xA10D,
  // SmartSolar MPPT VE.Can 150/100 rev2
  SmartSolar_MPPT_VE_CAN_150_100_REV2 = 0xA10E,
  // BlueSolar MPPT VE.Can 150/100
  BlueSolar_MPPT_VE_CAN_150_100 = 0xA10F,
  // BlueSolar MPPT VE.Can 250/70
  BlueSolar_MPPT_VE_CAN_250_70 = 0xA112,
  // BlueSolar MPPT VE.Can 250/100
  BlueSolar_MPPT_VE_CAN_250_100 = 0xA113,
  // SmartSolar MPPT VE.Can 250/70 rev2
  SmartSolar_MPPT_VE_CAN_250_70_REV2 = 0xA114,
  // SmartSolar MPPT VE.Can 250/100 rev2
  SmartSolar_MPPT_VE_CAN_250_100_REV2 = 0xA115,
  // SmartSolar MPPT VE.Can 250/85 rev2
  SmartSolar_MPPT_VE_CAN_250_85_REV2 = 0xA116,
  // Phoenix Inverter 12V 250VA 230V
  PHOENIX_INVERTER_12V_250VA_230V = 0xA231,
  // Phoenix Inverter 24V 250VA 230V
  PHOENIX_INVERTER_24V_250VA_230V = 0xA232,
  // Phoenix Inverter 48V 250VA 230V
  PHOENIX_INVERTER_48V_250VA_230V = 0xA234,
  // Phoenix Inverter 12V 250VA 120V
  PHOENIX_INVERTER_12V_250VA_120V = 0xA239,
  // Phoenix Inverter 24V 250VA 120V
  PHOENIX_INVERTER_24V_250VA_120V = 0xA23A,
  // Phoenix Inverter 48V 250VA 120V
  PHOENIX_INVERTER_48V_250VA_120V = 0xA23C,
  // Phoenix Inverter 12V 375VA 230V
  PHOENIX_INVERTER_12V_375VA_230V = 0xA241,
  // Phoenix Inverter 24V 375VA 230V
  PHOENIX_INVERTER_24V_375VA_230V = 0xA242,
  // Phoenix Inverter 48V 375VA 230V
  PHOENIX_INVERTER_48V_375VA_230V = 0xA244,
  // Phoenix Inverter 12V 375VA 120V
  PHOENIX_INVERTER_12V_375VA_120V = 0xA249,
  // Phoenix Inverter 24V 375VA 120V
  PHOENIX_INVERTER_24V_375VA_120V = 0xA24A,
  // Phoenix Inverter 48V 375VA 120V
  PHOENIX_INVERTER_48V_375VA_120V = 0xA24C,
  // Phoenix Inverter 12V 500VA 230V
  PHOENIX_INVERTER_12V_500VA_230V = 0xA251,
  // Phoenix Inverter 24V 500VA 230V
  PHOENIX_INVERTER_24V_500VA_230V = 0xA252,
  // Phoenix Inverter 48V 500VA 230V
  PHOENIX_INVERTER_48V_500VA_230V = 0xA254,
  // Phoenix Inverter 12V 500VA 120V
  PHOENIX_INVERTER_12V_500VA_120V = 0xA259,
  // Phoenix Inverter 24V 500VA 120V
  PHOENIX_INVERTER_24V_500VA_120V = 0xA25A,
  // Phoenix Inverter 48V 500VA 120V
  PHOENIX_INVERTER_48V_500VA_120V = 0xA25C,
  // Phoenix Inverter 12V 800VA 230V
  PHOENIX_INVERTER_12V_800VA_230V = 0xA261,
  // Phoenix Inverter 24V 800VA 230V
  PHOENIX_INVERTER_24V_800VA_230V = 0xA262,
  // Phoenix Inverter 48V 800VA 230V
  PHOENIX_INVERTER_48V_800VA_230V = 0xA264,
  // Phoenix Inverter 12V 800VA 120V
  PHOENIX_INVERTER_12V_800VA_120V = 0xA269,
  // Phoenix Inverter 24V 800VA 120V
  PHOENIX_INVERTER_24V_800VA_120V = 0xA26A,
  // Phoenix Inverter 48V 800VA 120V
  PHOENIX_INVERTER_48V_800VA_120V = 0xA26C,
  // Phoenix Inverter 12V 1200VA 230V
  PHOENIX_INVERTER_12V_1200VA_230V = 0xA271,
  // Phoenix Inverter 24V 1200VA 230V
  PHOENIX_INVERTER_24V_1200VA_230V = 0xA272,
  // Phoenix Inverter 48V 1200VA 230V
  PHOENIX_INVERTER_48V_1200VA_230V = 0xA274,
  // Phoenix Inverter 12V 1200VA 120V
  PHOENIX_INVERTER_12V_1200VA_120V = 0xA279,
  // Phoenix Inverter 24V 1200VA 120V
  PHOENIX_INVERTER_24V_1200VA_120V = 0xA27A,
  // Phoenix Inverter 48V 1200VA 120V
  PHOENIX_INVERTER_48V_1200VA_120V = 0xA27C,
  // Phoenix Inverter 12V 1600VA 230V
  PHOENIX_INVERTER_12V_1600VA_230V = 0xA281,
  // Phoenix Inverter 24V 1600VA 230V
  PHOENIX_INVERTER_24V_1600VA_230V = 0xA282,
  // Phoenix Inverter 48V 1600VA 230V
  PHOENIX_INVERTER_48V_1600VA_230V = 0xA284,
  // Phoenix Inverter 12V 2000VA 230V
  PHOENIX_INVERTER_12V_2000VA_230V = 0xA291,
  // Phoenix Inverter 24V 2000VA 230V
  PHOENIX_INVERTER_24V_2000VA_230V = 0xA292,
  // Phoenix Inverter 48V 2000VA 230V
  PHOENIX_INVERTER_48V_2000VA_230V = 0xA294,
  // Phoenix Inverter 12V 3000VA 230V
  PHOENIX_INVERTER_12V_3000VA_230V = 0xA2A1,
  // Phoenix Inverter 24V 3000VA 230V
  PHOENIX_INVERTER_24V_3000VA_230V = 0xA2A2,
  // Phoenix Inverter 48V 3000VA 230V
  PHOENIX_INVERTER_48V_3000VA_230V = 0xA2A4,
  // Phoenix Smart IP43 Charger 12|50 (1+1)
  PHOENIX_INVERTER_SMART_IP43_CHARGER_12_50 = 0xA340,
  // Phoenix Smart IP43 Charger 12|50 (3)
  PHOENIX_INVERTER_SMART_IP43_CHARGER_12_50_3 = 0xA341,
  // Phoenix Smart IP43 Charger 24|25 (1+1)
  PHOENIX_INVERTER_SMART_IP43_CHARGER_24_50 = 0xA342,
  // Phoenix Smart IP43 Charger 24|25 (3)s
  PHOENIX_INVERTER_SMART_IP43_CHARGER_24_50_3 = 0xA343,
  // Phoenix Smart IP43 Charger 12|30 (1+1)
  PHOENIX_INVERTER_SMART_IP43_CHARGER_12_30 = 0xA344,
  // Phoenix Smart IP43 Charger 12|30 (3)
  PHOENIX_INVERTER_SMART_IP43_CHARGER_12_30_3 = 0xA345,
  // Phoenix Smart IP43 Charger 24|16 (1+1)
  PHOENIX_INVERTER_SMART_IP43_CHARGER_24_16 = 0xA346,
  // Phoenix Smart IP43 Charger 24|16 (3)
  PHOENIX_INVERTER_SMART_IP43_CHARGER_24_16_3 = 0xA347,
  // SmartShunt 300A/50mV
  SMARTSHUNT_300A_50MV = 0xC038,
  // SmartShunt 500A/50mV
  SMARTSHUNT_500A_50MV = 0xA389,
};

struct VICTRON_BT_MANUFACTURER_DATA {
  u_int8_t d00;  // 0x10
  u_int8_t d01;  // 0x02
  VICTRON_PRODUCT_ID product_id;
};

class VictronListener : public esp32_ble_tracker::ESPBTDeviceListener {
 public:
  bool parse_device(const esp32_ble_tracker::ESPBTDevice &device) override;
};

}  // namespace victron_scanner
}  // namespace esphome

#endif
