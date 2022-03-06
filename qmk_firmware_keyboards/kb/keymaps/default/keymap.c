#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0]=LAYOUT(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_DEL, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGDN, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END, 
		KC_LCTL, KC_LALT, KC_LGUI, OSL(1), KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

	[1]=LAYOUT(
		KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PWR, 
		BL_TOGG, BL_DEC, RGB_TOG, BL_INC, BL_STEP, RGB_MOD, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_K, RGB_M_X, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_VAD, RGB_VAI, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_M_G, RGB_M_T, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, M(0), M(1), M(2), M(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( T(W), T(O), T(A), T(I), T(H), T(A), T(N), T(H), T(A), T(N), T(COMM), T(H), T(A), T(N), T(H), T(A), T(N), T(A), T(I), T(W), T(O), T(SPC), END );
			}
			break;
		case 1:
			if (record->event.pressed) {
				return MACRO( T(L), T(A), T(L), T(A), T(L), T(A), T(COMM), T(J), T(I), T(N), T(T), T(I), T(A), T(N), T(S), D(H), D(I), U(H), U(I), T(K), T(U), D(A), D(I), U(A), U(I), T(L), T(E), T(D), T(E), T(Y), T(I), T(T), T(I), T(A), T(N), D(LSFT), T(1), U(LSFT), T(SPC), END );
			}
			break;
		case 2:
			if (record->event.pressed) {
				return MACRO( T(Y), T(A), T(O), T(J), T(I), D(D), D(E), U(D), U(E), D(W), D(A), U(W), D(N), U(A), U(N), T(C), T(H), T(E), T(N), T(G), D(J), D(I), U(J), U(I), T(N), T(T), T(I), T(A), T(N), T(D), D(R), D(E), U(R), U(E), T(N), T(W), T(U), T(O), T(SPC), END );
			}
			break;
		case 3:
			if (record->event.pressed) {
				return MACRO( T(Y), T(A), T(O), T(G), T(E), T(I), T(H), T(A), T(N), T(H), T(A), T(N), T(S), D(H), D(I), U(H), U(I), T(P), T(I), T(N), T(SPC), D(LSFT), T(1), U(LSFT), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}