#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
  debug_enable = true;
  debug_matrix = true;
  debug_keyboard = true;
  print("Booting up, fam\n");
  if (!oled_init(OLED_ROTATION_0)) {
    print("OLED init FAILED\n");
  } else {
    print("OLED init OK\n");
  }
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
  oled_clear();
  oled_write("GP12/13 OLED", false);
  print("OLED task ran\n");
  return false;
}
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(KC_A)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    print("Key pressed\n");
  }
  return true;
}