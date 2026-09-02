/*
  UAV ESP32 FLIGHT BRAIN
  SINGLE-FILE ARDUINO DEPLOYMENT

  Original flight-controller code preserved.
  Generated Random Forest TinyML model embedded directly below.
*/

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <DHT.h>
#include <RF24.h>
#include <math.h>

// ============================================================
// EMBEDDED TINYML RANDOM FOREST MODEL
// Generated from combined 658,443-record UAV health dataset
// 12 features, 6 classes, 10 trees, max depth 8
// ============================================================

/* Auto-Generated Embedded Model with Smart RTH (6.58 Lakhs Dataset) */
#ifndef DRONE_HEALTH_MODEL_H
#define DRONE_HEALTH_MODEL_H

#if defined(__STDC_VERSION__) || defined(__cplusplus) || defined(_MSC_VER) || defined(__GNUC__)
  #include <stdint.h>
#else
  typedef unsigned char  uint8_t;
  typedef unsigned short uint16_t;
  typedef unsigned int   uint32_t;
  typedef signed short   int16_t;
#endif

// Feature Indices
#define FEAT_VIB_RMS 0
#define FEAT_VOLT 1
#define FEAT_CURR 2
#define FEAT_MOTOR_TEMP 3
#define FEAT_ESC_TEMP 4
#define FEAT_BATT_TEMP 5
#define FEAT_R_INT 6
#define FEAT_THERMAL_RATIO 7
#define FEAT_BARO_ALT 8
#define FEAT_REL_HUMIDITY 9
#define FEAT_DIST_TO_HOME 10
#define FEAT_BATT_SOC 11
#define NUM_FEATURES 12
#define NUM_CLASSES 6

static inline void tree_0_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_CURR] <= 36.155001f) {
    if (f[FEAT_BATT_TEMP] <= 34.049999f) {
      if (f[FEAT_CURR] <= 20.335000f) {
        if (f[FEAT_BARO_ALT] <= 79.950001f) {
          if (f[FEAT_VIB_RMS] <= 0.897500f) {
            if (f[FEAT_THERMAL_RATIO] <= 0.034050f) {
              if (f[FEAT_BATT_SOC] <= 32.049999f) {
                if (f[FEAT_VIB_RMS] <= 0.806500f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[0] += 1;
              }
            } else {
              votes[3] += 1;
            }
          } else {
            if (f[FEAT_VIB_RMS] <= 0.903500f) {
              if (f[FEAT_BATT_SOC] <= 32.150001f) {
                votes[3] += 1;
              } else {
                votes[0] += 1;
              }
            } else {
              votes[0] += 1;
            }
          }
        } else {
          if (f[FEAT_BARO_ALT] <= 80.049999f) {
            if (f[FEAT_DIST_TO_HOME] <= 456.849991f) {
              if (f[FEAT_VOLT] <= 15.890000f) {
                votes[4] += 1;
              } else {
                if (f[FEAT_VOLT] <= 16.235000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              if (f[FEAT_VIB_RMS] <= 0.808500f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_R_INT] <= 0.032750f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          } else {
            votes[4] += 1;
          }
        }
      } else {
        if (f[FEAT_REL_HUMIDITY] <= 56.000000f) {
          if (f[FEAT_R_INT] <= 0.034350f) {
            if (f[FEAT_BARO_ALT] <= 79.950001f) {
              votes[0] += 1;
            } else {
              if (f[FEAT_BARO_ALT] <= 80.049999f) {
                if (f[FEAT_BATT_TEMP] <= 33.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[4] += 1;
              }
            }
          } else {
            if (f[FEAT_THERMAL_RATIO] <= 0.029650f) {
              if (f[FEAT_MOTOR_TEMP] <= 38.750000f) {
                if (f[FEAT_BATT_TEMP] <= 33.150000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 80.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 612.649994f) {
                if (f[FEAT_REL_HUMIDITY] <= 52.300001f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 79.950001f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 44.549999f) {
            if (f[FEAT_VIB_RMS] <= 2.599500f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.028550f) {
                votes[4] += 1;
              } else {
                if (f[FEAT_VOLT] <= 13.995000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              votes[1] += 1;
            }
          } else {
            if (f[FEAT_VIB_RMS] <= 2.600500f) {
              if (f[FEAT_BATT_SOC] <= 44.950001f) {
                if (f[FEAT_ESC_TEMP] <= 34.049999f) {
                  votes[4] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 56.750000f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              votes[1] += 1;
            }
          }
        }
      }
    } else {
      if (f[FEAT_DIST_TO_HOME] <= 2169.650024f) {
        if (f[FEAT_BATT_SOC] <= 57.150000f) {
          if (f[FEAT_BATT_SOC] <= 16.750000f) {
            votes[5] += 1;
          } else {
            if (f[FEAT_MOTOR_TEMP] <= 31.799999f) {
              if (f[FEAT_BARO_ALT] <= 5.050000f) {
                if (f[FEAT_MOTOR_TEMP] <= 29.950000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_BATT_TEMP] <= 36.199999f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_VOLT] <= 13.265000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BARO_ALT] <= 79.950001f) {
            if (f[FEAT_BATT_TEMP] <= 42.400000f) {
              votes[0] += 1;
            } else {
              if (f[FEAT_CURR] <= 35.730001f) {
                if (f[FEAT_BATT_TEMP] <= 48.549999f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 58.150000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 80.049999f) {
              if (f[FEAT_R_INT] <= 0.039550f) {
                if (f[FEAT_CURR] <= 27.000000f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 1.062000f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              votes[4] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_BARO_ALT] <= 35.250000f) {
          if (f[FEAT_BATT_TEMP] <= 39.750000f) {
            if (f[FEAT_R_INT] <= 0.049650f) {
              if (f[FEAT_BATT_SOC] <= 43.950001f) {
                if (f[FEAT_BARO_ALT] <= 35.049999f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 1.385000f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              votes[5] += 1;
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 43.850000f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_CURR] <= 31.885000f) {
                votes[5] += 1;
              } else {
                votes[3] += 1;
              }
            }
          }
        } else {
          if (f[FEAT_BATT_TEMP] <= 39.750000f) {
            if (f[FEAT_R_INT] <= 0.049650f) {
              if (f[FEAT_DIST_TO_HOME] <= 2176.900024f) {
                if (f[FEAT_BATT_TEMP] <= 39.450001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[5] += 1;
              }
            } else {
              votes[5] += 1;
            }
          } else {
            if (f[FEAT_R_INT] <= 0.049650f) {
              if (f[FEAT_BATT_SOC] <= 43.950001f) {
                if (f[FEAT_DIST_TO_HOME] <= 2173.349976f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              votes[5] += 1;
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_ESC_TEMP] <= 48.049999f) {
      if (f[FEAT_CURR] <= 37.514999f) {
        if (f[FEAT_THERMAL_RATIO] <= 0.055850f) {
          if (f[FEAT_MOTOR_TEMP] <= 55.049999f) {
            if (f[FEAT_THERMAL_RATIO] <= 0.050300f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_VIB_RMS] <= 1.431500f) {
                if (f[FEAT_BATT_TEMP] <= 49.750000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 47.950001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 47.950001f) {
            if (f[FEAT_CURR] <= 36.750000f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 646.250000f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            }
          } else {
            if (f[FEAT_VIB_RMS] <= 1.510000f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_VIB_RMS] <= 1.700000f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            }
          }
        }
      } else {
        if (f[FEAT_ESC_TEMP] <= 47.950001f) {
          if (f[FEAT_VIB_RMS] <= 1.102000f) {
            if (f[FEAT_REL_HUMIDITY] <= 58.750000f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_VOLT] <= 13.220000f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            }
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 57.950001f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.054850f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 50.800001f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 49.349998f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_R_INT] <= 0.051050f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_CURR] <= 37.629999f) {
            votes[2] += 1;
          } else {
            if (f[FEAT_BARO_ALT] <= 35.900000f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.055400f) {
                if (f[FEAT_CURR] <= 38.115002f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 36.900000f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 54.199999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        }
      }
    } else {
      votes[2] += 1;
    }
  }
}

static inline void tree_1_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_ESC_TEMP] <= 47.950001f) {
    if (f[FEAT_REL_HUMIDITY] <= 56.950001f) {
      if (f[FEAT_R_INT] <= 0.045050f) {
        if (f[FEAT_REL_HUMIDITY] <= 54.950001f) {
          if (f[FEAT_VOLT] <= 14.795000f) {
            if (f[FEAT_DIST_TO_HOME] <= 1285.900024f) {
              if (f[FEAT_BATT_SOC] <= 73.450001f) {
                if (f[FEAT_ESC_TEMP] <= 34.549999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.030450f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              if (f[FEAT_R_INT] <= 0.044950f) {
                if (f[FEAT_ESC_TEMP] <= 35.049999f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_VOLT] <= 14.185000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 79.950001f) {
              votes[0] += 1;
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 592.500000f) {
                if (f[FEAT_BARO_ALT] <= 80.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 25.665000f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BARO_ALT] <= 80.049999f) {
            if (f[FEAT_THERMAL_RATIO] <= 0.034050f) {
              if (f[FEAT_CURR] <= 24.160000f) {
                if (f[FEAT_BATT_SOC] <= 32.049999f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.571500f) {
                  votes[0] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_TEMP] <= 36.199999f) {
                if (f[FEAT_BATT_SOC] <= 39.500000f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[3] += 1;
              }
            }
          } else {
            votes[4] += 1;
          }
        }
      } else {
        if (f[FEAT_BARO_ALT] <= 48.049999f) {
          if (f[FEAT_BATT_TEMP] <= 39.650000f) {
            if (f[FEAT_DIST_TO_HOME] <= 533.049988f) {
              if (f[FEAT_DIST_TO_HOME] <= 298.950005f) {
                votes[1] += 1;
              } else {
                if (f[FEAT_VIB_RMS] <= 0.813500f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              if (f[FEAT_R_INT] <= 0.049650f) {
                if (f[FEAT_MOTOR_TEMP] <= 38.549999f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 53.150000f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_CURR] <= 33.934999f) {
              if (f[FEAT_BATT_SOC] <= 43.850000f) {
                if (f[FEAT_DIST_TO_HOME] <= 2163.399902f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 0.769500f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_VOLT] <= 13.640000f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.056400f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          }
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 1969.299927f) {
            if (f[FEAT_REL_HUMIDITY] <= 55.450001f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_VIB_RMS] <= 1.472000f) {
                votes[3] += 1;
              } else {
                votes[1] += 1;
              }
            }
          } else {
            votes[5] += 1;
          }
        }
      }
    } else {
      if (f[FEAT_THERMAL_RATIO] <= 0.040400f) {
        if (f[FEAT_DIST_TO_HOME] <= 373.449997f) {
          if (f[FEAT_VIB_RMS] <= 2.600500f) {
            if (f[FEAT_BATT_SOC] <= 57.500000f) {
              if (f[FEAT_CURR] <= 24.195001f) {
                if (f[FEAT_VIB_RMS] <= 2.473500f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 44.150000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              votes[4] += 1;
            }
          } else {
            votes[1] += 1;
          }
        } else {
          if (f[FEAT_BATT_TEMP] <= 30.650001f) {
            if (f[FEAT_VIB_RMS] <= 2.600500f) {
              if (f[FEAT_VIB_RMS] <= 2.599500f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.028550f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.038850f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              votes[1] += 1;
            }
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 389.649994f) {
              if (f[FEAT_REL_HUMIDITY] <= 61.300001f) {
                if (f[FEAT_REL_HUMIDITY] <= 59.250000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 49.050001f) {
                  votes[3] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 53.150000f) {
                if (f[FEAT_BATT_SOC] <= 52.900000f) {
                  votes[1] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.027650f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        }
      } else {
        if (f[FEAT_BATT_TEMP] <= 51.250000f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.056250f) {
            if (f[FEAT_DIST_TO_HOME] <= 627.000000f) {
              if (f[FEAT_BATT_TEMP] <= 48.650000f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_CURR] <= 38.184999f) {
                if (f[FEAT_VIB_RMS] <= 1.341500f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 48.750000f) {
            votes[3] += 1;
          } else {
            if (f[FEAT_CURR] <= 37.525002f) {
              votes[3] += 1;
            } else {
              votes[2] += 1;
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_ESC_TEMP] <= 48.049999f) {
      if (f[FEAT_BATT_SOC] <= 57.450001f) {
        if (f[FEAT_MOTOR_TEMP] <= 54.750000f) {
          if (f[FEAT_MOTOR_TEMP] <= 54.549999f) {
            if (f[FEAT_CURR] <= 36.385000f) {
              if (f[FEAT_MOTOR_TEMP] <= 53.850000f) {
                if (f[FEAT_BARO_ALT] <= 33.600000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 57.549999f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.054550f) {
                if (f[FEAT_VIB_RMS] <= 1.553000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 50.350000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 358.699989f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_BATT_SOC] <= 54.800001f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_R_INT] <= 0.052650f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BATT_TEMP] <= 50.949999f) {
            if (f[FEAT_VIB_RMS] <= 1.405500f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_R_INT] <= 0.053300f) {
                if (f[FEAT_MOTOR_TEMP] <= 54.850000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          } else {
            votes[3] += 1;
          }
        }
      } else {
        if (f[FEAT_BATT_SOC] <= 59.450001f) {
          if (f[FEAT_R_INT] <= 0.051250f) {
            votes[3] += 1;
          } else {
            if (f[FEAT_MOTOR_TEMP] <= 54.350000f) {
              if (f[FEAT_CURR] <= 36.955000f) {
                if (f[FEAT_BARO_ALT] <= 32.400000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 59.450001f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 36.065001f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 58.900000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BATT_TEMP] <= 48.750000f) {
            if (f[FEAT_DIST_TO_HOME] <= 622.949982f) {
              if (f[FEAT_MOTOR_TEMP] <= 53.850000f) {
                if (f[FEAT_R_INT] <= 0.049850f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 35.350000f) {
                if (f[FEAT_CURR] <= 36.254999f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.053250f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 33.750000f) {
              if (f[FEAT_REL_HUMIDITY] <= 58.300001f) {
                if (f[FEAT_VIB_RMS] <= 1.241000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_CURR] <= 37.425001f) {
                if (f[FEAT_R_INT] <= 0.050950f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          }
        }
      }
    } else {
      votes[2] += 1;
    }
  }
}

static inline void tree_2_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_ESC_TEMP] <= 47.950001f) {
    if (f[FEAT_VOLT] <= 14.095000f) {
      if (f[FEAT_R_INT] <= 0.048850f) {
        if (f[FEAT_BATT_TEMP] <= 32.400000f) {
          if (f[FEAT_VOLT] <= 14.005000f) {
            if (f[FEAT_DIST_TO_HOME] <= 371.849991f) {
              if (f[FEAT_CURR] <= 24.915000f) {
                if (f[FEAT_REL_HUMIDITY] <= 62.750000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 57.450001f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_VIB_RMS] <= 2.602000f) {
                if (f[FEAT_BATT_SOC] <= 45.000000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[1] += 1;
              }
            }
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 386.449997f) {
              if (f[FEAT_VIB_RMS] <= 2.601000f) {
                if (f[FEAT_VOLT] <= 14.065000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[1] += 1;
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 34.150000f) {
                if (f[FEAT_BATT_SOC] <= 47.350000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_VOLT] <= 14.015000f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_CURR] <= 26.995000f) {
            if (f[FEAT_DIST_TO_HOME] <= 533.049988f) {
              if (f[FEAT_BATT_SOC] <= 16.750000f) {
                votes[5] += 1;
              } else {
                if (f[FEAT_VIB_RMS] <= 0.813500f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 39.450000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 36.549999f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_VOLT] <= 14.085000f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_CURR] <= 27.790000f) {
                votes[3] += 1;
              } else {
                votes[0] += 1;
              }
            }
          }
        }
      } else {
        if (f[FEAT_ESC_TEMP] <= 41.400002f) {
          if (f[FEAT_R_INT] <= 0.049650f) {
            if (f[FEAT_BARO_ALT] <= 19.250000f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 2174.599976f) {
                if (f[FEAT_REL_HUMIDITY] <= 54.350000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 0.889500f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 43.750000f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_CURR] <= 30.850000f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.033550f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_VOLT] <= 13.275000f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_CURR] <= 37.684999f) {
            if (f[FEAT_CURR] <= 37.235001f) {
              if (f[FEAT_MOTOR_TEMP] <= 55.100000f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 54.950001f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 56.950001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_MOTOR_TEMP] <= 55.049999f) {
              if (f[FEAT_R_INT] <= 0.051150f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.052400f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      }
    } else {
      if (f[FEAT_REL_HUMIDITY] <= 56.000000f) {
        if (f[FEAT_REL_HUMIDITY] <= 54.950001f) {
          if (f[FEAT_VOLT] <= 14.795000f) {
            if (f[FEAT_BATT_SOC] <= 57.150000f) {
              if (f[FEAT_BATT_SOC] <= 57.049999f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_ESC_TEMP] <= 34.950001f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 28.045000f) {
                if (f[FEAT_BATT_SOC] <= 72.750000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 34.750000f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 87.649998f) {
              if (f[FEAT_R_INT] <= 0.039350f) {
                if (f[FEAT_BARO_ALT] <= 79.950001f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 73.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 79.950001f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_BARO_ALT] <= 80.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 28.950000f) {
            if (f[FEAT_BARO_ALT] <= 79.950001f) {
              if (f[FEAT_DIST_TO_HOME] <= 730.649994f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.034050f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 80.049999f) {
                if (f[FEAT_VOLT] <= 16.150001f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[4] += 1;
              }
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 80.250000f) {
              if (f[FEAT_BATT_TEMP] <= 36.600000f) {
                votes[0] += 1;
              } else {
                votes[3] += 1;
              }
            } else {
              votes[4] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_ESC_TEMP] <= 34.450001f) {
          if (f[FEAT_VIB_RMS] <= 2.600500f) {
            if (f[FEAT_VIB_RMS] <= 2.599500f) {
              if (f[FEAT_REL_HUMIDITY] <= 56.850000f) {
                votes[0] += 1;
              } else {
                votes[4] += 1;
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 35.950001f) {
                votes[1] += 1;
              } else {
                votes[4] += 1;
              }
            }
          } else {
            votes[1] += 1;
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 58.850000f) {
            votes[1] += 1;
          } else {
            if (f[FEAT_THERMAL_RATIO] <= 0.026400f) {
              votes[4] += 1;
            } else {
              if (f[FEAT_REL_HUMIDITY] <= 61.350000f) {
                votes[4] += 1;
              } else {
                votes[1] += 1;
              }
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_MOTOR_TEMP] <= 54.049999f) {
      if (f[FEAT_ESC_TEMP] <= 48.049999f) {
        if (f[FEAT_BATT_SOC] <= 57.549999f) {
          if (f[FEAT_VOLT] <= 13.255000f) {
            if (f[FEAT_THERMAL_RATIO] <= 0.053850f) {
              if (f[FEAT_BATT_SOC] <= 57.350000f) {
                if (f[FEAT_CURR] <= 36.285000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_BATT_TEMP] <= 50.450001f) {
                if (f[FEAT_R_INT] <= 0.052550f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.053950f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 643.049988f) {
            if (f[FEAT_REL_HUMIDITY] <= 59.450001f) {
              if (f[FEAT_CURR] <= 36.455000f) {
                if (f[FEAT_VOLT] <= 13.385000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 60.400000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_R_INT] <= 0.051300f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_BARO_ALT] <= 36.250000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_VOLT] <= 13.235000f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_VIB_RMS] <= 1.068500f) {
                if (f[FEAT_BATT_TEMP] <= 49.199999f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 37.144999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        }
      } else {
        votes[2] += 1;
      }
    } else {
      if (f[FEAT_CURR] <= 37.355000f) {
        if (f[FEAT_ESC_TEMP] <= 48.049999f) {
          if (f[FEAT_BATT_TEMP] <= 49.850000f) {
            if (f[FEAT_VIB_RMS] <= 1.051000f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_VOLT] <= 13.345000f) {
                if (f[FEAT_BATT_SOC] <= 58.650000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.053150f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 56.250000f) {
              if (f[FEAT_CURR] <= 36.850000f) {
                votes[2] += 1;
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 50.150000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 649.649994f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          votes[2] += 1;
        }
      } else {
        if (f[FEAT_DIST_TO_HOME] <= 649.750000f) {
          if (f[FEAT_MOTOR_TEMP] <= 54.850000f) {
            if (f[FEAT_ESC_TEMP] <= 48.049999f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.054300f) {
                if (f[FEAT_BARO_ALT] <= 36.000000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 48.049999f) {
            if (f[FEAT_MOTOR_TEMP] <= 54.850000f) {
              if (f[FEAT_VIB_RMS] <= 1.328500f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 58.250000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              votes[2] += 1;
            }
          } else {
            votes[2] += 1;
          }
        }
      }
    }
  }
}

static inline void tree_3_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_ESC_TEMP] <= 47.950001f) {
    if (f[FEAT_THERMAL_RATIO] <= 0.034050f) {
      if (f[FEAT_BARO_ALT] <= 80.049999f) {
        if (f[FEAT_VIB_RMS] <= 2.599500f) {
          if (f[FEAT_VOLT] <= 14.095000f) {
            if (f[FEAT_BATT_TEMP] <= 39.650000f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.028550f) {
                if (f[FEAT_VOLT] <= 14.065000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 2170.250000f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 39.250000f) {
                if (f[FEAT_R_INT] <= 0.049650f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 2173.599976f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_VIB_RMS] <= 1.450500f) {
              if (f[FEAT_DIST_TO_HOME] <= 1859.350037f) {
                if (f[FEAT_BATT_SOC] <= 32.049999f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 23.320000f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.028550f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_CURR] <= 25.105000f) {
            if (f[FEAT_BARO_ALT] <= 44.750000f) {
              if (f[FEAT_REL_HUMIDITY] <= 60.549999f) {
                votes[1] += 1;
              } else {
                if (f[FEAT_VIB_RMS] <= 2.645500f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.029350f) {
                votes[1] += 1;
              } else {
                if (f[FEAT_VIB_RMS] <= 2.600500f) {
                  votes[3] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 59.549999f) {
              if (f[FEAT_REL_HUMIDITY] <= 59.350000f) {
                votes[1] += 1;
              } else {
                if (f[FEAT_CURR] <= 25.115001f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              votes[1] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_BATT_SOC] <= 45.099999f) {
          votes[5] += 1;
        } else {
          votes[4] += 1;
        }
      }
    } else {
      if (f[FEAT_BARO_ALT] <= 35.750000f) {
        if (f[FEAT_DIST_TO_HOME] <= 533.049988f) {
          if (f[FEAT_DIST_TO_HOME] <= 532.950012f) {
            votes[5] += 1;
          } else {
            if (f[FEAT_VIB_RMS] <= 0.813500f) {
              votes[5] += 1;
            } else {
              votes[5] += 1;
            }
          }
        } else {
          if (f[FEAT_CURR] <= 17.150000f) {
            votes[3] += 1;
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 2171.150024f) {
              if (f[FEAT_BATT_TEMP] <= 36.199999f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 55.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_R_INT] <= 0.049650f) {
                if (f[FEAT_CURR] <= 30.215000f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[5] += 1;
              }
            }
          }
        }
      } else {
        if (f[FEAT_ESC_TEMP] <= 41.400002f) {
          if (f[FEAT_R_INT] <= 0.049650f) {
            if (f[FEAT_BATT_TEMP] <= 36.500000f) {
              votes[0] += 1;
            } else {
              votes[3] += 1;
            }
          } else {
            votes[5] += 1;
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 56.950001f) {
            if (f[FEAT_VIB_RMS] <= 1.061500f) {
              if (f[FEAT_CURR] <= 37.475000f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 54.950001f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_R_INT] <= 0.053950f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 58.150000f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_REL_HUMIDITY] <= 58.250000f) {
                if (f[FEAT_VIB_RMS] <= 1.306000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 54.950001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_CURR] <= 36.985001f) {
      if (f[FEAT_REL_HUMIDITY] <= 59.049999f) {
        if (f[FEAT_THERMAL_RATIO] <= 0.053150f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.050450f) {
            votes[3] += 1;
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 57.850000f) {
              if (f[FEAT_VOLT] <= 13.500000f) {
                if (f[FEAT_BARO_ALT] <= 34.350000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 621.750000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 53.450001f) {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.053250f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 48.049999f) {
            if (f[FEAT_REL_HUMIDITY] <= 58.049999f) {
              if (f[FEAT_BARO_ALT] <= 36.650000f) {
                if (f[FEAT_REL_HUMIDITY] <= 55.850000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_VOLT] <= 13.340000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 53.600000f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 49.900000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            votes[2] += 1;
          }
        }
      } else {
        if (f[FEAT_DIST_TO_HOME] <= 641.350006f) {
          if (f[FEAT_ESC_TEMP] <= 48.049999f) {
            if (f[FEAT_DIST_TO_HOME] <= 628.100006f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.052050f) {
                if (f[FEAT_DIST_TO_HOME] <= 625.000000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_VIB_RMS] <= 1.167000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 48.650000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_VIB_RMS] <= 1.477500f) {
            if (f[FEAT_DIST_TO_HOME] <= 649.549988f) {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_DIST_TO_HOME] <= 647.750000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_CURR] <= 36.969999f) {
                if (f[FEAT_BATT_SOC] <= 54.350000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 34.450001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 48.049999f) {
              if (f[FEAT_REL_HUMIDITY] <= 59.549999f) {
                if (f[FEAT_CURR] <= 36.869999f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 34.400002f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      }
    } else {
      if (f[FEAT_VOLT] <= 12.835000f) {
        votes[2] += 1;
      } else {
        if (f[FEAT_ESC_TEMP] <= 48.049999f) {
          if (f[FEAT_MOTOR_TEMP] <= 54.850000f) {
            if (f[FEAT_BARO_ALT] <= 37.150000f) {
              if (f[FEAT_VOLT] <= 13.145000f) {
                if (f[FEAT_BARO_ALT] <= 32.900000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.051450f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_REL_HUMIDITY] <= 59.050001f) {
                if (f[FEAT_R_INT] <= 0.052900f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[3] += 1;
              }
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 33.949999f) {
              if (f[FEAT_BATT_TEMP] <= 49.199999f) {
                votes[2] += 1;
              } else {
                votes[3] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        } else {
          votes[2] += 1;
        }
      }
    }
  }
}

static inline void tree_4_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_VOLT] <= 14.095000f) {
    if (f[FEAT_R_INT] <= 0.048850f) {
      if (f[FEAT_THERMAL_RATIO] <= 0.041250f) {
        if (f[FEAT_BATT_TEMP] <= 32.400000f) {
          if (f[FEAT_VIB_RMS] <= 2.599500f) {
            if (f[FEAT_DIST_TO_HOME] <= 372.050003f) {
              if (f[FEAT_BATT_SOC] <= 44.049999f) {
                if (f[FEAT_VOLT] <= 14.005000f) {
                  votes[3] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 24.764999f) {
                  votes[4] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 376.000000f) {
                if (f[FEAT_ESC_TEMP] <= 34.049999f) {
                  votes[4] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 34.250000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          } else {
            votes[1] += 1;
          }
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 533.049988f) {
            votes[5] += 1;
          } else {
            if (f[FEAT_VOLT] <= 14.055000f) {
              if (f[FEAT_MOTOR_TEMP] <= 37.850000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 36.199999f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 33.750000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 54.850000f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          }
        }
      } else {
        votes[2] += 1;
      }
    } else {
      if (f[FEAT_CURR] <= 34.835001f) {
        if (f[FEAT_BATT_SOC] <= 43.850000f) {
          if (f[FEAT_CURR] <= 30.835000f) {
            votes[5] += 1;
          } else {
            if (f[FEAT_BARO_ALT] <= 35.250000f) {
              if (f[FEAT_DIST_TO_HOME] <= 2164.799927f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_VIB_RMS] <= 1.336500f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              votes[5] += 1;
            }
          }
        } else {
          if (f[FEAT_VOLT] <= 13.355000f) {
            if (f[FEAT_CURR] <= 31.384999f) {
              if (f[FEAT_DIST_TO_HOME] <= 2175.300049f) {
                if (f[FEAT_R_INT] <= 0.049650f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 2179.349976f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_R_INT] <= 0.049550f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 38.549999f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 43.950001f) {
              if (f[FEAT_REL_HUMIDITY] <= 51.850000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_ESC_TEMP] <= 35.650000f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              votes[3] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_BATT_TEMP] <= 50.650000f) {
          if (f[FEAT_DIST_TO_HOME] <= 635.649994f) {
            if (f[FEAT_CURR] <= 36.855000f) {
              if (f[FEAT_DIST_TO_HOME] <= 627.600006f) {
                if (f[FEAT_BARO_ALT] <= 35.000000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 48.350000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 37.485001f) {
                if (f[FEAT_VIB_RMS] <= 1.726000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 1.210500f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 47.950001f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.056450f) {
                if (f[FEAT_DIST_TO_HOME] <= 649.950012f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_CURR] <= 36.594999f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.050450f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 635.750000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_CURR] <= 37.235001f) {
            if (f[FEAT_MOTOR_TEMP] <= 53.950001f) {
              if (f[FEAT_BATT_SOC] <= 50.650000f) {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 57.350000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 46.150000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 50.950001f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_CURR] <= 37.594999f) {
              if (f[FEAT_R_INT] <= 0.054050f) {
                if (f[FEAT_REL_HUMIDITY] <= 56.850000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 47.950001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 639.649994f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 639.750000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_MOTOR_TEMP] <= 35.450001f) {
      if (f[FEAT_VOLT] <= 15.805000f) {
        if (f[FEAT_BATT_SOC] <= 32.049999f) {
          if (f[FEAT_DIST_TO_HOME] <= 731.450012f) {
            votes[3] += 1;
          } else {
            if (f[FEAT_VIB_RMS] <= 0.817500f) {
              if (f[FEAT_DIST_TO_HOME] <= 731.549988f) {
                if (f[FEAT_VIB_RMS] <= 0.815500f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[0] += 1;
              }
            } else {
              votes[0] += 1;
            }
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 81.299999f) {
            if (f[FEAT_VIB_RMS] <= 2.414500f) {
              if (f[FEAT_DIST_TO_HOME] <= 447.699997f) {
                votes[4] += 1;
              } else {
                votes[0] += 1;
              }
            } else {
              votes[1] += 1;
            }
          } else {
            votes[1] += 1;
          }
        }
      } else {
        if (f[FEAT_BATT_SOC] <= 90.950001f) {
          if (f[FEAT_VOLT] <= 16.115001f) {
            if (f[FEAT_BARO_ALT] <= 79.950001f) {
              votes[0] += 1;
            } else {
              if (f[FEAT_BARO_ALT] <= 80.049999f) {
                if (f[FEAT_BATT_SOC] <= 82.399998f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[4] += 1;
              }
            }
          } else {
            if (f[FEAT_THERMAL_RATIO] <= 0.029650f) {
              if (f[FEAT_BARO_ALT] <= 79.950001f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 28.150001f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              votes[4] += 1;
            }
          }
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 244.849998f) {
            votes[0] += 1;
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 248.349998f) {
              if (f[FEAT_BATT_SOC] <= 92.149998f) {
                if (f[FEAT_VIB_RMS] <= 0.806500f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 244.949997f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              votes[0] += 1;
            }
          }
        }
      }
    } else {
      if (f[FEAT_BARO_ALT] <= 54.650000f) {
        if (f[FEAT_REL_HUMIDITY] <= 58.549999f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.039250f) {
            if (f[FEAT_BATT_TEMP] <= 32.950001f) {
              if (f[FEAT_CURR] <= 25.685000f) {
                if (f[FEAT_REL_HUMIDITY] <= 58.350000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.676500f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_R_INT] <= 0.044950f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_R_INT] <= 0.045050f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 85.250000f) {
            if (f[FEAT_BATT_TEMP] <= 39.049999f) {
              if (f[FEAT_VOLT] <= 15.425000f) {
                if (f[FEAT_VIB_RMS] <= 2.599500f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.596500f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              votes[2] += 1;
            }
          } else {
            if (f[FEAT_VOLT] <= 15.320000f) {
              votes[2] += 1;
            } else {
              if (f[FEAT_REL_HUMIDITY] <= 58.650000f) {
                if (f[FEAT_VIB_RMS] <= 2.607000f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.601000f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        }
      } else {
        if (f[FEAT_DIST_TO_HOME] <= 1290.950012f) {
          if (f[FEAT_DIST_TO_HOME] <= 618.450012f) {
            if (f[FEAT_ESC_TEMP] <= 34.350000f) {
              if (f[FEAT_BARO_ALT] <= 59.049999f) {
                if (f[FEAT_VOLT] <= 15.875000f) {
                  votes[1] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.036000f) {
                  votes[0] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 602.049988f) {
                if (f[FEAT_R_INT] <= 0.034150f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 31.625000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 80.049999f) {
              if (f[FEAT_R_INT] <= 0.039250f) {
                if (f[FEAT_MOTOR_TEMP] <= 37.150000f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 35.250000f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              votes[4] += 1;
            }
          }
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 1301.250000f) {
            if (f[FEAT_VIB_RMS] <= 0.967000f) {
              if (f[FEAT_VOLT] <= 14.785000f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_ESC_TEMP] <= 34.250000f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.031550f) {
                if (f[FEAT_BARO_ALT] <= 80.150002f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 72.700001f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_R_INT] <= 0.039650f) {
              if (f[FEAT_VOLT] <= 14.740000f) {
                votes[4] += 1;
              } else {
                if (f[FEAT_CURR] <= 27.005000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_VOLT] <= 14.785000f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_CURR] <= 27.075001f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          }
        }
      }
    }
  }
}

static inline void tree_5_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_THERMAL_RATIO] <= 0.042350f) {
    if (f[FEAT_THERMAL_RATIO] <= 0.034050f) {
      if (f[FEAT_REL_HUMIDITY] <= 56.049999f) {
        if (f[FEAT_BARO_ALT] <= 79.950001f) {
          if (f[FEAT_VOLT] <= 14.095000f) {
            if (f[FEAT_BATT_SOC] <= 43.850000f) {
              if (f[FEAT_R_INT] <= 0.049750f) {
                if (f[FEAT_VOLT] <= 13.355000f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                votes[5] += 1;
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 43.950001f) {
                if (f[FEAT_BATT_TEMP] <= 39.650000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 1857.349976f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 32.049999f) {
              if (f[FEAT_VIB_RMS] <= 0.806500f) {
                if (f[FEAT_VIB_RMS] <= 0.805500f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 0.855500f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 25.755000f) {
                if (f[FEAT_R_INT] <= 0.045050f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.044950f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 1315.349976f) {
            if (f[FEAT_R_INT] <= 0.039250f) {
              if (f[FEAT_DIST_TO_HOME] <= 244.949997f) {
                if (f[FEAT_BARO_ALT] <= 80.049999f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_VOLT] <= 15.245000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              if (f[FEAT_VOLT] <= 14.865000f) {
                if (f[FEAT_BATT_SOC] <= 72.850002f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 25.790000f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 1733.800049f) {
              votes[0] += 1;
            } else {
              votes[5] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_THERMAL_RATIO] <= 0.028550f) {
          if (f[FEAT_CURR] <= 24.695001f) {
            if (f[FEAT_REL_HUMIDITY] <= 57.950001f) {
              if (f[FEAT_R_INT] <= 0.034950f) {
                if (f[FEAT_BATT_SOC] <= 91.049999f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 49.799999f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 23.804999f) {
                if (f[FEAT_ESC_TEMP] <= 33.549999f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 50.549999f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 63.699999f) {
              if (f[FEAT_BARO_ALT] <= 55.350000f) {
                if (f[FEAT_BATT_SOC] <= 46.450001f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.025250f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 34.049999f) {
                votes[4] += 1;
              } else {
                votes[1] += 1;
              }
            }
          }
        } else {
          if (f[FEAT_VOLT] <= 13.995000f) {
            if (f[FEAT_MOTOR_TEMP] <= 35.750000f) {
              if (f[FEAT_DIST_TO_HOME] <= 167.150002f) {
                if (f[FEAT_DIST_TO_HOME] <= 46.299999f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 34.150000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 25.075000f) {
                if (f[FEAT_REL_HUMIDITY] <= 59.350000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 47.150000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 34.350000f) {
              if (f[FEAT_VIB_RMS] <= 2.564000f) {
                if (f[FEAT_DIST_TO_HOME] <= 376.050003f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[1] += 1;
              }
            } else {
              votes[3] += 1;
            }
          }
        }
      }
    } else {
      if (f[FEAT_CURR] <= 11.100000f) {
        if (f[FEAT_BATT_TEMP] <= 35.549999f) {
          votes[3] += 1;
        } else {
          if (f[FEAT_BATT_TEMP] <= 35.650000f) {
            if (f[FEAT_THERMAL_RATIO] <= 0.035450f) {
              if (f[FEAT_VIB_RMS] <= 0.806500f) {
                if (f[FEAT_DIST_TO_HOME] <= 533.049988f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.048850f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              votes[5] += 1;
            }
          } else {
            votes[5] += 1;
          }
        }
      } else {
        if (f[FEAT_R_INT] <= 0.049650f) {
          if (f[FEAT_CURR] <= 27.050000f) {
            if (f[FEAT_DIST_TO_HOME] <= 663.799988f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_BATT_SOC] <= 51.650000f) {
                votes[0] += 1;
              } else {
                if (f[FEAT_BATT_SOC] <= 56.650000f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_CURR] <= 27.200001f) {
              if (f[FEAT_R_INT] <= 0.045400f) {
                votes[0] += 1;
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_R_INT] <= 0.049550f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 2170.400024f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_VOLT] <= 13.335000f) {
            votes[5] += 1;
          } else {
            if (f[FEAT_MOTOR_TEMP] <= 39.350000f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 2169.449951f) {
                votes[3] += 1;
              } else {
                votes[5] += 1;
              }
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_MOTOR_TEMP] <= 53.850000f) {
      if (f[FEAT_ESC_TEMP] <= 47.950001f) {
        votes[3] += 1;
      } else {
        if (f[FEAT_CURR] <= 37.035000f) {
          if (f[FEAT_REL_HUMIDITY] <= 55.150000f) {
            if (f[FEAT_ESC_TEMP] <= 48.200001f) {
              if (f[FEAT_R_INT] <= 0.053050f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          } else {
            if (f[FEAT_CURR] <= 35.265001f) {
              if (f[FEAT_CURR] <= 35.145000f) {
                if (f[FEAT_ESC_TEMP] <= 48.100000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 61.250000f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.050450f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 48.049999f) {
            if (f[FEAT_MOTOR_TEMP] <= 53.400000f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_VIB_RMS] <= 1.207000f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 56.450001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            votes[2] += 1;
          }
        }
      }
    } else {
      if (f[FEAT_THERMAL_RATIO] <= 0.056350f) {
        if (f[FEAT_CURR] <= 36.965000f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.053650f) {
            if (f[FEAT_CURR] <= 36.594999f) {
              if (f[FEAT_VIB_RMS] <= 1.496000f) {
                if (f[FEAT_CURR] <= 36.585001f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 57.049999f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 33.049999f) {
                if (f[FEAT_BATT_SOC] <= 63.150000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_THERMAL_RATIO] <= 0.054450f) {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_REL_HUMIDITY] <= 55.950001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_VIB_RMS] <= 1.456000f) {
                if (f[FEAT_CURR] <= 36.575001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 1.527500f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_CURR] <= 37.504999f) {
            if (f[FEAT_BARO_ALT] <= 31.150001f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.054500f) {
                votes[2] += 1;
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_ESC_TEMP] <= 47.950001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 47.950001f) {
              if (f[FEAT_VIB_RMS] <= 1.085000f) {
                if (f[FEAT_ESC_TEMP] <= 47.750000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_VOLT] <= 12.790000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 63.850000f) {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          }
        }
      } else {
        if (f[FEAT_BATT_TEMP] <= 51.950001f) {
          if (f[FEAT_VOLT] <= 12.650000f) {
            votes[3] += 1;
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_REL_HUMIDITY] <= 57.450001f) {
            if (f[FEAT_MOTOR_TEMP] <= 54.750000f) {
              if (f[FEAT_CURR] <= 37.645000f) {
                if (f[FEAT_DIST_TO_HOME] <= 56.900000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          } else {
            votes[2] += 1;
          }
        }
      }
    }
  }
}

static inline void tree_6_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_ESC_TEMP] <= 47.950001f) {
    if (f[FEAT_VOLT] <= 14.095000f) {
      if (f[FEAT_BATT_TEMP] <= 39.650000f) {
        if (f[FEAT_BATT_TEMP] <= 32.400000f) {
          if (f[FEAT_VOLT] <= 14.005000f) {
            if (f[FEAT_DIST_TO_HOME] <= 382.099991f) {
              if (f[FEAT_DIST_TO_HOME] <= 372.150009f) {
                if (f[FEAT_REL_HUMIDITY] <= 60.850000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 52.450001f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              votes[3] += 1;
            }
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 365.000000f) {
              votes[4] += 1;
            } else {
              if (f[FEAT_BARO_ALT] <= 52.450001f) {
                if (f[FEAT_VIB_RMS] <= 2.601000f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.572000f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_R_INT] <= 0.048850f) {
            if (f[FEAT_BATT_TEMP] <= 35.549999f) {
              if (f[FEAT_MOTOR_TEMP] <= 33.199999f) {
                votes[3] += 1;
              } else {
                votes[0] += 1;
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 31.300000f) {
                if (f[FEAT_BATT_SOC] <= 16.750000f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 36.199999f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 32.449999f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_R_INT] <= 0.049650f) {
                if (f[FEAT_MOTOR_TEMP] <= 38.850000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 31.100000f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        }
      } else {
        if (f[FEAT_ESC_TEMP] <= 41.400002f) {
          if (f[FEAT_VOLT] <= 13.325000f) {
            if (f[FEAT_R_INT] <= 0.049650f) {
              if (f[FEAT_REL_HUMIDITY] <= 51.350000f) {
                if (f[FEAT_DIST_TO_HOME] <= 2175.750000f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 2174.449951f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.033550f) {
                if (f[FEAT_R_INT] <= 0.049750f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.049750f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_R_INT] <= 0.049650f) {
              if (f[FEAT_CURR] <= 31.245000f) {
                if (f[FEAT_BATT_SOC] <= 43.950001f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 38.300001f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              votes[5] += 1;
            }
          }
        } else {
          if (f[FEAT_R_INT] <= 0.048600f) {
            votes[2] += 1;
          } else {
            if (f[FEAT_CURR] <= 38.184999f) {
              if (f[FEAT_MOTOR_TEMP] <= 55.049999f) {
                if (f[FEAT_MOTOR_TEMP] <= 54.950001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      }
    } else {
      if (f[FEAT_REL_HUMIDITY] <= 56.100000f) {
        if (f[FEAT_THERMAL_RATIO] <= 0.030450f) {
          if (f[FEAT_VOLT] <= 15.305000f) {
            if (f[FEAT_BATT_TEMP] <= 34.549999f) {
              if (f[FEAT_BARO_ALT] <= 80.049999f) {
                if (f[FEAT_BARO_ALT] <= 79.950001f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[4] += 1;
              }
            } else {
              if (f[FEAT_CURR] <= 27.964999f) {
                if (f[FEAT_R_INT] <= 0.045050f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 28.235000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 90.950001f) {
              if (f[FEAT_DIST_TO_HOME] <= 316.050003f) {
                if (f[FEAT_DIST_TO_HOME] <= 271.550003f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 420.949997f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 92.250000f) {
                if (f[FEAT_BARO_ALT] <= 79.950001f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[0] += 1;
              }
            }
          }
        } else {
          if (f[FEAT_MOTOR_TEMP] <= 37.549999f) {
            if (f[FEAT_VOLT] <= 14.145000f) {
              if (f[FEAT_CURR] <= 24.719999f) {
                if (f[FEAT_BATT_SOC] <= 32.049999f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 1.201500f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 80.049999f) {
                if (f[FEAT_VOLT] <= 14.175000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[4] += 1;
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 73.149998f) {
              if (f[FEAT_BARO_ALT] <= 79.950001f) {
                if (f[FEAT_DIST_TO_HOME] <= 1858.250000f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.039650f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 80.049999f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.031550f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[4] += 1;
              }
            }
          }
        }
      } else {
        if (f[FEAT_DIST_TO_HOME] <= 427.949997f) {
          if (f[FEAT_BARO_ALT] <= 47.450001f) {
            if (f[FEAT_REL_HUMIDITY] <= 63.150000f) {
              if (f[FEAT_VIB_RMS] <= 2.599500f) {
                if (f[FEAT_BARO_ALT] <= 47.250000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[1] += 1;
              }
            } else {
              votes[4] += 1;
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 55.549999f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.028250f) {
                if (f[FEAT_BATT_SOC] <= 49.650000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.611500f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 270.899994f) {
                votes[1] += 1;
              } else {
                if (f[FEAT_R_INT] <= 0.034300f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 58.049999f) {
            if (f[FEAT_BATT_TEMP] <= 30.650001f) {
              if (f[FEAT_VIB_RMS] <= 2.600500f) {
                votes[4] += 1;
              } else {
                votes[1] += 1;
              }
            } else {
              votes[1] += 1;
            }
          } else {
            if (f[FEAT_CURR] <= 24.905000f) {
              if (f[FEAT_CURR] <= 24.050000f) {
                if (f[FEAT_DIST_TO_HOME] <= 428.849991f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 30.349999f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_REL_HUMIDITY] <= 57.850000f) {
                if (f[FEAT_REL_HUMIDITY] <= 57.150000f) {
                  votes[1] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 25.075000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_BATT_TEMP] <= 50.950001f) {
      if (f[FEAT_ESC_TEMP] <= 48.049999f) {
        if (f[FEAT_REL_HUMIDITY] <= 57.750000f) {
          if (f[FEAT_CURR] <= 37.275000f) {
            if (f[FEAT_VOLT] <= 13.445000f) {
              if (f[FEAT_MOTOR_TEMP] <= 52.750000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_VIB_RMS] <= 0.940500f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 62.650000f) {
                votes[2] += 1;
              } else {
                votes[3] += 1;
              }
            }
          } else {
            if (f[FEAT_VIB_RMS] <= 1.163500f) {
              if (f[FEAT_REL_HUMIDITY] <= 57.549999f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_R_INT] <= 0.053050f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.054300f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.052350f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 54.650000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_THERMAL_RATIO] <= 0.052850f) {
            if (f[FEAT_R_INT] <= 0.052050f) {
              if (f[FEAT_VOLT] <= 13.425000f) {
                if (f[FEAT_CURR] <= 36.025000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.051450f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_REL_HUMIDITY] <= 59.350000f) {
                if (f[FEAT_BARO_ALT] <= 32.400001f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 649.600006f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_MOTOR_TEMP] <= 53.350000f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.053050f) {
                if (f[FEAT_BATT_TEMP] <= 49.150002f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_REL_HUMIDITY] <= 59.250000f) {
                if (f[FEAT_BARO_ALT] <= 36.450001f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 36.785000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        }
      } else {
        votes[2] += 1;
      }
    } else {
      if (f[FEAT_CURR] <= 37.684999f) {
        if (f[FEAT_REL_HUMIDITY] <= 61.650000f) {
          if (f[FEAT_VIB_RMS] <= 1.485500f) {
            votes[2] += 1;
          } else {
            if (f[FEAT_CURR] <= 37.235001f) {
              if (f[FEAT_MOTOR_TEMP] <= 54.400000f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.054600f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        } else {
          votes[3] += 1;
        }
      } else {
        votes[2] += 1;
      }
    }
  }
}

static inline void tree_7_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_CURR] <= 36.105000f) {
    if (f[FEAT_REL_HUMIDITY] <= 56.549999f) {
      if (f[FEAT_BATT_SOC] <= 32.049999f) {
        if (f[FEAT_MOTOR_TEMP] <= 30.400000f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.035450f) {
            if (f[FEAT_BATT_SOC] <= 16.750000f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_VIB_RMS] <= 0.851500f) {
                if (f[FEAT_DIST_TO_HOME] <= 731.450012f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 731.449982f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          } else {
            votes[5] += 1;
          }
        } else {
          if (f[FEAT_R_INT] <= 0.047300f) {
            if (f[FEAT_MOTOR_TEMP] <= 36.150000f) {
              votes[1] += 1;
            } else {
              votes[3] += 1;
            }
          } else {
            votes[5] += 1;
          }
        }
      } else {
        if (f[FEAT_BARO_ALT] <= 80.049999f) {
          if (f[FEAT_R_INT] <= 0.045050f) {
            if (f[FEAT_ESC_TEMP] <= 36.850000f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.034350f) {
                if (f[FEAT_BARO_ALT] <= 79.950001f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 1301.999969f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 675.549988f) {
                votes[0] += 1;
              } else {
                votes[3] += 1;
              }
            }
          } else {
            if (f[FEAT_VOLT] <= 13.335000f) {
              if (f[FEAT_R_INT] <= 0.049650f) {
                if (f[FEAT_BATT_SOC] <= 43.950001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 45.049999f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 35.850000f) {
                if (f[FEAT_R_INT] <= 0.049650f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 43.850000f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        } else {
          votes[4] += 1;
        }
      }
    } else {
      if (f[FEAT_VIB_RMS] <= 2.599500f) {
        if (f[FEAT_R_INT] <= 0.041050f) {
          if (f[FEAT_VOLT] <= 14.005000f) {
            if (f[FEAT_BATT_SOC] <= 44.950001f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 36.350000f) {
                if (f[FEAT_BATT_SOC] <= 45.400000f) {
                  votes[3] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[3] += 1;
              }
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 34.150000f) {
              if (f[FEAT_VOLT] <= 15.725000f) {
                votes[4] += 1;
              } else {
                if (f[FEAT_VIB_RMS] <= 2.574500f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              if (f[FEAT_R_INT] <= 0.037250f) {
                votes[4] += 1;
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 56.850000f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 47.950001f) {
            if (f[FEAT_THERMAL_RATIO] <= 0.028550f) {
              votes[4] += 1;
            } else {
              if (f[FEAT_BATT_SOC] <= 43.549999f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 35.650000f) {
                  votes[4] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_THERMAL_RATIO] <= 0.050500f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_REL_HUMIDITY] <= 59.199999f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          }
        }
      } else {
        if (f[FEAT_DIST_TO_HOME] <= 407.949997f) {
          if (f[FEAT_VOLT] <= 13.995000f) {
            if (f[FEAT_DIST_TO_HOME] <= 376.650009f) {
              if (f[FEAT_VIB_RMS] <= 2.600500f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.029300f) {
                  votes[1] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[1] += 1;
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 45.049999f) {
                if (f[FEAT_CURR] <= 25.700000f) {
                  votes[3] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                votes[1] += 1;
              }
            }
          } else {
            votes[1] += 1;
          }
        } else {
          if (f[FEAT_BARO_ALT] <= 48.350000f) {
            if (f[FEAT_DIST_TO_HOME] <= 408.050003f) {
              if (f[FEAT_VIB_RMS] <= 3.062500f) {
                votes[4] += 1;
              } else {
                votes[1] += 1;
              }
            } else {
              votes[1] += 1;
            }
          } else {
            votes[1] += 1;
          }
        }
      }
    }
  } else {
    if (f[FEAT_BATT_TEMP] <= 51.350000f) {
      if (f[FEAT_BATT_TEMP] <= 49.250000f) {
        if (f[FEAT_DIST_TO_HOME] <= 631.750000f) {
          if (f[FEAT_MOTOR_TEMP] <= 53.950001f) {
            if (f[FEAT_VOLT] <= 13.415000f) {
              if (f[FEAT_CURR] <= 37.195000f) {
                if (f[FEAT_BARO_ALT] <= 34.799999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.051450f) {
                if (f[FEAT_CURR] <= 36.980001f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_CURR] <= 37.235001f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 62.950001f) {
              if (f[FEAT_VOLT] <= 13.435000f) {
                if (f[FEAT_BATT_TEMP] <= 48.750000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 48.450001f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 608.950012f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_R_INT] <= 0.051350f) {
            if (f[FEAT_CURR] <= 36.594999f) {
              if (f[FEAT_CURR] <= 36.285000f) {
                if (f[FEAT_MOTOR_TEMP] <= 53.450001f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 38.100000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_MOTOR_TEMP] <= 54.549999f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          } else {
            if (f[FEAT_VIB_RMS] <= 1.705500f) {
              if (f[FEAT_VIB_RMS] <= 0.937500f) {
                if (f[FEAT_CURR] <= 37.045000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              votes[3] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_R_INT] <= 0.051850f) {
          if (f[FEAT_ESC_TEMP] <= 47.950001f) {
            if (f[FEAT_MOTOR_TEMP] <= 54.850000f) {
              votes[3] += 1;
            } else {
              votes[2] += 1;
            }
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 59.549999f) {
              if (f[FEAT_DIST_TO_HOME] <= 642.350006f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 54.549999f) {
                if (f[FEAT_CURR] <= 37.174999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 47.950001f) {
            if (f[FEAT_R_INT] <= 0.053550f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.054650f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_BATT_TEMP] <= 50.300001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 55.049999f) {
                votes[3] += 1;
              } else {
                votes[2] += 1;
              }
            }
          } else {
            if (f[FEAT_BATT_TEMP] <= 49.450001f) {
              if (f[FEAT_DIST_TO_HOME] <= 645.750000f) {
                votes[2] += 1;
              } else {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 37.355000f) {
                if (f[FEAT_R_INT] <= 0.053350f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 49.549999f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        }
      }
    } else {
      if (f[FEAT_CURR] <= 37.250000f) {
        if (f[FEAT_BARO_ALT] <= 36.900000f) {
          if (f[FEAT_ESC_TEMP] <= 48.100000f) {
            votes[3] += 1;
          } else {
            votes[2] += 1;
          }
        } else {
          votes[3] += 1;
        }
      } else {
        if (f[FEAT_DIST_TO_HOME] <= 61.250000f) {
          if (f[FEAT_CURR] <= 37.674999f) {
            if (f[FEAT_BARO_ALT] <= 34.549999f) {
              votes[3] += 1;
            } else {
              votes[2] += 1;
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_ESC_TEMP] <= 47.900000f) {
            votes[3] += 1;
          } else {
            votes[2] += 1;
          }
        }
      }
    }
  }
}

static inline void tree_8_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_THERMAL_RATIO] <= 0.042350f) {
    if (f[FEAT_R_INT] <= 0.045050f) {
      if (f[FEAT_BARO_ALT] <= 80.049999f) {
        if (f[FEAT_REL_HUMIDITY] <= 56.100000f) {
          if (f[FEAT_DIST_TO_HOME] <= 1856.149963f) {
            if (f[FEAT_VOLT] <= 14.095000f) {
              if (f[FEAT_MOTOR_TEMP] <= 38.250000f) {
                if (f[FEAT_BATT_TEMP] <= 34.750000f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.034050f) {
                if (f[FEAT_THERMAL_RATIO] <= 0.033950f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 765.549988f) {
                  votes[3] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 57.150000f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.031350f) {
                if (f[FEAT_CURR] <= 25.840000f) {
                  votes[0] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 34.750000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              votes[0] += 1;
            }
          }
        } else {
          if (f[FEAT_VOLT] <= 14.005000f) {
            if (f[FEAT_VIB_RMS] <= 2.600500f) {
              if (f[FEAT_R_INT] <= 0.041150f) {
                if (f[FEAT_MOTOR_TEMP] <= 36.150000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.599500f) {
                  votes[3] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              votes[1] += 1;
            }
          } else {
            if (f[FEAT_REL_HUMIDITY] <= 56.450001f) {
              if (f[FEAT_BATT_TEMP] <= 30.450000f) {
                votes[0] += 1;
              } else {
                votes[1] += 1;
              }
            } else {
              if (f[FEAT_VIB_RMS] <= 2.600500f) {
                if (f[FEAT_REL_HUMIDITY] <= 57.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[1] += 1;
              }
            }
          }
        }
      } else {
        votes[4] += 1;
      }
    } else {
      if (f[FEAT_VOLT] <= 13.555000f) {
        if (f[FEAT_BATT_TEMP] <= 39.750000f) {
          if (f[FEAT_MOTOR_TEMP] <= 33.250000f) {
            votes[5] += 1;
          } else {
            if (f[FEAT_BARO_ALT] <= 44.350000f) {
              if (f[FEAT_DIST_TO_HOME] <= 2171.849976f) {
                if (f[FEAT_R_INT] <= 0.049650f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 43.950001f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 51.150000f) {
                if (f[FEAT_VIB_RMS] <= 2.597500f) {
                  votes[3] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 59.350000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 43.850000f) {
            if (f[FEAT_VOLT] <= 13.315000f) {
              if (f[FEAT_R_INT] <= 0.049750f) {
                if (f[FEAT_DIST_TO_HOME] <= 2163.449951f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                votes[5] += 1;
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 2164.449951f) {
                votes[3] += 1;
              } else {
                votes[5] += 1;
              }
            }
          } else {
            if (f[FEAT_R_INT] <= 0.049650f) {
              if (f[FEAT_BATT_SOC] <= 43.950001f) {
                if (f[FEAT_REL_HUMIDITY] <= 52.900000f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              votes[5] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_BATT_SOC] <= 16.750000f) {
          votes[5] += 1;
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 533.049988f) {
            if (f[FEAT_VIB_RMS] <= 0.813500f) {
              if (f[FEAT_DIST_TO_HOME] <= 532.899994f) {
                votes[5] += 1;
              } else {
                votes[5] += 1;
              }
            } else {
              votes[5] += 1;
            }
          } else {
            votes[3] += 1;
          }
        }
      }
    }
  } else {
    if (f[FEAT_ESC_TEMP] <= 47.950001f) {
      if (f[FEAT_DIST_TO_HOME] <= 600.299988f) {
        if (f[FEAT_BATT_TEMP] <= 53.600000f) {
          votes[2] += 1;
        } else {
          votes[3] += 1;
        }
      } else {
        if (f[FEAT_CURR] <= 38.155001f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.054650f) {
            if (f[FEAT_BATT_SOC] <= 61.950001f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_BATT_TEMP] <= 48.650000f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_ESC_TEMP] <= 47.750000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_R_INT] <= 0.051350f) {
              if (f[FEAT_CURR] <= 36.535000f) {
                if (f[FEAT_BATT_TEMP] <= 48.650000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_MOTOR_TEMP] <= 55.049999f) {
                if (f[FEAT_BATT_SOC] <= 56.049999f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 52.100000f) {
            if (f[FEAT_REL_HUMIDITY] <= 57.949999f) {
              votes[3] += 1;
            } else {
              votes[2] += 1;
            }
          } else {
            votes[2] += 1;
          }
        }
      }
    } else {
      if (f[FEAT_CURR] <= 36.805000f) {
        if (f[FEAT_THERMAL_RATIO] <= 0.050500f) {
          if (f[FEAT_BATT_SOC] <= 60.500000f) {
            votes[3] += 1;
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_BATT_TEMP] <= 47.900000f) {
            if (f[FEAT_CURR] <= 36.670000f) {
              votes[3] += 1;
            } else {
              votes[2] += 1;
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 48.049999f) {
              if (f[FEAT_MOTOR_TEMP] <= 53.250000f) {
                if (f[FEAT_R_INT] <= 0.052350f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.052850f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_CURR] <= 37.514999f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.054650f) {
            if (f[FEAT_BATT_SOC] <= 60.950001f) {
              if (f[FEAT_THERMAL_RATIO] <= 0.053550f) {
                if (f[FEAT_REL_HUMIDITY] <= 59.549999f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.054350f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 62.750000f) {
                if (f[FEAT_VIB_RMS] <= 1.752500f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_TEMP] <= 50.350000f) {
              if (f[FEAT_BATT_SOC] <= 53.450001f) {
                if (f[FEAT_CURR] <= 37.135000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        } else {
          if (f[FEAT_CURR] <= 38.014999f) {
            if (f[FEAT_ESC_TEMP] <= 48.049999f) {
              if (f[FEAT_VIB_RMS] <= 1.205000f) {
                if (f[FEAT_VOLT] <= 13.355000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.054350f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            } else {
              votes[2] += 1;
            }
          } else {
            if (f[FEAT_BATT_TEMP] <= 48.850000f) {
              if (f[FEAT_MOTOR_TEMP] <= 54.049999f) {
                if (f[FEAT_MOTOR_TEMP] <= 53.950001f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      }
    }
  }
}

static inline void tree_9_predict(const float* f, uint16_t* votes) {
  if (f[FEAT_ESC_TEMP] <= 47.950001f) {
    if (f[FEAT_R_INT] <= 0.045050f) {
      if (f[FEAT_REL_HUMIDITY] <= 55.750000f) {
        if (f[FEAT_CURR] <= 27.025001f) {
          if (f[FEAT_DIST_TO_HOME] <= 480.050003f) {
            if (f[FEAT_DIST_TO_HOME] <= 271.550003f) {
              if (f[FEAT_DIST_TO_HOME] <= 244.849998f) {
                if (f[FEAT_VIB_RMS] <= 2.727500f) {
                  votes[0] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 0.866500f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_SOC] <= 88.750000f) {
                if (f[FEAT_BARO_ALT] <= 80.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                votes[4] += 1;
              }
            }
          } else {
            if (f[FEAT_R_INT] <= 0.044950f) {
              if (f[FEAT_ESC_TEMP] <= 34.350000f) {
                if (f[FEAT_DIST_TO_HOME] <= 989.000000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_R_INT] <= 0.039450f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 731.450012f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_THERMAL_RATIO] <= 0.033350f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_R_INT] <= 0.034350f) {
            if (f[FEAT_DIST_TO_HOME] <= 601.850006f) {
              if (f[FEAT_BARO_ALT] <= 80.049999f) {
                if (f[FEAT_VOLT] <= 15.305000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                votes[4] += 1;
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 620.549988f) {
                if (f[FEAT_VOLT] <= 15.275000f) {
                  votes[4] += 1;
                } else {
                  votes[0] += 1;
                }
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 51.650000f) {
                  votes[4] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 73.149998f) {
              if (f[FEAT_BATT_SOC] <= 57.150000f) {
                if (f[FEAT_REL_HUMIDITY] <= 51.050001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 72.750000f) {
                  votes[0] += 1;
                } else {
                  votes[0] += 1;
                }
              }
            } else {
              if (f[FEAT_CURR] <= 27.735000f) {
                if (f[FEAT_BARO_ALT] <= 79.950001f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 80.049999f) {
                  votes[0] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            }
          }
        }
      } else {
        if (f[FEAT_VOLT] <= 14.005000f) {
          if (f[FEAT_DIST_TO_HOME] <= 368.150009f) {
            if (f[FEAT_VIB_RMS] <= 2.600500f) {
              if (f[FEAT_VOLT] <= 13.995000f) {
                if (f[FEAT_BARO_ALT] <= 53.850000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_DIST_TO_HOME] <= 365.650009f) {
                  votes[3] += 1;
                } else {
                  votes[4] += 1;
                }
              }
            } else {
              votes[1] += 1;
            }
          } else {
            if (f[FEAT_BARO_ALT] <= 45.250000f) {
              if (f[FEAT_VIB_RMS] <= 3.587500f) {
                votes[3] += 1;
              } else {
                votes[1] += 1;
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 50.350000f) {
                if (f[FEAT_DIST_TO_HOME] <= 380.599991f) {
                  votes[1] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 51.850000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_DIST_TO_HOME] <= 428.250000f) {
            if (f[FEAT_MOTOR_TEMP] <= 36.350000f) {
              if (f[FEAT_BARO_ALT] <= 50.549999f) {
                if (f[FEAT_VIB_RMS] <= 2.600500f) {
                  votes[4] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_MOTOR_TEMP] <= 35.850000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_BARO_ALT] <= 51.049999f) {
                if (f[FEAT_MOTOR_TEMP] <= 36.450001f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 52.250000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_DIST_TO_HOME] <= 429.050003f) {
              if (f[FEAT_ESC_TEMP] <= 34.250000f) {
                if (f[FEAT_MOTOR_TEMP] <= 36.250000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                votes[1] += 1;
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 34.450001f) {
                if (f[FEAT_MOTOR_TEMP] <= 35.750000f) {
                  votes[1] += 1;
                } else {
                  votes[1] += 1;
                }
              } else {
                votes[4] += 1;
              }
            }
          }
        }
      }
    } else {
      if (f[FEAT_VOLT] <= 13.555000f) {
        if (f[FEAT_BATT_TEMP] <= 39.750000f) {
          if (f[FEAT_THERMAL_RATIO] <= 0.035350f) {
            if (f[FEAT_BATT_SOC] <= 43.850000f) {
              if (f[FEAT_REL_HUMIDITY] <= 55.600000f) {
                if (f[FEAT_VIB_RMS] <= 1.334000f) {
                  votes[5] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 2.597500f) {
                  votes[3] += 1;
                } else {
                  votes[1] += 1;
                }
              }
            } else {
              if (f[FEAT_BATT_TEMP] <= 39.650000f) {
                if (f[FEAT_BATT_SOC] <= 43.950001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BATT_SOC] <= 43.950001f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_MOTOR_TEMP] <= 39.450001f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 2169.850098f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_BARO_ALT] <= 35.550001f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_BATT_SOC] <= 43.850000f) {
            if (f[FEAT_BATT_SOC] <= 43.750000f) {
              votes[5] += 1;
            } else {
              if (f[FEAT_THERMAL_RATIO] <= 0.034850f) {
                if (f[FEAT_DIST_TO_HOME] <= 2165.699951f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                votes[3] += 1;
              }
            }
          } else {
            if (f[FEAT_THERMAL_RATIO] <= 0.056450f) {
              if (f[FEAT_MOTOR_TEMP] <= 55.049999f) {
                if (f[FEAT_DIST_TO_HOME] <= 2171.549927f) {
                  votes[3] += 1;
                } else {
                  votes[5] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      } else {
        if (f[FEAT_R_INT] <= 0.048750f) {
          if (f[FEAT_MOTOR_TEMP] <= 47.450001f) {
            votes[3] += 1;
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_BATT_TEMP] <= 35.549999f) {
            votes[3] += 1;
          } else {
            if (f[FEAT_THERMAL_RATIO] <= 0.042350f) {
              if (f[FEAT_VIB_RMS] <= 0.813500f) {
                if (f[FEAT_BATT_SOC] <= 16.750000f) {
                  votes[5] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_VIB_RMS] <= 0.855500f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              votes[3] += 1;
            }
          }
        }
      }
    }
  } else {
    if (f[FEAT_CURR] <= 36.985001f) {
      if (f[FEAT_CURR] <= 36.594999f) {
        if (f[FEAT_BARO_ALT] <= 34.049999f) {
          if (f[FEAT_REL_HUMIDITY] <= 56.950001f) {
            if (f[FEAT_VIB_RMS] <= 1.464000f) {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_BATT_TEMP] <= 48.650000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              votes[2] += 1;
            }
          } else {
            if (f[FEAT_CURR] <= 35.535000f) {
              votes[3] += 1;
            } else {
              if (f[FEAT_VOLT] <= 12.975000f) {
                if (f[FEAT_CURR] <= 36.480000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_BARO_ALT] <= 33.650000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          }
        } else {
          if (f[FEAT_REL_HUMIDITY] <= 61.099998f) {
            if (f[FEAT_THERMAL_RATIO] <= 0.050750f) {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_DIST_TO_HOME] <= 625.349976f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_VIB_RMS] <= 1.652500f) {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                if (f[FEAT_ESC_TEMP] <= 48.200001f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            votes[3] += 1;
          }
        }
      } else {
        if (f[FEAT_CURR] <= 36.975000f) {
          if (f[FEAT_VOLT] <= 12.895000f) {
            if (f[FEAT_CURR] <= 36.900000f) {
              if (f[FEAT_DIST_TO_HOME] <= 645.500000f) {
                if (f[FEAT_DIST_TO_HOME] <= 643.000000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              votes[2] += 1;
            }
          } else {
            if (f[FEAT_BATT_SOC] <= 54.049999f) {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_BATT_SOC] <= 53.450001f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                if (f[FEAT_BATT_TEMP] <= 49.350000f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            }
          }
        } else {
          if (f[FEAT_R_INT] <= 0.050300f) {
            votes[3] += 1;
          } else {
            if (f[FEAT_ESC_TEMP] <= 48.049999f) {
              if (f[FEAT_DIST_TO_HOME] <= 645.750000f) {
                if (f[FEAT_REL_HUMIDITY] <= 58.500000f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                if (f[FEAT_BATT_TEMP] <= 50.500000f) {
                  votes[3] += 1;
                } else {
                  votes[3] += 1;
                }
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      }
    } else {
      if (f[FEAT_VOLT] <= 12.805000f) {
        votes[2] += 1;
      } else {
        if (f[FEAT_R_INT] <= 0.049450f) {
          if (f[FEAT_ESC_TEMP] <= 48.049999f) {
            if (f[FEAT_VOLT] <= 13.510000f) {
              votes[2] += 1;
            } else {
              votes[3] += 1;
            }
          } else {
            votes[2] += 1;
          }
        } else {
          if (f[FEAT_CURR] <= 37.514999f) {
            if (f[FEAT_VOLT] <= 12.995000f) {
              if (f[FEAT_MOTOR_TEMP] <= 54.350000f) {
                if (f[FEAT_ESC_TEMP] <= 48.049999f) {
                  votes[3] += 1;
                } else {
                  votes[2] += 1;
                }
              } else {
                votes[2] += 1;
              }
            } else {
              if (f[FEAT_DIST_TO_HOME] <= 616.399994f) {
                votes[3] += 1;
              } else {
                if (f[FEAT_REL_HUMIDITY] <= 57.650000f) {
                  votes[2] += 1;
                } else {
                  votes[2] += 1;
                }
              }
            }
          } else {
            if (f[FEAT_ESC_TEMP] <= 48.049999f) {
              if (f[FEAT_REL_HUMIDITY] <= 59.250000f) {
                if (f[FEAT_BATT_SOC] <= 63.449999f) {
                  votes[2] += 1;
                } else {
                  votes[3] += 1;
                }
              } else {
                votes[3] += 1;
              }
            } else {
              votes[2] += 1;
            }
          }
        }
      }
    }
  }
}

static inline uint8_t DroneHealth_Predict(const float* f) {
  uint16_t votes[6] = {0, 0, 0, 0, 0, 0};
  tree_0_predict(f, votes);
  tree_1_predict(f, votes);
  tree_2_predict(f, votes);
  tree_3_predict(f, votes);
  tree_4_predict(f, votes);
  tree_5_predict(f, votes);
  tree_6_predict(f, votes);
  tree_7_predict(f, votes);
  tree_8_predict(f, votes);
  tree_9_predict(f, votes);

  uint8_t best = 0;
  uint16_t max_v = votes[0];
  for (uint8_t c = 1; c < 6; c++) {
    if (votes[c] > max_v) { max_v = votes[c]; best = c; }
  }
  return best;
}

#endif // DRONE_HEALTH_MODEL_H

// ============================================================
// END EMBEDDED TINYML MODEL
// ============================================================

// ============================================================
// PIN DEFINITIONS (ESP32 MASTER PIN ASSIGNMENTS)
// ============================================================

#define SDA_PIN       21
#define SCL_PIN       22

#define DHTPIN        4
#define DHTTYPE       DHT22

#define NRF_CE        14
#define NRF_CSN       27

// ============================================================
// BAROMETER
// ============================================================

#define SEALEVELPRESSURE_HPA 1013.25

// ============================================================
// MPU6500 REGISTER MAP
// ============================================================

#define MPU6500_ADDR         0x68

#define MPU6500_GYRO_CONFIG  0x1B
#define MPU6500_ACCEL_CONFIG 0x1C
#define MPU6500_ACCEL_XOUT_H 0x3B
#define MPU6500_PWR_MGMT_1   0x6B
#define MPU6500_WHO_AM_I     0x75

// ============================================================
// NRF24 PACKET TYPES
// ============================================================

#define PACKET_TELEMETRY 0x01
#define PACKET_COMMAND   0x02

// ============================================================
// TELEMETRY PACKET
// Exactly 8 floats = 32 bytes (NRF24 maximum single-frame payload)
// ============================================================

struct TelemetryPacket {
  float roll;
  float pitch;
  float yaw;

  float bmpTemp;
  float pressure;
  float altitude;

  float dhtTemp;
  float humidity;
};

// ============================================================
// COMMAND PACKET
// Sent by Ground Station -> Flight Controller (22 bytes)
// ============================================================

struct CommandPacket {
  uint8_t type;
  uint16_t sequence;

  float throttle;
  float yaw;
  float roll;
  float pitch;

  bool leftPressed;
  bool rightPressed;

  uint8_t enabled;
};

// ============================================================
// PACKET OBJECTS & MODULE INSTANCES
// ============================================================

TelemetryPacket telemetry;
CommandPacket commandPacket;

Adafruit_BMP280 bmp;
DHT dht(DHTPIN, DHTTYPE);
RF24 radio(NRF_CE, NRF_CSN);

const byte pipeAddress[6] = "00001";

// ============================================================
// MPU6500 CALIBRATION OFFSETS & ORIENTATION
// ============================================================

float gyroX_offset = 0.0f;
float gyroY_offset = 0.0f;
float gyroZ_offset = 0.0f;

float accelX_offset = 0.0f;
float accelY_offset = 0.0f;
float accelZ_offset = 0.0f;

float roll  = 0.0f;
float pitch = 0.0f;
float yaw   = 0.0f;

// IMU Raw & Dynamics
float raw_ax = 0.0f, raw_ay = 0.0f, raw_az = 0.0f;
float raw_gx = 0.0f, raw_gy = 0.0f, raw_gz = 0.0f;
float vib_rms = 1.12f;

// ============================================================
// COMMAND STATE & FAILSAFE
// ============================================================

float throttleCommand = 0.0f;
float yawCommand      = 0.0f;
float rollCommand     = 0.0f;
float pitchCommand    = 0.0f;

bool leftStickPressed  = false;
bool rightStickPressed = false;
bool commandEnabled = false;

uint16_t lastCommandSequence = 0;
uint32_t lastCommandReceived = 0;
const uint32_t COMMAND_TIMEOUT = 500;

// ============================================================
// TIMING
// ============================================================

uint32_t lastMicroTime = 0;
uint32_t lastTelemetrySend = 0;
uint32_t lastTelemetryPrint = 0;
uint32_t lastDHTRead = 0;

const uint32_t TELEMETRY_INTERVAL = 100; // 10Hz High-Speed Telemetry
const uint32_t DHT_INTERVAL       = 2000;

// ============================================================
// ON-BOARD TINYML DIAGNOSTIC & SMART RTH PREDICTOR
// ============================================================

uint8_t current_predicted_fault = 0;
uint8_t failsafe_action_mode = 0; // 0=None, 1=Clamp, 2=Auto RTH, 3=Emergency Land

// Simulated/Estimated BMS along mission flight
float battery_soc = 85.0f;
float dist_to_home = 450.0f;


// ============================================================
// EMBEDDED TINYML INFERENCE
// Feature order MUST match training:
// 0 vib_rms
// 1 volt
// 2 curr
// 3 motor_temp
// 4 esc_temp
// 5 batt_temp
// 6 r_int
// 7 thermal_ratio
// 8 baro_alt
// 9 rel_humidity
// 10 dist_to_home
// 11 batt_soc
// ============================================================

uint8_t RunTinyMLDroneHealth(
    float vib,
    float volt,
    float curr,
    float motor_temp,
    float esc_temp,
    float batt_temp,
    float r_int,
    float thermal_ratio,
    float baro_alt,
    float rel_humidity,
    float distance_home,
    float soc
) {
    float ml_features[NUM_FEATURES] = {
        vib,
        volt,
        curr,
        motor_temp,
        esc_temp,
        batt_temp,
        r_int,
        thermal_ratio,
        baro_alt,
        rel_humidity,
        distance_home,
        soc
    };

    return DroneHealth_Predict(ml_features);
}



// ============================================================
// MPU6500 INITIALIZATION
// ============================================================

bool initMPU6500() {
  Wire.beginTransmission(MPU6500_ADDR);
  Wire.write(MPU6500_WHO_AM_I);

  if (Wire.endTransmission(false) != 0) {
    return false;
  }

  Wire.requestFrom((uint8_t)MPU6500_ADDR, (uint8_t)1);
  if (!Wire.available()) {
    return false;
  }

  uint8_t whoAmI = Wire.read();
  Serial.printf("[MPU6500] WHO_AM_I = 0x%02X\n", whoAmI);

  // Wake device
  Wire.beginTransmission(MPU6500_ADDR);
  Wire.write(MPU6500_PWR_MGMT_1);
  Wire.write(0x00);

  if (Wire.endTransmission() != 0) {
    return false;
  }

  delay(100);

  // Gyroscope: +/-500 deg/s (65.5 LSB/(deg/s))
  Wire.beginTransmission(MPU6500_ADDR);
  Wire.write(MPU6500_GYRO_CONFIG);
  Wire.write(0x08);
  Wire.endTransmission();

  // Accelerometer: +/-8g (4096 LSB/g)
  Wire.beginTransmission(MPU6500_ADDR);
  Wire.write(MPU6500_ACCEL_CONFIG);
  Wire.write(0x10);
  Wire.endTransmission();

  return true;
}

// ============================================================
// MPU6500 CALIBRATION
// ============================================================

void runDetailedCalibration() {
  Serial.println("\n[CALIBRATION] Keep flight controller completely flat and still...");
  Serial.println("Taking 1000 samples...");

  const int samples = 1000;
  float sumAccX = 0.0f, sumAccY = 0.0f, sumAccZ = 0.0f;
  float sumGyrX = 0.0f, sumGyrY = 0.0f, sumGyrZ = 0.0f;
  int validSamples = 0;

  for (int i = 0; i < samples; i++) {
    Wire.beginTransmission(MPU6500_ADDR);
    Wire.write(MPU6500_ACCEL_XOUT_H);
    Wire.endTransmission(false);

    Wire.requestFrom((uint8_t)MPU6500_ADDR, (uint8_t)14);
    if (Wire.available() >= 14) {
      int16_t rawAcX = (Wire.read() << 8) | Wire.read();
      int16_t rawAcY = (Wire.read() << 8) | Wire.read();
      int16_t rawAcZ = (Wire.read() << 8) | Wire.read();
      Wire.read(); Wire.read(); // Skip temp
      int16_t rawGyX = (Wire.read() << 8) | Wire.read();
      int16_t rawGyY = (Wire.read() << 8) | Wire.read();
      int16_t rawGyZ = (Wire.read() << 8) | Wire.read();

      sumAccX += rawAcX / 4096.0f;
      sumAccY += rawAcY / 4096.0f;
      sumAccZ += rawAcZ / 4096.0f;

      sumGyrX += rawGyX / 65.5f;
      sumGyrY += rawGyY / 65.5f;
      sumGyrZ += rawGyZ / 65.5f;

      validSamples++;
    }
    delay(4);
  }

  if (validSamples == 0) {
    Serial.println("[ERROR] No valid MPU6500 samples during calibration!");
    return;
  }

  accelX_offset = sumAccX / validSamples;
  accelY_offset = sumAccY / validSamples;
  accelZ_offset = (sumAccZ / validSamples) - 1.0f; // Board is flat, Z = +1g

  gyroX_offset = sumGyrX / validSamples;
  gyroY_offset = sumGyrY / validSamples;
  gyroZ_offset = sumGyrZ / validSamples;

  Serial.println("[OK] MPU6500 calibration complete.");
  Serial.printf("ACC OFFSET | X: %.4f | Y: %.4f | Z: %.4f\n", accelX_offset, accelY_offset, accelZ_offset);
  Serial.printf("GYR OFFSET | X: %.4f | Y: %.4f | Z: %.4f\n\n", gyroX_offset, gyroY_offset, gyroZ_offset);
}

// ============================================================
// MPU6500 UPDATE
// ============================================================

void updateIMU() {
  uint32_t currentTime = micros();
  float dt = (currentTime - lastMicroTime) / 1000000.0f;
  lastMicroTime = currentTime;

  if (dt <= 0.0f || dt > 0.1f) return;

  Wire.beginTransmission(MPU6500_ADDR);
  Wire.write(MPU6500_ACCEL_XOUT_H);
  Wire.endTransmission(false);

  Wire.requestFrom((uint8_t)MPU6500_ADDR, (uint8_t)14);

  if (Wire.available() >= 14) {
    int16_t rawAcX = (Wire.read() << 8) | Wire.read();
    int16_t rawAcY = (Wire.read() << 8) | Wire.read();
    int16_t rawAcZ = (Wire.read() << 8) | Wire.read();
    Wire.read(); Wire.read();
    int16_t rawGyX = (Wire.read() << 8) | Wire.read();
    int16_t rawGyY = (Wire.read() << 8) | Wire.read();
    int16_t rawGyZ = (Wire.read() << 8) | Wire.read();

    raw_ax = (rawAcX / 4096.0f) - accelX_offset;
    raw_ay = (rawAcY / 4096.0f) - accelY_offset;
    raw_az = (rawAcZ / 4096.0f) - accelZ_offset;

    raw_gx = (rawGyX / 65.5f) - gyroX_offset;
    raw_gy = (rawGyY / 65.5f) - gyroY_offset;
    raw_gz = (rawGyZ / 65.5f) - gyroZ_offset;

    // Vibration RMS proxy from high-frequency acceleration variance
    float acc_mag = sqrtf(raw_ax * raw_ax + raw_ay * raw_ay + raw_az * raw_az);
    vib_rms = 0.90f * vib_rms + 0.10f * fabsf(acc_mag - 1.0f) * 4.0f + 1.05f;

    float roll_acc = atan2f(raw_ay, raw_az) * 180.0f / (float)M_PI;
    float pitch_acc = atan2f(-raw_ax, sqrtf(raw_ay * raw_ay + raw_az * raw_az)) * 180.0f / (float)M_PI;

    // Complementary Filter: 96% gyro + 4% accel
    roll  = 0.96f * (roll + raw_gx * dt) + 0.04f * roll_acc;
    pitch = 0.96f * (pitch + raw_gy * dt) + 0.04f * pitch_acc;
    yaw  += raw_gz * dt;

    telemetry.roll  = roll;
    telemetry.pitch = pitch;
    telemetry.yaw   = yaw;
  }
}

// ============================================================
// RECEIVE COMMANDS FROM GROUND STATION
// ============================================================

void receiveCommands() {
  while (radio.available()) {
    uint8_t payloadSize = radio.getDynamicPayloadSize();

    if (payloadSize == 0 || payloadSize > 32) {
      radio.flush_rx();
      continue;
    }

    if (payloadSize != sizeof(CommandPacket)) {
      uint8_t throwaway[32];
      radio.read(throwaway, payloadSize);
      continue;
    }

    CommandPacket incoming;
    radio.read(&incoming, sizeof(incoming));

    if (incoming.type != PACKET_COMMAND) {
      continue;
    }

    commandPacket = incoming;
    throttleCommand  = constrain(incoming.throttle, 0.0f, 1.0f);
    yawCommand       = constrain(incoming.yaw, -1.0f, 1.0f);
    rollCommand      = constrain(incoming.roll, -1.0f, 1.0f);
    pitchCommand     = constrain(incoming.pitch, -1.0f, 1.0f);
    leftStickPressed  = incoming.leftPressed;
    rightStickPressed = incoming.rightPressed;
    commandEnabled   = (incoming.enabled != 0);
    lastCommandSequence = incoming.sequence;
    lastCommandReceived = millis();
  }
}

// ============================================================
// COMMAND FAILSAFE
// ============================================================

void updateCommandFailsafe() {
  if (millis() - lastCommandReceived > COMMAND_TIMEOUT) {
    throttleCommand = 0.0f;
    yawCommand      = 0.0f;
    rollCommand     = 0.0f;
    pitchCommand    = 0.0f;
    leftStickPressed  = false;
    rightStickPressed = false;
    commandEnabled = false;
  }
}

// ============================================================
// READ ENVIRONMENTAL SENSORS & RUN DIAGNOSTICS
// ============================================================

void updateEnvironmentalSensors() {
  telemetry.bmpTemp  = bmp.readTemperature();
  telemetry.pressure = bmp.readPressure() / 100.0f;
  telemetry.altitude = bmp.readAltitude(SEALEVELPRESSURE_HPA);

  if (millis() - lastDHTRead >= DHT_INTERVAL) {
    lastDHTRead = millis();
    float newTemp = dht.readTemperature();
    float newHumidity = dht.readHumidity();

    if (!isnan(newTemp)) telemetry.dhtTemp = newTemp;
    if (!isnan(newHumidity)) telemetry.humidity = newHumidity;
  }

  // ============================================================
  // REAL EMBEDDED TINYML INFERENCE
  // ============================================================
  // Build the exact 12-feature vector used during model training.
  // Existing telemetry/sensor logic is preserved.

  float est_current = 8.0f + (throttleCommand * 25.0f);

  float est_r_int =
      0.030f +
      (1.0f - (battery_soc / 100.0f)) * 0.020f;

  float est_volt =
      13.6f +
      (battery_soc / 100.0f) * 3.2f -
      (est_current * est_r_int);

  float est_motor_t =
      telemetry.bmpTemp +
      (est_current * 0.40f);

  float est_esc_t =
      telemetry.bmpTemp +
      (est_current * 0.32f);

  float est_batt_t =
      telemetry.bmpTemp +
      (est_current * 0.18f);

  float est_power =
      est_volt * est_current;

  float est_thermal_ratio =
      (est_motor_t - 26.0f) /
      (est_power + 0.001f);

  float humid_val =
      isnan(telemetry.humidity)
          ? 54.0f
          : telemetry.humidity;

  current_predicted_fault =
      RunTinyMLDroneHealth(
          vib_rms,
          est_volt,
          est_current,
          est_motor_t,
          est_esc_t,
          est_batt_t,
          est_r_int,
          est_thermal_ratio,
          telemetry.altitude,
          humid_val,
          dist_to_home,
          battery_soc
      );

  // Evaluate Autonomous Actions
  if (current_predicted_fault == 5) {
    failsafe_action_mode = 2; // Smart RTH
  } else if (current_predicted_fault == 1) {
    failsafe_action_mode = 2; // High Vibration RTH
  } else if (current_predicted_fault == 2) {
    failsafe_action_mode = 1; // Thermal throttle clamp 50%
    if (throttleCommand > 0.50f) throttleCommand = 0.50f;
  } else if (current_predicted_fault == 3) {
    failsafe_action_mode = 3; // Emergency controlled descent
  } else {
    failsafe_action_mode = 0; // Nominal
  }
}

// ============================================================
// SEND TELEMETRY VIA NRF24L01 (32 Bytes Exact)
// ============================================================

void sendTelemetry() {
  radio.stopListening();
  bool txStatus = radio.write(&telemetry, sizeof(TelemetryPacket));
  radio.startListening();

  if (millis() - lastTelemetryPrint >= 1000) {
    lastTelemetryPrint = millis();
    Serial.println("------------------------------------------------------------");
    Serial.printf("ORIENTATION | Roll: %7.2f° | Pitch: %7.2f° | Yaw: %7.2f°\n", telemetry.roll, telemetry.pitch, telemetry.yaw);
    Serial.printf("BAROMETER   | Temp: %7.2f°C | Press: %7.2fhPa | Alt: %7.2fm\n", telemetry.bmpTemp, telemetry.pressure, telemetry.altitude);
    Serial.printf("AMBIENT     | Temp: %7.2f°C | Hum: %7.2f%%\n", telemetry.dhtTemp, telemetry.humidity);
    Serial.printf("AI DIAG     | Fault: %u | Action: %u | Vib: %.2fg\n", current_predicted_fault, failsafe_action_mode, vib_rms);
    Serial.printf("RADIO TX    | %s (%d Bytes)\n", txStatus ? "SUCCESS" : "TRANSMIT FAIL", (int)sizeof(TelemetryPacket));
  }
}

// ============================================================
// NRF24 INITIALIZATION
// ============================================================

bool initRadio() {
  if (!radio.begin()) {
    Serial.println("[ERROR] NRF24L01 initialization failed! Check CE(14)/CSN(27) & 3.3V power.");
    return false;
  }

  radio.setPALevel(RF24_PA_LOW);
  radio.setDataRate(RF24_1MBPS);
  radio.setChannel(76);
  radio.setAutoAck(false);
  radio.enableDynamicPayloads();

  radio.openWritingPipe(pipeAddress);
  radio.openReadingPipe(1, pipeAddress);
  radio.startListening();

  Serial.println("[OK] NRF24L01 Initialized (1MBPS @ Channel 76, Pipe: 00001).");
  Serial.println("[RADIO] Bidirectional dynamic-payload mode active.");
  return true;
}

// ============================================================
// SETUP
// ============================================================

void setup() {
  Serial.begin(115200);
  delay(500);

  Serial.println("\n=======================================================");
  Serial.println("   AEROHEALTH: ESP32 DRONE FLIGHT BRAIN BOOT SEQUENCE  ");
  Serial.println("=======================================================");

  // 1. I2C (SDA=21, SCL=22)
  Wire.begin(SDA_PIN, SCL_PIN);
  Wire.setClock(400000);
  Serial.println("[OK] I2C Initialized (SDA=21, SCL=22).");

  // 2. BMP280 Barometer
  bool bmpOK = bmp.begin(0x76);
  if (!bmpOK) bmpOK = bmp.begin(0x77);
  if (!bmpOK) {
    Serial.println("[ERROR] BMP280 initialization failed!");
  } else {
    bmp.setSampling(
        Adafruit_BMP280::MODE_NORMAL,
        Adafruit_BMP280::SAMPLING_X2,
        Adafruit_BMP280::SAMPLING_X16,
        Adafruit_BMP280::FILTER_X16,
        Adafruit_BMP280::STANDBY_MS_500
    );
    Serial.println("[OK] BMP280 Barometer Online.");
  }

  // 3. DHT22 (GPIO 4)
  dht.begin();
  telemetry.dhtTemp = NAN;
  telemetry.humidity = NAN;
  Serial.println("[OK] DHT22 Temperature & Humidity Online (GPIO 4).");

  // 4. NRF24L01 (CE=14, CSN=27)
  initRadio();

  // 5. MPU6500 IMU (I2C 0x68)
  if (!initMPU6500()) {
    Serial.println("[ERROR] MPU6500 initialization failed!");
  } else {
    Serial.println("[OK] MPU6500 IMU Online (0x68).");
    runDetailedCalibration();
  }

  lastMicroTime = micros();
  lastTelemetrySend = millis();
  lastTelemetryPrint = millis();
  lastDHTRead = millis();
  lastCommandReceived = millis();

  telemetry.roll = 0.0f;
  telemetry.pitch = 0.0f;
  telemetry.yaw = 0.0f;
  telemetry.bmpTemp = 0.0f;
  telemetry.pressure = 0.0f;
  telemetry.altitude = 0.0f;

  Serial.println("\n=======================================================");
  Serial.println("           FLIGHT BRAIN ONLINE & READY                 ");
  Serial.println("=======================================================\n");
}

// ============================================================
// MAIN LOOP
// ============================================================

void loop() {
  updateIMU();
  receiveCommands();
  updateCommandFailsafe();

  if (millis() - lastTelemetryPrint >= 200) {
    updateEnvironmentalSensors();
  }

  if (millis() - lastTelemetrySend >= TELEMETRY_INTERVAL) {
    lastTelemetrySend = millis();
    sendTelemetry();
  }

  delay(2);
}
