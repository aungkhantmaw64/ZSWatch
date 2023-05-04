#include "activity_event.h"
#include <zephyr/zbus/zbus.h>

ZBUS_CHAN_DEFINE(activity_state_data_chan,
                 struct activity_state_event,
                 NULL,
                 NULL,
                 ZBUS_OBSERVERS(),
                 ZBUS_MSG_INIT()
                );