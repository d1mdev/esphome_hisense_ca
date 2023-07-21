#pragma once
#include "esphome/core/macros.h"
#include "esphome/components/api/api_connection.h"
#include "esphome/components/api/api_frame_helper.h"
#include "esphome/components/api/api_noise_context.h"
#include "esphome/components/api/api_pb2.h"
#include "esphome/components/api/api_pb2_service.h"
#include "esphome/components/api/api_server.h"
#include "esphome/components/api/custom_api_device.h"
#include "esphome/components/api/homeassistant_service.h"
#include "esphome/components/api/list_entities.h"
#include "esphome/components/api/proto.h"
#include "esphome/components/api/subscribe_state.h"
#include "esphome/components/api/user_services.h"
#include "esphome/components/button/automation.h"
#include "esphome/components/button/button.h"
#include "esphome/components/captive_portal/captive_index.h"
#include "esphome/components/captive_portal/captive_portal.h"
#include "esphome/components/climate/automation.h"
#include "esphome/components/climate/climate.h"
#include "esphome/components/climate/climate_mode.h"
#include "esphome/components/climate/climate_traits.h"
#include "esphome/components/custom/climate/custom_climate.h"
#include "esphome/components/esp32/gpio.h"
#include "esphome/components/esp32/preferences.h"
#include "esphome/components/globals/globals_component.h"
#include "esphome/components/json/json_util.h"
#include "esphome/components/logger/logger.h"
#include "esphome/components/md5/md5.h"
#include "esphome/components/mdns/mdns_component.h"
#include "esphome/components/network/ip_address.h"
#include "esphome/components/network/util.h"
#include "esphome/components/ota/automation.h"
#include "esphome/components/ota/ota_backend.h"
#include "esphome/components/ota/ota_backend_arduino_esp32.h"
#include "esphome/components/ota/ota_backend_arduino_esp8266.h"
#include "esphome/components/ota/ota_backend_arduino_rp2040.h"
#include "esphome/components/ota/ota_backend_esp_idf.h"
#include "esphome/components/ota/ota_component.h"
#include "esphome/components/preferences/syncer.h"
#include "esphome/components/restart/button/restart_button.h"
#include "esphome/components/safe_mode/button/safe_mode_button.h"
#include "esphome/components/sensor/automation.h"
#include "esphome/components/sensor/filter.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/shutdown/button/shutdown_button.h"
#include "esphome/components/sntp/sntp_component.h"
#include "esphome/components/socket/headers.h"
#include "esphome/components/socket/socket.h"
#include "esphome/components/template/button/template_button.h"
#include "esphome/components/time/automation.h"
#include "esphome/components/time/real_time_clock.h"
#include "esphome/components/uart/automation.h"
#include "esphome/components/uart/uart.h"
#include "esphome/components/uart/uart_component.h"
#include "esphome/components/uart/uart_component_esp32_arduino.h"
#include "esphome/components/uart/uart_component_esp8266.h"
#include "esphome/components/uart/uart_component_esp_idf.h"
#include "esphome/components/uart/uart_component_rp2040.h"
#include "esphome/components/uart/uart_debugger.h"
#include "esphome/components/web_server/list_entities.h"
#include "esphome/components/web_server/server_index.h"
#include "esphome/components/web_server/web_server.h"
#include "esphome/components/web_server_base/web_server_base.h"
#include "esphome/components/wifi/wifi_component.h"
#include "esphome/core/application.h"
#include "esphome/core/automation.h"
#include "esphome/core/base_automation.h"
#include "esphome/core/color.h"
#include "esphome/core/component.h"
#include "esphome/core/component_iterator.h"
#include "esphome/core/controller.h"
#include "esphome/core/datatypes.h"
#include "esphome/core/defines.h"
#include "esphome/core/entity_base.h"
#include "esphome/core/gpio.h"
#include "esphome/core/hal.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"
#include "esphome/core/macros.h"
#include "esphome/core/optional.h"
#include "esphome/core/preferences.h"
#include "esphome/core/scheduler.h"
#include "esphome/core/string_ref.h"
#include "esphome/core/time.h"
#include "esphome/core/util.h"
#include "esphome/core/version.h"
